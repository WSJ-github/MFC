
// ������ʾ��Բ.h : ������ʾ��Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C������ʾ��ԲApp:
// �йش����ʵ�֣������ ������ʾ��Բ.cpp
//

class C������ʾ��ԲApp : public CWinApp
{
public:
	C������ʾ��ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C������ʾ��ԲApp theApp;
