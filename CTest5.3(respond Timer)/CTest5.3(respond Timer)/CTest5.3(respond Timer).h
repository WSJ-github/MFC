
// CTest5.3(respond Timer).h : CTest5.3(respond Timer) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest53respondTimerApp:
// �йش����ʵ�֣������ CTest5.3(respond Timer).cpp
//

class CCTest53respondTimerApp : public CWinApp
{
public:
	CCTest53respondTimerApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest53respondTimerApp theApp;
