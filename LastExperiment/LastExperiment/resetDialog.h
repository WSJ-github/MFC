#pragma once


// resetDialog 对话框

class resetDialog : public CDialogEx
{
	DECLARE_DYNAMIC(resetDialog)

public:
	resetDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~resetDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RESETDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString name2;
	CString nameno2;
	CString major2;
	CString sex2;
	CString birth2;
	CString phone2;
	CString home2;
	CString filename2;
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	boolean flag1;  //用来标记
};
