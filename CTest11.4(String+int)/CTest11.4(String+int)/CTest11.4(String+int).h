
// CTest11.4(String+int).h : CTest11.4(String+int) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest114StringintApp:
// �йش����ʵ�֣������ CTest11.4(String+int).cpp
//

class CCTest114StringintApp : public CWinApp
{
public:
	CCTest114StringintApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest114StringintApp theApp;
