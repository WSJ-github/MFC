// listDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest12.1(ClientShowFilename).h"
#include "listDialog.h"
#include "afxdialogex.h"


// listDialog �Ի���

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


// listDialog ��Ϣ�������


BOOL listDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	listS.AddString(ls);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
