#pragma once


// RGBdialog �Ի���

class RGBdialog : public CDialogEx
{
	DECLARE_DYNAMIC(RGBdialog)

public:
	RGBdialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~RGBdialog();

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
};
