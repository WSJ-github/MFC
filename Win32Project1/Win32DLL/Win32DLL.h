// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� WIN32DLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// WIN32DLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef WIN32DLL_EXPORTS
#define WIN32DLL_API __declspec(dllexport)
#else
#define WIN32DLL_API __declspec(dllimport)
#endif

// �����Ǵ� Win32DLL.dll ������
class WIN32DLL_API CWin32DLL {
public:
	CWin32DLL(void);
	// TODO:  �ڴ�������ķ�����
};

extern WIN32DLL_API int nWin32DLL;

WIN32DLL_API int fnWin32DLL(void);

WIN32DLL_API int factorialDLL(int n);  //�Զ���ķ���
class WIN32DLL_API FACDLL {  //�Զ������
public:
	float convert(float deg);
};