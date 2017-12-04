// definedll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "definedll.h"


// 这是导出变量的一个示例
DEFINEDLL_API int ndefinedll=0;

// 这是导出函数的一个示例。
DEFINEDLL_API int fndefinedll(void)
{
	return 42;
}
DEFINEDLL_API int Add(int a,int b)
{
	return a+b;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 definedll.h
Cdefinedll::Cdefinedll()
{
	return;
}
