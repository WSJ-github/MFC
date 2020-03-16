
// CTest1.1(画随机园).h : CTest1.1(画随机园) 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest11画随机园App:
// 有关此类的实现，请参阅 CTest1.1(画随机园).cpp
//

class CCTest11画随机园App : public CWinApp
{
public:
	CCTest11画随机园App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest11画随机园App theApp;
