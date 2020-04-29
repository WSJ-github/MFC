#pragma once


// Dialog1 对话框

class Dialog1 : public CDialogEx
{
	DECLARE_DYNAMIC(Dialog1)

public:
	Dialog1(CWnd* pParent = NULL);   // 标准构造函数
	void Dialog1::foo(CImage &img, int &sx, int &sy, int &w, int &h);
	virtual ~Dialog1();
	CString name;
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnPaint();
};
