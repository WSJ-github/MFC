
// CTest11.3(ClickEllipseMove).h : CTest11.3(ClickEllipseMove) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest113ClickEllipseMoveApp:
// �йش����ʵ�֣������ CTest11.3(ClickEllipseMove).cpp
//

class CCTest113ClickEllipseMoveApp : public CWinApp
{
public:
	CCTest113ClickEllipseMoveApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest113ClickEllipseMoveApp theApp;
