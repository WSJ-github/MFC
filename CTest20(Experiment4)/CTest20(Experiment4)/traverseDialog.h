#pragma once


// traverseDialog �Ի���

class traverseDialog : public CDialogEx
{
	DECLARE_DYNAMIC(traverseDialog)

public:
	traverseDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~traverseDialog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TRAVERSEDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString traverse;
	virtual BOOL OnInitDialog();
	afx_msg void OnEnChangeEdit1();
};
