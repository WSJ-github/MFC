
// CTest10.2(StringExchange).h : CTest10.2(StringExchange) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest102StringExchangeApp:
// �йش����ʵ�֣������ CTest10.2(StringExchange).cpp
//

class CCTest102StringExchangeApp : public CWinApp
{
public:
	CCTest102StringExchangeApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest102StringExchangeApp theApp;
