#pragma once


// editDialog �Ի���

class editDialog : public CDialogEx
{
	DECLARE_DYNAMIC(editDialog)

public:
	editDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~editDialog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString editS;
	virtual BOOL OnInitDialog();
};
