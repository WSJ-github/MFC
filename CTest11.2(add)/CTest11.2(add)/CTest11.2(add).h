
// CTest11.2(add).h : CTest11.2(add) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest112addApp:
// �йش����ʵ�֣������ CTest11.2(add).cpp
//

class CCTest112addApp : public CWinApp
{
public:
	CCTest112addApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest112addApp theApp;
