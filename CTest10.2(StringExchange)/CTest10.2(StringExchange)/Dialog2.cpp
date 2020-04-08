// Dialog2.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest10.2(StringExchange).h"
#include "Dialog2.h"
#include "afxdialogex.h"


// Dialog2 对话框

IMPLEMENT_DYNAMIC(Dialog2, CDialogEx)

Dialog2::Dialog2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s2(_T(""))
	, s1(_T(""))
{

}

Dialog2::~Dialog2()
{
}

void Dialog2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, s2);
	DDX_Text(pDX, IDC_EDIT1, s1);
}


BEGIN_MESSAGE_MAP(Dialog2, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Dialog2::OnBnClickedButton1)
END_MESSAGE_MAP()


// Dialog2 消息处理程序


void Dialog2::OnBnClickedButton1()
{
	this->UpdateData(true);
	CString S1;
	S1 = s1;
	s1 = s2;
	s2 = S1;
	this->UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}
