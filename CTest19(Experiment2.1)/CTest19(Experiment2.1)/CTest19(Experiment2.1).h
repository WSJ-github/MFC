
// CTest19(Experiment2.1).h : CTest19(Experiment2.1) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest19Experiment21App:
// �йش����ʵ�֣������ CTest19(Experiment2.1).cpp
//

class CCTest19Experiment21App : public CWinApp
{
public:
	CCTest19Experiment21App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest19Experiment21App theApp;
