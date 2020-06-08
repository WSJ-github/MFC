// addDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "LastExperiment.h"
#include "addDialog.h"
#include "afxdialogex.h"


// addDialog 对话框

IMPLEMENT_DYNAMIC(addDialog, CDialogEx)

addDialog::addDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADDDIALOG, pParent)
	, name1(_T(""))
	, nameno1(_T(""))
	, major1(_T(""))
	, sex1(_T(""))
	, birth1(_T(""))
	, phone1(_T(""))
	, home1(_T(""))
	, filename1(_T(""))
{

}

addDialog::~addDialog()
{
}

void addDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, name1);
	DDX_Text(pDX, IDC_EDIT2, nameno1);
	DDX_Text(pDX, IDC_EDIT4, major1);
	DDX_Text(pDX, IDC_EDIT3, sex1);
	DDX_Text(pDX, IDC_EDIT5, birth1);
	DDX_Text(pDX, IDC_EDIT7, phone1);
	DDX_Text(pDX, IDC_EDIT6, home1);
	DDX_Text(pDX, IDC_EDIT8, filename1);
}


BEGIN_MESSAGE_MAP(addDialog, CDialogEx)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// addDialog 消息处理程序




void addDialog::OnOK()
{
	// TODO: 在此添加专用代码和/或调用基类
	UpdateData(true);
	if (name1.Trim() == _T(""))   //  姓名没输入时
	{
		AfxMessageBox(_T("姓名输入错误！"));
		name1 = _T("");
	}
	else if (nameno1.Trim() == _T(""))
	{
		AfxMessageBox(_T("学号输入错误！"));
		name1 = _T("");
	}
	else if (major1.Trim() == _T(""))
	{
		AfxMessageBox(_T("专业输入错误！"));
		name1 = _T("");
	}
	else if (sex1.Trim() != _T("男") && major1.Trim() != _T("女"))
	{
		AfxMessageBox(_T("性别输入错误！"));
		name1 = _T("");
	}
	else if (birth1.Trim() == _T(""))
	{
		AfxMessageBox(_T("出生年月输入错误！"));
		name1 = _T("");
	}
	else if (phone1.Trim() == _T(""))
	{
		AfxMessageBox(_T("手机号码输入错误！"));
		name1 = _T("");
	}
	else if (home1.Trim() == _T(""))
	{
		AfxMessageBox(_T("家庭住址输入错误！"));
		name1 = _T("");
	}
	else if (filename1.Trim() == _T(""))
	{
		AfxMessageBox(_T("相片文件名输入错误！"));
		name1 = _T("");
	}
	UpdateData(false);
	CDialogEx::OnOK();
}
