
// CTest13.5(FillRGB).h : CTest13.5(FillRGB) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest135FillRGBApp:
// �йش����ʵ�֣������ CTest13.5(FillRGB).cpp
//

class CCTest135FillRGBApp : public CWinApp
{
public:
	CCTest135FillRGBApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest135FillRGBApp theApp;
