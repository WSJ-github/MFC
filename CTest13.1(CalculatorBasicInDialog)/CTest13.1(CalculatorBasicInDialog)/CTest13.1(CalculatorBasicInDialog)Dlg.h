
// CTest13.1(CalculatorBasicInDialog)Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CCTest131CalculatorBasicInDialogDlg �Ի���
class CCTest131CalculatorBasicInDialogDlg : public CDialogEx
{
// ����
public:
	CCTest131CalculatorBasicInDialogDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CTEST131CALCULATORBASICINDIALOG_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	float r1;
	CComboBox select;
	float r2;
	CListBox show;
	afx_msg void OnBnClickedButton1();
};
