
// CTest4.2.h : CTest4.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest42App:
// �йش����ʵ�֣������ CTest4.2.cpp
//

class CCTest42App : public CWinApp
{
public:
	CCTest42App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest42App theApp;
