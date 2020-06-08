#pragma once


// findDialog 对话框

class findDialog : public CDialogEx
{
	DECLARE_DYNAMIC(findDialog)

public:
	findDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~findDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FINDDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString condition;
};
