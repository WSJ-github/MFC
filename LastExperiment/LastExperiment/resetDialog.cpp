// resetDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "LastExperiment.h"
#include "resetDialog.h"
#include "afxdialogex.h"


// resetDialog 对话框

IMPLEMENT_DYNAMIC(resetDialog, CDialogEx)

resetDialog::resetDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_RESETDIALOG, pParent)
	, name2(_T(""))
	, nameno2(_T(""))
	, major2(_T(""))
	, sex2(_T(""))
	, birth2(_T(""))
	, phone2(_T(""))
	, home2(_T(""))
	, filename2(_T(""))
{
	flag1 = false;  //初始化
}

resetDialog::~resetDialog()
{
}

void resetDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, name2);
	DDX_Text(pDX, IDC_EDIT2, nameno2);
	DDX_Text(pDX, IDC_EDIT4, major2);
	DDX_Text(pDX, IDC_EDIT3, sex2);
	DDX_Text(pDX, IDC_EDIT5, birth2);
	DDX_Text(pDX, IDC_EDIT7, phone2);
	DDX_Text(pDX, IDC_EDIT6, home2);
	DDX_Text(pDX, IDC_EDIT8, filename2);
}


BEGIN_MESSAGE_MAP(resetDialog, CDialogEx)
END_MESSAGE_MAP()


// resetDialog 消息处理程序


BOOL resetDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	//UpdateData(true);
	//UpdateData(false);
	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void resetDialog::OnOK()
{
	// TODO: 在此添加专用代码和/或调用基类
	UpdateData(true);   //必须有这个，不然改的都是虚的数据，不会保存到后台
	if (name2.Trim() == _T(""))   //  姓名没输入时
	{
		AfxMessageBox(_T("姓名输入错误！"));
	}
	else if (nameno2.Trim() == _T(""))
	{
		AfxMessageBox(_T("学号输入错误！"));
	}
	else if (major2.Trim() == _T(""))
	{
		AfxMessageBox(_T("专业输入错误！"));
	}
	else if (sex2.Trim() != _T("男") && major2.Trim() != _T("女"))
	{
		AfxMessageBox(_T("性别输入错误！"));
	}
	else if (birth2.Trim() == _T(""))
	{
		AfxMessageBox(_T("出生年月输入错误！"));
	}
	else if (phone2.Trim() == _T(""))
	{
		AfxMessageBox(_T("手机号码输入错误！"));
	}
	else if (home2.Trim() == _T(""))
	{
		AfxMessageBox(_T("家庭住址输入错误！"));
	}
	else if (filename2.Trim() == _T(""))
	{
		AfxMessageBox(_T("相片文件名输入错误！"));
	}
	else { flag1 = true; }
	UpdateData(false);
	CDialogEx::OnOK();
}
