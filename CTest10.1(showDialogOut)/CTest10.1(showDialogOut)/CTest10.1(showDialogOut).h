
// CTest10.1(showDialogOut).h : CTest10.1(showDialogOut) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest101showDialogOutApp:
// �йش����ʵ�֣������ CTest10.1(showDialogOut).cpp
//

class CCTest101showDialogOutApp : public CWinApp
{
public:
	CCTest101showDialogOutApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest101showDialogOutApp theApp;
