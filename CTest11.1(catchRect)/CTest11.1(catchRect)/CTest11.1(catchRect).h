
// CTest11.1(catchRect).h : CTest11.1(catchRect) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest111catchRectApp:
// �йش����ʵ�֣������ CTest11.1(catchRect).cpp
//

class CCTest111catchRectApp : public CWinApp
{
public:
	CCTest111catchRectApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest111catchRectApp theApp;
