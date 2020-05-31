// traverseDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest20(Experiment4).h"
#include "traverseDialog.h"
#include "afxdialogex.h"


// traverseDialog 对话框

IMPLEMENT_DYNAMIC(traverseDialog, CDialogEx)

traverseDialog::traverseDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TRAVERSEDIALOG, pParent)
	, traverse(_T(""))
{

}

traverseDialog::~traverseDialog()
{
}

void traverseDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, traverse);
}


BEGIN_MESSAGE_MAP(traverseDialog, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &traverseDialog::OnEnChangeEdit1)
END_MESSAGE_MAP()


// traverseDialog 消息处理程序


BOOL traverseDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	//UpdateData(true);
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void traverseDialog::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
