// addDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest11.2(add).h"
#include "addDialog.h"
#include "afxdialogex.h"


// addDialog �Ի���

IMPLEMENT_DYNAMIC(addDialog, CDialogEx)

addDialog::addDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, r2(0)
	, r3(0)
	, s(_T(""))
	, r1(0)
{

}

addDialog::~addDialog()
{
}

void addDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, r2);
	DDX_Text(pDX, IDC_EDIT4, r3);
	DDX_Text(pDX, IDC_EDIT5, s);
	DDX_Text(pDX, IDC_EDIT6, r1);
}


BEGIN_MESSAGE_MAP(addDialog, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT3, &addDialog::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &addDialog::OnEnChangeEdit4)
	//ON_EN_CHANGE(IDC_EDIT1, &addDialog::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &addDialog::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT6, &addDialog::OnEnChangeEdit6)
END_MESSAGE_MAP()


// addDialog ��Ϣ�������


void addDialog::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void addDialog::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void addDialog::OnCbnSelchangeCombo1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}



void addDialog::OnBnClickedButton1()
{
	this->UpdateData(true);
	if (s == '+')
	{
		r3 = r1 + r2;
	}
	if (s == '-')
	{
		r3 = r1 - r2;
	}
	if (s == '*')
	{
		r3 = r1*r2;
	}
	if (s == '/')
	{
		r3 = r1 / r2;
	}
	this->UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void addDialog::OnEnChangeEdit6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
