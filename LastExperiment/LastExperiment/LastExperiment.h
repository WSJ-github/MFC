
// LastExperiment.h : LastExperiment Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CLastExperimentApp:
// �йش����ʵ�֣������ LastExperiment.cpp
//

class CLastExperimentApp : public CWinApp
{
public:
	CLastExperimentApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CLastExperimentApp theApp;
