#pragma once


// alterDialog �Ի���

class alterDialog : public CDialogEx
{
	DECLARE_DYNAMIC(alterDialog)

public:
	alterDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~alterDialog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long alternum;
	virtual BOOL OnInitDialog();
};
