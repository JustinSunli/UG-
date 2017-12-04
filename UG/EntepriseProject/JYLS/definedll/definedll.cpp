// definedll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "definedll.h"
#include "Vertex.h"
#include <set>

#define EPS_Z   0.1    //定义精度;

//存储一个body中所有内环的边
std::set<tag_t> global_InnerLoopEdges;

int GetEdgeSenseInFace(tag_t face, tag_t edge);
int GetFaceOuterNormAtPos(tag_t face, double* nm, double* pos);
// 这是导出变量的一个示例
DEFINEDLL_API int ndefinedll=0;

// 这是导出函数的一个示例。
DEFINEDLL_API int fndefinedll(void)
{
	return 42;
}
DEFINEDLL_API void Add(int len,double *a)
{
	for(int i=0;i<len;++i)
		a[i]=i+1;
	
}

int GetEdgeSenseInFace(tag_t face, tag_t edge)//判断edge在面中的方向
{
	int sense=1;

	UF_BREP_topology_p_t topo;
	UF_BREP_state_p_t states;
	int nstates;

	UF_BREP_ask_topology(face,0,&topo,&nstates,&states);

	bool found=FALSE;
	for(int k=0; k<topo->num_children;k++) //face
	{
		UF_BREP_topology_p_t loop;  
		loop=topo->children[k].child;

		for(int i=0; i<loop->num_children;i++) //loop
		{
			UF_BREP_topology_p_t fin;
			fin=loop->children[i].child;			
			//int finWrtLoop=1;
			////Only for loop and fin children,otherwise UF_BREP_ORIENTATION_NONE
			//if(loop->children[i].orientation==UF_BREP_ORIENTATION_REVERSE) //确定是内环还是外环？
			//	finWrtLoop=-1;;

			for(int j=0; j<fin->num_children;j++) //fin=有方向的edge
			{
				UF_BREP_topology_p_t edg;
				edg=fin->children[j].child;
				int edgeWrtFin=1;
				if(fin->children[j].orientation==UF_BREP_ORIENTATION_REVERSE) //确定边的方向
					edgeWrtFin=-1;

				if(fin->children[j].child->tag==edge)
				{
					found=TRUE;
					//sense=finWrtLoop*edgeWrtFin;
					sense=edgeWrtFin;
					break;
				}	
			}
			if(found) break;
		}
		if(found) break;
	}
	UF_BREP_release_topology (topo, NULL);
	return sense;
}

EXTERN_C DEFINEDLL_API int	EvaluateEdgeAtMidPoint(tag_t face, tag_t edge, double* pos, double* tanvec)
{
	int sense=GetEdgeSenseInFace(face, edge);

	double parm; 
	double normal[3]; 
	double binormal[3];
	double limits[2];

	UF_EVAL_p_t evaluator;
	UF_EVAL_initialize(edge, &evaluator);
	UF_EVAL_ask_limits(evaluator,limits);
	parm=0.5*(limits[0]+limits[1]);
	UF_EVAL_evaluate_unit_vectors(evaluator, parm, pos, tanvec, normal, binormal);
	UF_EVAL_free(evaluator);

	if(sense== -1)
	{
		tanvec[0]=-tanvec[0];
		tanvec[1]=-tanvec[1];
		tanvec[2]=-tanvec[2];
	}
	return 0;

}

int GetEdgeType(tag_t edge)
{
	int type;
	UF_MODL_ask_edge_type(edge, &type);
	switch(type)
	{
	case UF_MODL_LINEAR_EDGE:		type=1; break;
	case UF_MODL_CIRCULAR_EDGE:	type=2; break;
	default:			type=0; break;
	} 
	return type;
}
//获得面类型;
int GetFaceType(tag_t face)
{
	int type,faceType;

	UF_MODL_ask_face_type(face, &type);

	switch(type)
	{
	case UF_MODL_PLANAR_FACE:		faceType=0; break;
	case UF_MODL_CYLINDRICAL_FACE:	faceType=1; break;
	case UF_MODL_CONICAL_FACE:		faceType=2; break;
	case UF_MODL_SPHERICAL_FACE:	faceType=3; break;
	case UF_MODL_TOROIDAL_FACE:		faceType=4; break;
	case UF_MODL_SWEPT_FACE:		faceType=4; break;
	case UF_MODL_BLENDING_FACE:		faceType=4; break;
	case UF_MODL_PARAMETRIC_FACE:	faceType=4; break;
	case UF_MODL_OFFSET_FACE:		faceType=4; break;
	case UF_MODL_FOREIGN_FACE:		faceType=4; break;
	default:						faceType=4; break;
	}

	return faceType;
}
/*************
  【作者】：xuhang
  【参数】：
  【功能】：获取面在某点
  【日期】：2016/06/07
************************/
int GetFaceOuterNormAtPos(tag_t face, double* nm, double* pos)
{
	double para[2];
	UF_EVALSF_p_t evaluator;
	UF_EVALSF_pos3_s srfpos3;

	UF_EVALSF_initialize(face,&evaluator);
	UF_EVALSF_find_closest_point(evaluator,pos,&srfpos3);

	para[0]=srfpos3.uv[0];
	para[1]=srfpos3.uv[1];

	//UF_free(srf_pos3);
	UF_EVALSF_free(&evaluator);

	double pnt[3];
	double du[3];
	double dv[3];
	double du2[3];
	double dv2[3];
	double unitNorm[3];
	double radii[2];

	if(GetFaceType(face)==0)
	{
		para[0]=0.0; para[1]=0.0;
		UF_MODL_ask_face_props(face,para,pnt,du,dv,du2,dv2,unitNorm,radii);
	}
	else
	{
		UF_MODL_ask_face_props(face,para,pnt,du,dv,du2,dv2,unitNorm,radii);	
	}
	nm[0]=unitNorm[0];
	nm[1]=unitNorm[1];
	nm[2]=unitNorm[2];

	return 0;
}

