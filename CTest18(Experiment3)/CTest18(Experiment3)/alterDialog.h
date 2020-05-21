#pragma once


// alterDialog 对话框

class alterDialog : public CDialogEx
{
	DECLARE_DYNAMIC(alterDialog)

public:
	alterDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~alterDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	long alternum;
	virtual BOOL OnInitDialog();
};
