
// CTest7.1(show.NameAndGraph).h : CTest7.1(show.NameAndGraph) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest71showNameAndGraphApp:
// �йش����ʵ�֣������ CTest7.1(show.NameAndGraph).cpp
//

class CCTest71showNameAndGraphApp : public CWinApp
{
public:
	CCTest71showNameAndGraphApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest71showNameAndGraphApp theApp;
