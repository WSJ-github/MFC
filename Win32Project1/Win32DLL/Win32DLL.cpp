// Win32DLL.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "Win32DLL.h"


// ���ǵ���������һ��ʾ��
WIN32DLL_API int nWin32DLL=0;

// ���ǵ���������һ��ʾ����
WIN32DLL_API int fnWin32DLL(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� Win32DLL.h
CWin32DLL::CWin32DLL()
{
    return;
}

WIN32DLL_API int factorialDLL(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum = sum*i;
	}
	return sum;
}

WIN32DLL_API float FACDLL::convert(float deg)
{
	//float pi = asin(30.0) * 6;   //������е�ֵ
	float radian = deg*(3.14 / 180);
	return radian;
}