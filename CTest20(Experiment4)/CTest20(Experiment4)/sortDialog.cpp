// sortDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest20(Experiment4).h"
#include "sortDialog.h"
#include "afxdialogex.h"


// sortDialog �Ի���

IMPLEMENT_DYNAMIC(sortDialog, CDialogEx)

sortDialog::sortDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SORTDIALOG, pParent)
	, condition(_T(""))
{

}

sortDialog::~sortDialog()
{
}

void sortDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, condition);
}


BEGIN_MESSAGE_MAP(sortDialog, CDialogEx)
END_MESSAGE_MAP()


// sortDialog ��Ϣ�������
