#include "stdafx.h"
#include "Vertex.h"
#include <algorithm>


Vertex::Vertex(void)
{
}


Vertex::~Vertex(void)
{
}

//链表中是否存在边的情况;
bool Vertex::ExistEdge(tag_t EdgeTag)
{
	if(std::find(m_plistEdge.begin(),m_plistEdge.end(),EdgeTag)!=m_plistEdge.end()){
		return true;
	}
	else 
		return false;
}

//将边加入链表;
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

//将边加入链表;
void Vertex::PushFace(tag_t FacesTag){
	m_facelist.push_back(FacesTag);
}