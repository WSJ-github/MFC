
// CTest15(BigProject).h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCTest15BigProjectApp: 
// �йش����ʵ�֣������ CTest15(BigProject).cpp
//

class CCTest15BigProjectApp : public CWinApp
{
public:
	CCTest15BigProjectApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCTest15BigProjectApp theApp;