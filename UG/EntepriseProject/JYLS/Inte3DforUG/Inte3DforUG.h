// Inte3DforUG.h : Inte3DforUG DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CInte3DforUGApp
// �йش���ʵ�ֵ���Ϣ������� Inte3DforUG.cpp
//

class CInte3DforUGApp : public CWinApp
{
public:
	CInte3DforUGApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
