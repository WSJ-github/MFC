#pragma once
#include "afxwin.h"


// listDialog �Ի���

class listDialog : public CDialogEx
{
	DECLARE_DYNAMIC(listDialog)

public:
	listDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~listDialog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListBox listS;
	CString ls;
	virtual BOOL OnInitDialog();
};
