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
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit3();
	int r2;
	afx_msg void OnEnChangeEdit4();
	int r3;
	afx_msg void OnCbnSelchangeCombo1();
	CString s;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit6();
	int r1;
};
