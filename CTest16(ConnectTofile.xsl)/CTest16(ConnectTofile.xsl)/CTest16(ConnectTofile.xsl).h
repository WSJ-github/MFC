
// CTest16(ConnectTofile.xsl).h : CTest16(ConnectTofile.xsl) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest16ConnectTofilexslApp:
// �йش����ʵ�֣������ CTest16(ConnectTofile.xsl).cpp
//

class CCTest16ConnectTofilexslApp : public CWinApp
{
public:
	CCTest16ConnectTofilexslApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest16ConnectTofilexslApp theApp;
