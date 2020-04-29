// Dialog1.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest14.2(readPictureAndShow).h"
#include "Dialog1.h"
#include "afxdialogex.h"


// Dialog1 对话框

IMPLEMENT_DYNAMIC(Dialog1, CDialogEx)

Dialog1::Dialog1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{
}

Dialog1::~Dialog1()
{
}

void Dialog1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

void Dialog1::foo(CImage &img, int &sx, int &sy, int &w, int &h)  //在源文件创建完之后一定要在头文件中声明
{
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_ratio = (float)rect.Width() / rect.Height();
	float img_ratio = (float)img.GetWidth() / img.GetHeight();
	if (rect_ratio >= img_ratio)   //说明图片控件比要显示的图片宽
	{
		h = rect.Height();
		w = img.GetWidth();
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else if (rect_ratio < img_ratio)   //说明图片控件比图片高
	{
		h = img.GetHeight();
		w = rect.Width();
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
}

BEGIN_MESSAGE_MAP(Dialog1, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Dialog1::OnBnClickedButton1)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Dialog1 消息处理程序


BOOL Dialog1::OnInitDialog()   //加载图像（和绘图）的东西不要放在这里面，因为在这个函数执行完之后还会进行一次强行重绘
                               //重绘的时候执行的是下面的OnPaint（）消息函数
{
	CDialogEx::OnInitDialog();
	//UpdateData(true);
		/*CImage img;
		name = _T("C:\\Users\\杰哥\\Desktop\\五四评优.jpg");
		img.Load(this->name);
		CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
		int sx, sy, h, w;
		foo(img, sx, sy, w, h);
		pDC->SetStretchBltMode(HALFTONE);
		img.Draw(pDC->m_hDC, sx, sy, w, h);
		ReleaseDC(pDC);*/
		//UpdateData(false);
		//img.Draw(pDC->m_hDC, 0,0, img.GetWidth(), img.GetHeight());
		//ReleaseDC(pDC);
	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void Dialog1::OnBnClickedButton1()
{
	CImage img;
	//name = _T("C:\\Users\\杰哥\\Desktop\\叮当猫.jpg");
	img.Load(this->name);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, h, w;
	foo(img, sx, sy, w, h);
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
	// TODO: 在此添加控件通知处理程序代码
}


void Dialog1::OnPaint()
{
	CImage img;
	//name = _T("C:\\Users\\杰哥\\Desktop\\叮当猫.jpg");
	img.Load(this->name);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, h, w;
	foo(img, sx, sy, w, h);
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CDialogEx::OnPaint()
}
