
// CTest14.2(readPictureAndShow).h : CTest14.2(readPictureAndShow) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest142readPictureAndShowApp:
// �йش����ʵ�֣������ CTest14.2(readPictureAndShow).cpp
//

class CCTest142readPictureAndShowApp : public CWinApp
{
public:
	CCTest142readPictureAndShowApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest142readPictureAndShowApp theApp;
