
// CTest13.4(dotLineOnEllipse).h : CTest13.4(dotLineOnEllipse) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest134dotLineOnEllipseApp:
// �йش����ʵ�֣������ CTest13.4(dotLineOnEllipse).cpp
//

class CCTest134dotLineOnEllipseApp : public CWinApp
{
public:
	CCTest134dotLineOnEllipseApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest134dotLineOnEllipseApp theApp;
