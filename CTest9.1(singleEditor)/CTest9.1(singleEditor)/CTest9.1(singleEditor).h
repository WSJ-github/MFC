
// CTest9.1(singleEditor).h : CTest9.1(singleEditor) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest91singleEditorApp:
// �йش����ʵ�֣������ CTest9.1(singleEditor).cpp
//

class CCTest91singleEditorApp : public CWinApp
{
public:
	CCTest91singleEditorApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest91singleEditorApp theApp;
