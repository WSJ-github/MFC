
// CTest1.2(颜色填充).h : CTest1.2(颜色填充) 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest12颜色填充App:
// 有关此类的实现，请参阅 CTest1.2(颜色填充).cpp
//

class CCTest12颜色填充App : public CWinApp
{
public:
	CCTest12颜色填充App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest12颜色填充App theApp;
