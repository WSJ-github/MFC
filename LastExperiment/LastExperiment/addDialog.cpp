// addDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LastExperiment.h"
#include "addDialog.h"
#include "afxdialogex.h"


// addDialog �Ի���

IMPLEMENT_DYNAMIC(addDialog, CDialogEx)

addDialog::addDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADDDIALOG, pParent)
	, name1(_T(""))
	, nameno1(_T(""))
	, major1(_T(""))
	, sex1(_T(""))
	, birth1(_T(""))
	, phone1(_T(""))
	, home1(_T(""))
	, filename1(_T(""))
{

}

addDialog::~addDialog()
{
}

void addDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, name1);
	DDX_Text(pDX, IDC_EDIT2, nameno1);
	DDX_Text(pDX, IDC_EDIT4, major1);
	DDX_Text(pDX, IDC_EDIT3, sex1);
	DDX_Text(pDX, IDC_EDIT5, birth1);
	DDX_Text(pDX, IDC_EDIT7, phone1);
	DDX_Text(pDX, IDC_EDIT6, home1);
	DDX_Text(pDX, IDC_EDIT8, filename1);
}


BEGIN_MESSAGE_MAP(addDialog, CDialogEx)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// addDialog ��Ϣ�������




void addDialog::OnOK()
{
	// TODO: �ڴ����ר�ô����/����û���
	UpdateData(true);
	if (name1.Trim() == _T(""))   //  ����û����ʱ
	{
		AfxMessageBox(_T("�����������"));
		name1 = _T("");
	}
	else if (nameno1.Trim() == _T(""))
	{
		AfxMessageBox(_T("ѧ���������"));
		name1 = _T("");
	}
	else if (major1.Trim() == _T(""))
	{
		AfxMessageBox(_T("רҵ�������"));
		name1 = _T("");
	}
	else if (sex1.Trim() != _T("��") && major1.Trim() != _T("Ů"))
	{
		AfxMessageBox(_T("�Ա��������"));
		name1 = _T("");
	}
	else if (birth1.Trim() == _T(""))
	{
		AfxMessageBox(_T("���������������"));
		name1 = _T("");
	}
	else if (phone1.Trim() == _T(""))
	{
		AfxMessageBox(_T("�ֻ������������"));
		name1 = _T("");
	}
	else if (home1.Trim() == _T(""))
	{
		AfxMessageBox(_T("��ͥסַ�������"));
		name1 = _T("");
	}
	else if (filename1.Trim() == _T(""))
	{
		AfxMessageBox(_T("��Ƭ�ļ����������"));
		name1 = _T("");
	}
	UpdateData(false);
	CDialogEx::OnOK();
}
