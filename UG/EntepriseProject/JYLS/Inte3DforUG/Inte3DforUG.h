// Inte3DforUG.h : Inte3DforUG DLL 的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CInte3DforUGApp
// 有关此类实现的信息，请参阅 Inte3DforUG.cpp
//

class CInte3DforUGApp : public CWinApp
{
public:
	CInte3DforUGApp();

// 重写
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
