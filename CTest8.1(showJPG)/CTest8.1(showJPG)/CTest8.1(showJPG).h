
// CTest8.1(showJPG).h : CTest8.1(showJPG) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest81showJPGApp:
// �йش����ʵ�֣������ CTest8.1(showJPG).cpp
//

class CCTest81showJPGApp : public CWinApp
{
public:
	CCTest81showJPGApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest81showJPGApp theApp;
