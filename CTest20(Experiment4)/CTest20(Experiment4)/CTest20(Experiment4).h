
// CTest20(Experiment4).h : CTest20(Experiment4) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest20Experiment4App:
// �йش����ʵ�֣������ CTest20(Experiment4).cpp
//

class CCTest20Experiment4App : public CWinApp
{
public:
	CCTest20Experiment4App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest20Experiment4App theApp;
