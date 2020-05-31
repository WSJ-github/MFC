// selectDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest20(Experiment4).h"
#include "selectDialog.h"
#include "afxdialogex.h"


// selectDialog 对话框

IMPLEMENT_DYNAMIC(selectDialog, CDialogEx)

selectDialog::selectDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SELECTDIALOG, pParent)
	, condition(_T(""))
{

}

selectDialog::~selectDialog()
{
}

void selectDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, condition);
}


BEGIN_MESSAGE_MAP(selectDialog, CDialogEx)
END_MESSAGE_MAP()


// selectDialog 消息处理程序
