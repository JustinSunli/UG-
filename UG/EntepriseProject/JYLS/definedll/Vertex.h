#pragma once
#include "uf_defs.h"
#include <list>
#include "HPoint.h"
class Vertex
{
public:
	Vertex(void);
	~Vertex(void);
	//重载操作符==;
	bool operator ==(const Vertex &ptx){
		return m_Postion==ptx.m_Postion;   //比较位置是否相等;
	}
public:
	void SetPosition(HPoint pt){m_Postion=pt;}
	bool ExistEdge(tag_t EdgeTag);
	bool ExistFace(tag_t FaceTag);
	void PushEdge(tag_t EdgeTag);
	void PushFace(tag_t FaceTag);
	HPoint GetPosition(){return m_Postion;}
	std::list<tag_t>GettagFaceList(){return m_facelist;}
protected:
	std::list<tag_t>m_plistEdge;  //对应边的编号;
	std::list<tag_t>m_facelist;   //对于面的标记;
	HPoint  m_Postion;   //对应位置;
};
