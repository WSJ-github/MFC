
// CTest19(Experiment2.2).h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCTest19Experiment22App: 
// �йش����ʵ�֣������ CTest19(Experiment2.2).cpp
//

class CCTest19Experiment22App : public CWinApp
{
public:
	CCTest19Experiment22App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCTest19Experiment22App theApp;