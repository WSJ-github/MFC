
// CTest18(Experiment3).h : CTest18(Experiment3) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest18Experiment3App:
// �йش����ʵ�֣������ CTest18(Experiment3).cpp
//

class CCTest18Experiment3App : public CWinApp
{
public:
	CCTest18Experiment3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest18Experiment3App theApp;
