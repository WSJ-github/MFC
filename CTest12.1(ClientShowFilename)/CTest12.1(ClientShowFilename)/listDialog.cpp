// listDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest12.1(ClientShowFilename).h"
#include "listDialog.h"
#include "afxdialogex.h"


// listDialog 对话框

IMPLEMENT_DYNAMIC(listDialog, CDialogEx)

listDialog::listDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

listDialog::~listDialog()
{
}

void listDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, listS);
}


BEGIN_MESSAGE_MAP(listDialog, CDialogEx)
END_MESSAGE_MAP()


// listDialog 消息处理程序


BOOL listDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	listS.AddString(ls);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
