
// CTest10.2(StringExchange).h : CTest10.2(StringExchange) 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest102StringExchangeApp:
// 有关此类的实现，请参阅 CTest10.2(StringExchange).cpp
//

class CCTest102StringExchangeApp : public CWinApp
{
public:
	CCTest102StringExchangeApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest102StringExchangeApp theApp;
