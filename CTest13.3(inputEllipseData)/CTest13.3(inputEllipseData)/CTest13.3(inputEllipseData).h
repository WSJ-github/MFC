
// CTest13.3(inputEllipseData).h : CTest13.3(inputEllipseData) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest133inputEllipseDataApp:
// �йش����ʵ�֣������ CTest13.3(inputEllipseData).cpp
//

class CCTest133inputEllipseDataApp : public CWinApp
{
public:
	CCTest133inputEllipseDataApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest133inputEllipseDataApp theApp;
