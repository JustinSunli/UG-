#pragma once
#include "uf_defs.h"
#include <list>
#include "HPoint.h"
class Vertex
{
public:
	Vertex(void);
	~Vertex(void);
	//���ز�����==;
	bool operator ==(const Vertex &ptx){
		return m_Postion==ptx.m_Postion;   //�Ƚ�λ���Ƿ����;
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
	std::list<tag_t>m_plistEdge;  //��Ӧ�ߵı��;
	std::list<tag_t>m_facelist;   //������ı��;
	HPoint  m_Postion;   //��Ӧλ��;
};
