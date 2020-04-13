
// CTest11.2(add).h : CTest11.2(add) 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest112addApp:
// 有关此类的实现，请参阅 CTest11.2(add).cpp
//

class CCTest112addApp : public CWinApp
{
public:
	CCTest112addApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest112addApp theApp;
