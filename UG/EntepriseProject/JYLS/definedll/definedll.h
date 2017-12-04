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


EXTERN_C DEFINEDLL_API void Add(int len,double *a);


EXTERN_C DEFINEDLL_API int GenerateFaceFaceRelationCode(tag_t face1, tag_t face2, int* code);

EXTERN_C DEFINEDLL_API int	EvaluateEdgeAtMidPoint(tag_t face, tag_t edge, double* pos, double* tanvec);

//�õ�һ�������ڻ�����Ŀ
EXTERN_C DEFINEDLL_API void	GetLoopsNumber(tag_t face, int* loopNum,int *InnerloopNum);

//�õ�body�����ڻ����е���Ŀ
EXTERN_C DEFINEDLL_API int GetInnerLoopEdgesNumber();

//�õ��ڻ������еı�
EXTERN_C DEFINEDLL_API void GetInnerLoopEdge(tag_t* InnerloopEdgeArray,int len);

//���������õ��ڻ��ߵı�ʶ
EXTERN_C DEFINEDLL_API tag_t GetInnerIndexEdge(int index);

//����һ������������ڻ��ߵĸ���
EXTERN_C DEFINEDLL_API int GetInnerLoopEdgesNum(tag_t face);

//�����������edge��tagֵ
EXTERN_C DEFINEDLL_API tag_t GetEdgeTagInInnerLoop(tag_t face,int index);