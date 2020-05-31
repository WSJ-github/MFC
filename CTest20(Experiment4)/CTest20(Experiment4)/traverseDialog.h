#pragma once


// traverseDialog 对话框

class traverseDialog : public CDialogEx
{
	DECLARE_DYNAMIC(traverseDialog)

public:
	traverseDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~traverseDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TRAVERSEDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString traverse;
	virtual BOOL OnInitDialog();
	afx_msg void OnEnChangeEdit1();
};
