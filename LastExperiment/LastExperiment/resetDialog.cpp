// resetDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LastExperiment.h"
#include "resetDialog.h"
#include "afxdialogex.h"


// resetDialog �Ի���

IMPLEMENT_DYNAMIC(resetDialog, CDialogEx)

resetDialog::resetDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_RESETDIALOG, pParent)
	, name2(_T(""))
	, nameno2(_T(""))
	, major2(_T(""))
	, sex2(_T(""))
	, birth2(_T(""))
	, phone2(_T(""))
	, home2(_T(""))
	, filename2(_T(""))
{
	flag1 = false;  //��ʼ��
}

resetDialog::~resetDialog()
{
}

void resetDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, name2);
	DDX_Text(pDX, IDC_EDIT2, nameno2);
	DDX_Text(pDX, IDC_EDIT4, major2);
	DDX_Text(pDX, IDC_EDIT3, sex2);
	DDX_Text(pDX, IDC_EDIT5, birth2);
	DDX_Text(pDX, IDC_EDIT7, phone2);
	DDX_Text(pDX, IDC_EDIT6, home2);
	DDX_Text(pDX, IDC_EDIT8, filename2);
}


BEGIN_MESSAGE_MAP(resetDialog, CDialogEx)
END_MESSAGE_MAP()


// resetDialog ��Ϣ�������


BOOL resetDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	//UpdateData(true);
	//UpdateData(false);
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void resetDialog::OnOK()
{
	// TODO: �ڴ����ר�ô����/����û���
	UpdateData(true);   //�������������Ȼ�ĵĶ���������ݣ����ᱣ�浽��̨
	if (name2.Trim() == _T(""))   //  ����û����ʱ
	{
		AfxMessageBox(_T("�����������"));
	}
	else if (nameno2.Trim() == _T(""))
	{
		AfxMessageBox(_T("ѧ���������"));
	}
	else if (major2.Trim() == _T(""))
	{
		AfxMessageBox(_T("רҵ�������"));
	}
	else if (sex2.Trim() != _T("��") && major2.Trim() != _T("Ů"))
	{
		AfxMessageBox(_T("�Ա��������"));
	}
	else if (birth2.Trim() == _T(""))
	{
		AfxMessageBox(_T("���������������"));
	}
	else if (phone2.Trim() == _T(""))
	{
		AfxMessageBox(_T("�ֻ������������"));
	}
	else if (home2.Trim() == _T(""))
	{
		AfxMessageBox(_T("��ͥסַ�������"));
	}
	else if (filename2.Trim() == _T(""))
	{
		AfxMessageBox(_T("��Ƭ�ļ����������"));
	}
	else { flag1 = true; }
	UpdateData(false);
	CDialogEx::OnOK();
}
