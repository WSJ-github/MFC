// alterDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest18(Experiment3).h"
#include "alterDialog.h"
#include "afxdialogex.h"


// alterDialog �Ի���

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


// alterDialog ��Ϣ�������


BOOL alterDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	UpdateData(false);
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
