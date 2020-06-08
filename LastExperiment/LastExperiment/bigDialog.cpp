// bigDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LastExperiment.h"
#include "bigDialog.h"
#include "afxdialogex.h"


// bigDialog �Ի���

IMPLEMENT_DYNAMIC(bigDialog, CDialogEx)

bigDialog::bigDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_BIGDIALOG, pParent)
{

}

bigDialog::~bigDialog()
{
}

void bigDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(bigDialog, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// bigDialog ��Ϣ�������


void bigDialog::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
	CImage img;
	img.Load(str);
	CDC *pdc = GetDlgItem(IDC_STATIC)->GetDC();
	CRect r;
	GetDlgItem(IDC_STATIC)->GetClientRect(&r);
	pdc->SetStretchBltMode(HALFTONE);   //��֤ͼ��ʧ��
	img.Draw(pdc->m_hDC, 0, 0, r.Width(), r.Height());   //�����ҾͲ���foo�������ݿ�߱���drawͼ���ˣ���Ϊ�����Ҷ���
	ReleaseDC(pdc);
}