EXTERN_C DEFINEDLL_API int GenerateFaceFaceRelationCode(tag_t face1, tag_t face2, int* code)
{
	uf_list_p_t adjacent_faces;
	UF_MODL_ask_adjac_faces(face1, &adjacent_faces);

	int cnt=0;
	bool isAdj=FALSE;    
	UF_MODL_ask_list_count(adjacent_faces, &cnt);
	for(int i=0; i<cnt; i++)
	{
		tag_t cur;
		UF_MODL_ask_list_item(adjacent_faces,i, &cur);
		if(cur==face2) { isAdj=TRUE; break; }  
	}

	UF_MODL_delete_list(&adjacent_faces);

	if(isAdj==FALSE) { *code=0; return 0; }

	//faceType:  0: Plane; 1: Cylinder; 2: Cone; 3: Sphere; 4: Others
	//convexity: 0: Tangent; 1: Convex; 2: Concave; 3: Others
	//Code for E: Cij=25* convexity(E)+ 5*faceTypemin+ faceTypemax;
	//UF_MODL_ask_face_data(objects[i],&type1,point1,dir,box,&radius,&rad_data,&norm_dir);


	//两面之间的相交线;
	//步骤: @1遍历面1的所有边;
	//@2查看所有边的相邻面是否有面2;
	uf_list_p_t faceEdges;
	UF_MODL_ask_face_edges(face1, &faceEdges);
	cnt=0;
	tag_t edge1=NULL;
	UF_MODL_ask_list_count(faceEdges, &cnt);
	for(int i=0; i<cnt; i++)
	{
		tag_t cur;
		UF_MODL_ask_list_item(faceEdges,i, &cur);
		bool found=FALSE;
		uf_list_p_t facesOfEdge;
		UF_MODL_ask_edge_faces (cur, &facesOfEdge);
		int cnt1;
		UF_MODL_ask_list_count(facesOfEdge, &cnt1);
		for(int k=0; k<cnt1; k++)
		{
			tag_t cur1;
			UF_MODL_ask_list_item(facesOfEdge,k, &cur1);
			if(cur1==face2) { 
				found=TRUE;
				//当面出现相交的时候;
				//if(GetEdgeType(cur)==1){
				//	double pt1[3],pt2[3];
				//	int iCount;
				//	UF_MODL_ask_edge_verts(cur,pt1,pt2,&iCount);
				//	Vertex*pVer=new Vertex();
				//	pVer->SetPosition(pt1);   //添加边的个数;
				//	DealWithVertex(pVer,cur,face1,face2);
				//	Vertex*pVer2=new Vertex();
				//	pVer2->SetPosition(pt2);   //添加边的个数;
				//	DealWithVertex(pVer2,cur,face1,face2);
				//}
				break; 
			}
		}
		UF_MODL_delete_list(&facesOfEdge);
		if(found==TRUE) {  edge1=cur; break;}
	}
	//找到边之后处理;
	UF_MODL_delete_list(&faceEdges);

	/*	if(edge1==NULL)   AfxMessageBox("");*/
	double tanvec[3],pos[3];

	//得到边的中点和切矢量;
	EvaluateEdgeAtMidPoint(face1,edge1,pos,tanvec);

	int edgetype=GetEdgeType(edge1);

	double nm1[3];
	double nm2[3];

	GetFaceOuterNormAtPos(face1,nm1,pos);
	GetFaceOuterNormAtPos(face2,nm2,pos);

	double d;
	UF_VEC3_dot(nm1,nm2, &d);
	if(d<-1.0)  d=-1.0;
	if(d> 1.0)	d= 1.0;  

	double vect1[3];
	UF_VEC3_cross (nm1,nm2,vect1);

	double midAngle; 
	double d1;
	UF_VEC3_dot(vect1,tanvec,&d1);
	if(d1>0) //Convex edge
	{
		double angle;
		angle=acos(d);
		angle=angle*180.0/PI;
		midAngle=180.0-angle;
	}
	else
	{
		double angle;
		angle=acos(d);
		angle=angle*180.0/PI;
		midAngle=180.0+angle;
	}
	int cnvx=0;
	if(fabs(midAngle-180.0)<EPS_Z)	cnvx=0;         //平面平行;
	else if(midAngle<180.0)			cnvx=1;       
	else							cnvx=2;    
	*code=edgetype*10+cnvx;      //边的类型,加上内外;   
	return 0;
}

