
// CTest17(studentshow2).h : CTest17(studentshow2) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest17studentshow2App:
// �йش����ʵ�֣������ CTest17(studentshow2).cpp
//

class CCTest17studentshow2App : public CWinApp
{
public:
	CCTest17studentshow2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest17studentshow2App theApp;
