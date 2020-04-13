// addDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest11.2(add).h"
#include "addDialog.h"
#include "afxdialogex.h"


// addDialog 对话框

IMPLEMENT_DYNAMIC(addDialog, CDialogEx)

addDialog::addDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, r2(0)
	, r3(0)
	, s(_T(""))
	, r1(0)
{

}

addDialog::~addDialog()
{
}

void addDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, r2);
	DDX_Text(pDX, IDC_EDIT4, r3);
	DDX_Text(pDX, IDC_EDIT5, s);
	DDX_Text(pDX, IDC_EDIT6, r1);
}


BEGIN_MESSAGE_MAP(addDialog, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT3, &addDialog::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &addDialog::OnEnChangeEdit4)
	//ON_EN_CHANGE(IDC_EDIT1, &addDialog::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &addDialog::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT6, &addDialog::OnEnChangeEdit6)
END_MESSAGE_MAP()


// addDialog 消息处理程序


void addDialog::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void addDialog::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void addDialog::OnCbnSelchangeCombo1()
{
	// TODO: 在此添加控件通知处理程序代码
}



void addDialog::OnBnClickedButton1()
{
	this->UpdateData(true);
	if (s == '+')
	{
		r3 = r1 + r2;
	}
	if (s == '-')
	{
		r3 = r1 - r2;
	}
	if (s == '*')
	{
		r3 = r1*r2;
	}
	if (s == '/')
	{
		r3 = r1 / r2;
	}
	this->UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void addDialog::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
