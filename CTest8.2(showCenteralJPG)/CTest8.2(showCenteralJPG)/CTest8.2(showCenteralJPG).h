
// CTest8.2(showCenteralJPG).h : CTest8.2(showCenteralJPG) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest82showCenteralJPGApp:
// �йش����ʵ�֣������ CTest8.2(showCenteralJPG).cpp
//

class CCTest82showCenteralJPGApp : public CWinApp
{
public:
	CCTest82showCenteralJPGApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest82showCenteralJPGApp theApp;
