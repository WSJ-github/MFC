
// CTest13.2(DragEllipse).h : CTest13.2(DragEllipse) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest132DragEllipseApp:
// �йش����ʵ�֣������ CTest13.2(DragEllipse).cpp
//

class CCTest132DragEllipseApp : public CWinApp
{
public:
	CCTest132DragEllipseApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest132DragEllipseApp theApp;
