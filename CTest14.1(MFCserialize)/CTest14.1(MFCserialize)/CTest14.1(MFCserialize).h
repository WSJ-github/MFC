
// CTest14.1(MFCserialize).h : CTest14.1(MFCserialize) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest141MFCserializeApp:
// �йش����ʵ�֣������ CTest14.1(MFCserialize).cpp
//

class CCTest141MFCserializeApp : public CWinApp
{
public:
	CCTest141MFCserializeApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest141MFCserializeApp theApp;
