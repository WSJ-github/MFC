
// CTest5.2(control rect).h : CTest5.2(control rect) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest52controlrectApp:
// �йش����ʵ�֣������ CTest5.2(control rect).cpp
//

class CCTest52controlrectApp : public CWinApp
{
public:
	CCTest52controlrectApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest52controlrectApp theApp;
