#pragma once


// findDialog �Ի���

class findDialog : public CDialogEx
{
	DECLARE_DYNAMIC(findDialog)

public:
	findDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~findDialog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FINDDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString condition;
};
