// findDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LastExperiment.h"
#include "findDialog.h"
#include "afxdialogex.h"


// findDialog �Ի���

IMPLEMENT_DYNAMIC(findDialog, CDialogEx)

findDialog::findDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_FINDDIALOG, pParent)
	, condition(_T(""))
{

}

findDialog::~findDialog()
{
}

void findDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, condition);
}


BEGIN_MESSAGE_MAP(findDialog, CDialogEx)
END_MESSAGE_MAP()


// findDialog ��Ϣ�������
