
// CTest16(DynamicAndStaticLinkLibraries).h : CTest16(DynamicAndStaticLinkLibraries) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest16DynamicAndStaticLinkLibrariesApp:
// �йش����ʵ�֣������ CTest16(DynamicAndStaticLinkLibraries).cpp
//

class CCTest16DynamicAndStaticLinkLibrariesApp : public CWinApp
{
public:
	CCTest16DynamicAndStaticLinkLibrariesApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest16DynamicAndStaticLinkLibrariesApp theApp;
