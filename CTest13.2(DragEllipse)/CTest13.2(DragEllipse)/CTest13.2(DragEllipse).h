
// CTest13.2(DragEllipse).h : CTest13.2(DragEllipse) 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest132DragEllipseApp:
// 有关此类的实现，请参阅 CTest13.2(DragEllipse).cpp
//

class CCTest132DragEllipseApp : public CWinApp
{
public:
	CCTest132DragEllipseApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest132DragEllipseApp theApp;
