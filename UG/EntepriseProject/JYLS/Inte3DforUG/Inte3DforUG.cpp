// Inte3DforUG.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "Inte3DforUG.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE ����ӵ�
//		�ú�������ǰ�档
//
//		����:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ������ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//

// CInte3DforUGApp

BEGIN_MESSAGE_MAP(CInte3DforUGApp, CWinApp)
END_MESSAGE_MAP()


// CInte3DforUGApp ����

CInte3DforUGApp::CInte3DforUGApp()
{
	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CInte3DforUGApp ����

CInte3DforUGApp theApp;


// CInte3DforUGApp ��ʼ��

BOOL CInte3DforUGApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
