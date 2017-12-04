// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 DEFINEDLL_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// DEFINEDLL_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef DEFINEDLL_EXPORTS
#define DEFINEDLL_API __declspec(dllexport)
#else
#define DEFINEDLL_API __declspec(dllimport)
#endif

// 此类是从 definedll.dll 导出的
class DEFINEDLL_API Cdefinedll {
public:
	Cdefinedll(void);
	// TODO: 在此添加您的方法。
};

extern DEFINEDLL_API int ndefinedll;

DEFINEDLL_API int fndefinedll(void);


EXTERN_C DEFINEDLL_API void Add(int len,double *a);


EXTERN_C DEFINEDLL_API int GenerateFaceFaceRelationCode(tag_t face1, tag_t face2, int* code);

EXTERN_C DEFINEDLL_API int	EvaluateEdgeAtMidPoint(tag_t face, tag_t edge, double* pos, double* tanvec);

//得到一个面中内环的数目
EXTERN_C DEFINEDLL_API void	GetLoopsNumber(tag_t face, int* loopNum,int *InnerloopNum);

//得到body所有内环边中的数目
EXTERN_C DEFINEDLL_API int GetInnerLoopEdgesNumber();

//得到内环中所有的边
EXTERN_C DEFINEDLL_API void GetInnerLoopEdge(tag_t* InnerloopEdgeArray,int len);

//根据索引得到内环边的标识
EXTERN_C DEFINEDLL_API tag_t GetInnerIndexEdge(int index);

//根据一个面计算面中内环边的个数
EXTERN_C DEFINEDLL_API int GetInnerLoopEdgesNum(tag_t face);

//根据索引获得edge的tag值
EXTERN_C DEFINEDLL_API tag_t GetEdgeTagInInnerLoop(tag_t face,int index);