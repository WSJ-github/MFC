#pragma once


// addDialog �Ի���

class addDialog : public CDialogEx
{
	DECLARE_DYNAMIC(addDialog)

public:
	addDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~addDialog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADDDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

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
