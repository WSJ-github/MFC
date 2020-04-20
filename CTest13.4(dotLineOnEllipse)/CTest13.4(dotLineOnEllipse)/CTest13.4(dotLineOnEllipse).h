
// CTest13.4(dotLineOnEllipse).h : CTest13.4(dotLineOnEllipse) 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest134dotLineOnEllipseApp:
// 有关此类的实现，请参阅 CTest13.4(dotLineOnEllipse).cpp
//

class CCTest134dotLineOnEllipseApp : public CWinApp
{
public:
	CCTest134dotLineOnEllipseApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest134dotLineOnEllipseApp theApp;
