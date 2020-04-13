#pragma once


// connectDialog 对话框

class connectDialog : public CDialogEx
{
	DECLARE_DYNAMIC(connectDialog)

public:
	connectDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~connectDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString s1;
	int r;
	CString s2;
	afx_msg void OnBnClickedButton1();
};
