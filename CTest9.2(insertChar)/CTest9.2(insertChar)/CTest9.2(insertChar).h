
// CTest9.2(insertChar).h : CTest9.2(insertChar) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest92insertCharApp:
// �йش����ʵ�֣������ CTest9.2(insertChar).cpp
//

class CCTest92insertCharApp : public CWinApp
{
public:
	CCTest92insertCharApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest92insertCharApp theApp;
