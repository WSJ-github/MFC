#pragma once


// selectDialog �Ի���

class selectDialog : public CDialogEx
{
	DECLARE_DYNAMIC(selectDialog)

public:
	selectDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~selectDialog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SELECTDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString condition;
};
