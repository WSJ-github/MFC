// alterDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest18(Experiment3).h"
#include "alterDialog.h"
#include "afxdialogex.h"


// alterDialog 对话框

IMPLEMENT_DYNAMIC(alterDialog, CDialogEx)

alterDialog::alterDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, alternum(0)
{

}

alterDialog::~alterDialog()
{
}

void alterDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, alternum);
}


BEGIN_MESSAGE_MAP(alterDialog, CDialogEx)
END_MESSAGE_MAP()


// alterDialog 消息处理程序


BOOL alterDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	UpdateData(false);
	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
