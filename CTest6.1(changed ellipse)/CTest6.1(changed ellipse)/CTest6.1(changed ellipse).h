
// CTest6.1(changed ellipse).h : CTest6.1(changed ellipse) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest61changedellipseApp:
// �йش����ʵ�֣������ CTest6.1(changed ellipse).cpp
//

class CCTest61changedellipseApp : public CWinApp
{
public:
	CCTest61changedellipseApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest61changedellipseApp theApp;
