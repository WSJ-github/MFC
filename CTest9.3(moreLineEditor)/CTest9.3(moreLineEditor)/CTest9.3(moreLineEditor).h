
// CTest9.3(moreLineEditor).h : CTest9.3(moreLineEditor) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest93moreLineEditorApp:
// �йش����ʵ�֣������ CTest9.3(moreLineEditor).cpp
//

class CCTest93moreLineEditorApp : public CWinApp
{
public:
	CCTest93moreLineEditorApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest93moreLineEditorApp theApp;
