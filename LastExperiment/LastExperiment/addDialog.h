#pragma once


// addDialog 对话框

class addDialog : public CDialogEx
{
	DECLARE_DYNAMIC(addDialog)

public:
	addDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~addDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADDDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString name1;
	CString nameno1;
	CString major1;
	CString sex1;
	CString birth1;
	CString phone1;
	CString home1;
	CString filename1;
	virtual void OnOK();
};
