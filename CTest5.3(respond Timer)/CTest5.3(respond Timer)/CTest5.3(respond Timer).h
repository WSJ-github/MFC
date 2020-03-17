
// CTest5.3(respond Timer).h : CTest5.3(respond Timer) 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest53respondTimerApp:
// 有关此类的实现，请参阅 CTest5.3(respond Timer).cpp
//

class CCTest53respondTimerApp : public CWinApp
{
public:
	CCTest53respondTimerApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest53respondTimerApp theApp;
