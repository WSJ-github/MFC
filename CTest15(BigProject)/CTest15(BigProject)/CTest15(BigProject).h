
// CTest15(BigProject).h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CCTest15BigProjectApp: 
// 有关此类的实现，请参阅 CTest15(BigProject).cpp
//

class CCTest15BigProjectApp : public CWinApp
{
public:
	CCTest15BigProjectApp();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern CCTest15BigProjectApp theApp;