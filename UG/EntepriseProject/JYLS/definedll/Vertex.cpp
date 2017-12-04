#include "stdafx.h"
#include "Vertex.h"
#include <algorithm>


Vertex::Vertex(void)
{
}


Vertex::~Vertex(void)
{
}

//�������Ƿ���ڱߵ����;
bool Vertex::ExistEdge(tag_t EdgeTag)
{
	if(std::find(m_plistEdge.begin(),m_plistEdge.end(),EdgeTag)!=m_plistEdge.end()){
		return true;
	}
	else 
		return false;
}

//���߼�������;
void Vertex::PushEdge(tag_t EdgeTag){
	m_plistEdge.push_back(EdgeTag);
}

bool Vertex::ExistFace(tag_t FaceTag)
{
	if(std::find(m_facelist.begin(),m_facelist.end(),FaceTag)!=m_facelist.end()){
		return true;
	}
	else 
		return false;
}

//���߼�������;
void Vertex::PushFace(tag_t FacesTag){
	m_facelist.push_back(FacesTag);
}