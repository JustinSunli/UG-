// definedll.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "definedll.h"


// ���ǵ���������һ��ʾ��
DEFINEDLL_API int ndefinedll=0;

// ���ǵ���������һ��ʾ����
DEFINEDLL_API int fndefinedll(void)
{
	return 42;
}
DEFINEDLL_API int Add(int a,int b)
{
	return a+b;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� definedll.h
Cdefinedll::Cdefinedll()
{
	return;
}
