
// CTest13.1(CalculatorBasicInDialog).h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCTest131CalculatorBasicInDialogApp: 
// �йش����ʵ�֣������ CTest13.1(CalculatorBasicInDialog).cpp
//

class CCTest131CalculatorBasicInDialogApp : public CWinApp
{
public:
	CCTest131CalculatorBasicInDialogApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCTest131CalculatorBasicInDialogApp theApp;