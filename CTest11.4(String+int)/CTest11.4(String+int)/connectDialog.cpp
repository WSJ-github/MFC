// connectDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest11.4(String+int).h"
#include "connectDialog.h"
#include "afxdialogex.h"


// connectDialog 对话框

IMPLEMENT_DYNAMIC(connectDialog, CDialogEx)

connectDialog::connectDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s1(_T(""))
	, r(0)
	, s2(_T(""))
{

}

connectDialog::~connectDialog()
{
}

void connectDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s1);
	DDX_Text(pDX, IDC_EDIT2, r);
	DDX_Text(pDX, IDC_EDIT3, s2);
}


BEGIN_MESSAGE_MAP(connectDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &connectDialog::OnBnClickedButton1)
END_MESSAGE_MAP()


// connectDialog 消息处理程序


void connectDialog::OnBnClickedButton1()
{
	this->UpdateData(true);
	CString rs;
	rs.Format(_T("%d"), r);
	s2 = s1 + rs;
	this->UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}
