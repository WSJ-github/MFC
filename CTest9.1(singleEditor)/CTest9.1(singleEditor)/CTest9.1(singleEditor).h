
// CTest9.1(singleEditor).h : CTest9.1(singleEditor) 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CCTest91singleEditorApp:
// 有关此类的实现，请参阅 CTest9.1(singleEditor).cpp
//

class CCTest91singleEditorApp : public CWinApp
{
public:
	CCTest91singleEditorApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest91singleEditorApp theApp;
