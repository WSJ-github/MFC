#pragma once
#include "afxwin.h"


// listDialog 对话框

class listDialog : public CDialogEx
{
	DECLARE_DYNAMIC(listDialog)

public:
	listDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~listDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListBox listS;
	CString ls;
	virtual BOOL OnInitDialog();
};
