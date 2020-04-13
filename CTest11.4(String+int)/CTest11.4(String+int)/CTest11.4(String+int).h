
// CTest11.4(String+int).h : CTest11.4(String+int) 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest114StringintApp:
// 有关此类的实现，请参阅 CTest11.4(String+int).cpp
//

class CCTest114StringintApp : public CWinApp
{
public:
	CCTest114StringintApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest114StringintApp theApp;
