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
	long addnum;
};
