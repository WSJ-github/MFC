
// CTest2.1(��ʾ����).h : CTest2.1(��ʾ����) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest21��ʾ����App:
// �йش����ʵ�֣������ CTest2.1(��ʾ����).cpp
//

class CCTest21��ʾ����App : public CWinApp
{
public:
	CCTest21��ʾ����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest21��ʾ����App theApp;
