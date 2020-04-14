// editDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest12.1(ClientShowFilename).h"
#include "editDialog.h"
#include "afxdialogex.h"


// editDialog 对话框

IMPLEMENT_DYNAMIC(editDialog, CDialogEx)

editDialog::editDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, editS(_T(""))
{

}

editDialog::~editDialog()
{
}

void editDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, editS);
}


BEGIN_MESSAGE_MAP(editDialog, CDialogEx)
END_MESSAGE_MAP()


// editDialog 消息处理程序


BOOL editDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	//CClientDC dc(this);
	//this->UpdateData(true);
	//editS = _T(" sadsa");
	//this->UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
