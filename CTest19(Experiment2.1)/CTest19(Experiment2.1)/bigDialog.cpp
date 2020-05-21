// bigDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest19(Experiment2.1).h"
#include "bigDialog.h"
#include "afxdialogex.h"


// bigDialog 对话框

IMPLEMENT_DYNAMIC(bigDialog, CDialogEx)

bigDialog::bigDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
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


// bigDialog 消息处理程序


void bigDialog::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialogEx::OnPaint()
	CImage img;
	img.Load(filename);
	CDC *pdc = GetDlgItem(IDC_STATIC)->GetDC();
	CRect r;
	GetDlgItem(IDC_STATIC)->GetClientRect(&r);
	pdc->SetStretchBltMode(HALFTONE);   //防止失真
	img.Draw(pdc->m_hDC, 0, 0, r.Width(), r.Height());
	ReleaseDC(pdc);

}
