#pragma once


// bigDialog �Ի���

class bigDialog : public CDialogEx
{
	DECLARE_DYNAMIC(bigDialog)

public:
	bigDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~bigDialog();
	CString str;

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
