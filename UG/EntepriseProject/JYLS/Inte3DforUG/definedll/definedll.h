// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� DEFINEDLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// DEFINEDLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef DEFINEDLL_EXPORTS
#define DEFINEDLL_API __declspec(dllexport)
#else
#define DEFINEDLL_API __declspec(dllimport)
#endif

// �����Ǵ� definedll.dll ������
class DEFINEDLL_API Cdefinedll {
public:
	Cdefinedll(void);
	// TODO: �ڴ�������ķ�����
};

extern DEFINEDLL_API int ndefinedll;

DEFINEDLL_API int fndefinedll(void);

EXTERN_C DEFINEDLL_API int Add(int a,int b);
