
// CTest15.1(SaveEllipse).h : CTest15.1(SaveEllipse) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest151SaveEllipseApp:
// �йش����ʵ�֣������ CTest15.1(SaveEllipse).cpp
//

class CCTest151SaveEllipseApp : public CWinApp
{
public:
	CCTest151SaveEllipseApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest151SaveEllipseApp theApp;
