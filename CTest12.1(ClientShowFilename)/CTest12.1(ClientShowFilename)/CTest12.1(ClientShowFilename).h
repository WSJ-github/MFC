
// CTest12.1(ClientShowFilename).h : CTest12.1(ClientShowFilename) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest121ClientShowFilenameApp:
// �йش����ʵ�֣������ CTest12.1(ClientShowFilename).cpp
//

class CCTest121ClientShowFilenameApp : public CWinApp
{
public:
	CCTest121ClientShowFilenameApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest121ClientShowFilenameApp theApp;
