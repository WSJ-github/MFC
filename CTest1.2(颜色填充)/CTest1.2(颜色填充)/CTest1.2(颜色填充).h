
// CTest1.2(��ɫ���).h : CTest1.2(��ɫ���) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CCTest12��ɫ���App:
// �йش����ʵ�֣������ CTest1.2(��ɫ���).cpp
//

class CCTest12��ɫ���App : public CWinApp
{
public:
	CCTest12��ɫ���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CCTest12��ɫ���App theApp;
