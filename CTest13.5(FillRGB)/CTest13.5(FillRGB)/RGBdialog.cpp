// RGBdialog.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest13.5(FillRGB).h"
#include "RGBdialog.h"
#include "afxdialogex.h"


// RGBdialog 对话框

IMPLEMENT_DYNAMIC(RGBdialog, CDialogEx)

RGBdialog::RGBdialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, r1(0)
	, r2(0)
	, r3(0)
{

}

RGBdialog::~RGBdialog()
{
}

void RGBdialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, r1);
	DDV_MinMaxInt(pDX, r1, 0, 255);
	DDX_Text(pDX, IDC_EDIT3, r2);
	DDV_MinMaxInt(pDX, r2, 0, 255);
	DDX_Text(pDX, IDC_EDIT2, r3);
	DDV_MinMaxInt(pDX, r3, 0, 255);
}


BEGIN_MESSAGE_MAP(RGBdialog, CDialogEx)
END_MESSAGE_MAP()


// RGBdialog 消息处理程序
