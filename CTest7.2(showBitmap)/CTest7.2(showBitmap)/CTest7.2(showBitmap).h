
// CTest7.2(showBitmap).h : CTest7.2(showBitmap) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest72showBitmapApp:
// �йش����ʵ�֣������ CTest7.2(showBitmap).cpp
//

class CCTest72showBitmapApp : public CWinApp
{
public:
	CCTest72showBitmapApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest72showBitmapApp theApp;
