// traverseDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest20(Experiment4).h"
#include "traverseDialog.h"
#include "afxdialogex.h"


// traverseDialog �Ի���

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


// traverseDialog ��Ϣ�������


BOOL traverseDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	//UpdateData(true);
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void traverseDialog::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
