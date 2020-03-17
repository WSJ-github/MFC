
// CTest5.1(movemoseTime).h : CTest5.1(movemoseTime) 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest51movemoseTimeApp:
// 有关此类的实现，请参阅 CTest5.1(movemoseTime).cpp
//

class CCTest51movemoseTimeApp : public CWinApp
{
public:
	CCTest51movemoseTimeApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest51movemoseTimeApp theApp;