//计算一个面中内外环的个数
EXTERN_C DEFINEDLL_API void GetLoopsNumber(tag_t face, int* loopNum,int *InnerloopNum)
{
	uf_loop_p_t loop_list;	
	UF_MODL_ask_face_loops(face,&loop_list);
	int count;
	UF_MODL_ask_loop_list_count(loop_list,&count);
	*loopNum=0;
	*InnerloopNum=0;
	for(int i=0;i<count;++i)
	{
		int type;
		uf_list_p_t list;
		UF_MODL_ask_loop_list_item(loop_list,i,&type,&list);
		if (type==2)//内环
		{
			(*InnerloopNum)++;
			int list_count;
			UF_MODL_ask_list_count(list,&list_count);
			tag_t edge_tag;
			for(int j=0;j<list_count;++j)
			{
				UF_MODL_ask_list_item(list,j,&edge_tag);
				global_InnerLoopEdges.insert(edge_tag);
			}
		}
	}
	*loopNum=count;
	UF_MODL_delete_loop_list(&loop_list);
}

//根据一个面计算面中内环边的个数
EXTERN_C DEFINEDLL_API int GetInnerLoopEdgesNum(tag_t face)
{
	uf_loop_p_t loop_list;	
	UF_MODL_ask_face_loops(face,&loop_list);
	int count;
	UF_MODL_ask_loop_list_count(loop_list,&count);

	int InnerEdgeNum=0;
	for(int i=0;i<count;++i)
	{
		int type;
		uf_list_p_t list;
		UF_MODL_ask_loop_list_item(loop_list,i,&type,&list);
		if (type==2)//内环
		{
			int list_count;
			UF_MODL_ask_list_count(list,&list_count);
			InnerEdgeNum+=list_count;
		}
	}
	return InnerEdgeNum;
}

//得到一个面中内环边的set集
std::set<tag_t> getFaceInnerEdgeSet(tag_t face)
{
	uf_loop_p_t loop_list;	
	UF_MODL_ask_face_loops(face,&loop_list);
	int count;
	UF_MODL_ask_loop_list_count(loop_list,&count);

	std::set<tag_t> EdgeSet;
	for(int i=0;i<count;++i)
	{
		int type;
		uf_list_p_t list;
		UF_MODL_ask_loop_list_item(loop_list,i,&type,&list);
		if (type==2)//内环
		{
			int list_count;
			UF_MODL_ask_list_count(list,&list_count);
			tag_t edge_tag;
			for(int j=0;j<list_count;++j)
			{
				UF_MODL_ask_list_item(list,j,&edge_tag);
				EdgeSet.insert(edge_tag);
			}
		}
	}
	return EdgeSet;
}

//根据索引获得edge的tag值
EXTERN_C DEFINEDLL_API tag_t GetEdgeTagInInnerLoop(tag_t face,int index)
{
	std::set<tag_t> EdgeSet=getFaceInnerEdgeSet(face);
	std::set<tag_t>::iterator it=EdgeSet.begin();
	for(int i=0;i<index;++i)
		++it;
	return *it;
}
//得到boyd中内环边的数目
EXTERN_C DEFINEDLL_API int GetInnerLoopEdgesNumber()
{
	return global_InnerLoopEdges.size();
}

//得到boyd中所有内环中的边,@param 1,输出参数内环边的表示，2、输入参数内环边的个数
EXTERN_C DEFINEDLL_API void GetInnerLoopEdge(tag_t* InnerloopEdgeArray,int len)
{
	InnerloopEdgeArray=new tag_t[len];
	int k=0;
	for(std::set<tag_t>::iterator it=global_InnerLoopEdges.begin();it!=global_InnerLoopEdges.end();it++)
	{
		InnerloopEdgeArray[k]=*it;
		k++;
	}
}

//返回全局变量global_InnerLoopEdges中指定索引的tag_t值
EXTERN_C DEFINEDLL_API tag_t GetInnerIndexEdge(int index)
{
	std::set<tag_t>::iterator it=global_InnerLoopEdges.begin();
	for(int i=0;i<index;++i)
			it++;
	return *it;
}

Cdefinedll::Cdefinedll()
{
	return;
}
