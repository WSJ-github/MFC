
// CTest5.1(movemoseTime).h : CTest5.1(movemoseTime) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest51movemoseTimeApp:
// �йش����ʵ�֣������ CTest5.1(movemoseTime).cpp
//

class CCTest51movemoseTimeApp : public CWinApp
{
public:
	CCTest51movemoseTimeApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest51movemoseTimeApp theApp;
