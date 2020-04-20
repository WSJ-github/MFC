// dialog1.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest13.3(inputEllipseData).h"
#include "dialog1.h"
#include "afxdialogex.h"


// dialog1 对话框

IMPLEMENT_DYNAMIC(dialog1, CDialogEx)

dialog1::dialog1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, r1(0)
	, r2(0)
	, r3(0)
	, r4(0)
{

}

dialog1::~dialog1()
{
}

void dialog1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, r1);
	DDX_Text(pDX, IDC_EDIT2, r2);
	DDX_Text(pDX, IDC_EDIT3, r3);
	DDX_Text(pDX, IDC_EDIT4, r4);
}


BEGIN_MESSAGE_MAP(dialog1, CDialogEx)
END_MESSAGE_MAP()


// dialog1 消息处理程序
