// editDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest12.1(ClientShowFilename).h"
#include "editDialog.h"
#include "afxdialogex.h"


// editDialog �Ի���

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


// editDialog ��Ϣ�������


BOOL editDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	//CClientDC dc(this);
	//this->UpdateData(true);
	//editS = _T(" sadsa");
	//this->UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
