#pragma once


// dialog1 �Ի���

class dialog1 : public CDialogEx
{
	DECLARE_DYNAMIC(dialog1)

public:
	dialog1(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~dialog1();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int r1;
	int r2;
	int r3;
	int r4;
};
