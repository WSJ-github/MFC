// Dialog1.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest14.2(readPictureAndShow).h"
#include "Dialog1.h"
#include "afxdialogex.h"


// Dialog1 �Ի���

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

void Dialog1::foo(CImage &img, int &sx, int &sy, int &w, int &h)  //��Դ�ļ�������֮��һ��Ҫ��ͷ�ļ�������
{
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_ratio = (float)rect.Width() / rect.Height();
	float img_ratio = (float)img.GetWidth() / img.GetHeight();
	if (rect_ratio >= img_ratio)   //˵��ͼƬ�ؼ���Ҫ��ʾ��ͼƬ��
	{
		h = rect.Height();
		w = img.GetWidth();
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else if (rect_ratio < img_ratio)   //˵��ͼƬ�ؼ���ͼƬ��
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


// Dialog1 ��Ϣ�������


BOOL Dialog1::OnInitDialog()   //����ͼ�񣨺ͻ�ͼ���Ķ�����Ҫ���������棬��Ϊ���������ִ����֮�󻹻����һ��ǿ���ػ�
                               //�ػ��ʱ��ִ�е��������OnPaint������Ϣ����
{
	CDialogEx::OnInitDialog();
	//UpdateData(true);
		/*CImage img;
		name = _T("C:\\Users\\�ܸ�\\Desktop\\��������.jpg");
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
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void Dialog1::OnBnClickedButton1()
{
	CImage img;
	//name = _T("C:\\Users\\�ܸ�\\Desktop\\����è.jpg");
	img.Load(this->name);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, h, w;
	foo(img, sx, sy, w, h);
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void Dialog1::OnPaint()
{
	CImage img;
	//name = _T("C:\\Users\\�ܸ�\\Desktop\\����è.jpg");
	img.Load(this->name);
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, h, w;
	foo(img, sx, sy, w, h);
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
}
