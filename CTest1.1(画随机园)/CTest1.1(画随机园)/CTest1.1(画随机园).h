
// CTest1.1(�����԰).h : CTest1.1(�����԰) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest11�����԰App:
// �йش����ʵ�֣������ CTest1.1(�����԰).cpp
//

class CCTest11�����԰App : public CWinApp
{
public:
	CCTest11�����԰App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest11�����԰App theApp;
