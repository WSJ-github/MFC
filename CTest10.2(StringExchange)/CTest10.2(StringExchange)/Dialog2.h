#pragma once


// Dialog2 对话框

class Dialog2 : public CDialogEx
{
	DECLARE_DYNAMIC(Dialog2)

public:
	Dialog2(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Dialog2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString s2;
	CString s1;
	afx_msg void OnBnClickedButton1();
};
