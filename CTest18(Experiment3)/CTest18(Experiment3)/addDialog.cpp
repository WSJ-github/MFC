// addDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest18(Experiment3).h"
#include "addDialog.h"
#include "afxdialogex.h"


// addDialog �Ի���

IMPLEMENT_DYNAMIC(addDialog, CDialogEx)

addDialog::addDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, addnum(0)
{

}

addDialog::~addDialog()
{
}

void addDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, addnum);
}


BEGIN_MESSAGE_MAP(addDialog, CDialogEx)
END_MESSAGE_MAP()


// addDialog ��Ϣ�������
