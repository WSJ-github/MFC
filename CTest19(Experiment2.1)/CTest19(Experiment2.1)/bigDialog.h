#pragma once


// bigDialog 对话框

class bigDialog : public CDialogEx
{
	DECLARE_DYNAMIC(bigDialog)

public:
	bigDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~bigDialog();
	CString filename;

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
