
// CTest13.5(FillRGB).h : CTest13.5(FillRGB) 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest135FillRGBApp:
// 有关此类的实现，请参阅 CTest13.5(FillRGB).cpp
//

class CCTest135FillRGBApp : public CWinApp
{
public:
	CCTest135FillRGBApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest135FillRGBApp theApp;
