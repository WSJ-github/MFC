
// CTest17(studentshow).h : CTest17(studentshow) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest17studentshowApp:
// �йش����ʵ�֣������ CTest17(studentshow).cpp
//

class CCTest17studentshowApp : public CWinApp
{
public:
	CCTest17studentshowApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest17studentshowApp theApp;
