// Win32DLL.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "Win32DLL.h"


// 这是导出变量的一个示例
WIN32DLL_API int nWin32DLL=0;

// 这是导出函数的一个示例。
WIN32DLL_API int fnWin32DLL(void)
{
    return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 Win32DLL.h
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
	//float pi = asin(30.0) * 6;   //计算出π的值
	float radian = deg*(3.14 / 180);
	return radian;
}