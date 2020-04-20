
// CTest13.1(CalculatorBasicInDialog)Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "CTest13.1(CalculatorBasicInDialog).h"
#include "CTest13.1(CalculatorBasicInDialog)Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CCTest131CalculatorBasicInDialogDlg 对话框



CCTest131CalculatorBasicInDialogDlg::CCTest131CalculatorBasicInDialogDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_CTEST131CALCULATORBASICINDIALOG_DIALOG, pParent)
	, r1(0)
	, r2(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCTest131CalculatorBasicInDialogDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, r1);
	DDX_Control(pDX, IDC_COMBO1, select);
	DDX_Text(pDX, IDC_EDIT2, r2);
	DDX_Control(pDX, IDC_LIST1, show);
}

BEGIN_MESSAGE_MAP(CCTest131CalculatorBasicInDialogDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CCTest131CalculatorBasicInDialogDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CCTest131CalculatorBasicInDialogDlg 消息处理程序

BOOL CCTest131CalculatorBasicInDialogDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	select.AddString(_T("+"));
	select.AddString(_T("-"));
	select.AddString(_T("*"));
	select.AddString(_T("÷"));
	select.AddString(_T("开平方"));
	select.AddString(_T("求倒数"));
	select.SetCurSel(0);
	r1 = 0;
	r2 = 0;




	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CCTest131CalculatorBasicInDialogDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CCTest131CalculatorBasicInDialogDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CCTest131CalculatorBasicInDialogDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CCTest131CalculatorBasicInDialogDlg::OnBnClickedButton1()
{
	this->UpdateData(true);
	show.ResetContent();  //在每次点击计算按钮时先重置listbox中的信息
	int index=select.GetCurSel();
	CString str;
	CString s;
	float r;
	select.GetLBText(index, str);
	if (str == _T("+"))
	{
		r = r1 + r2;	
	}
	if (str == _T("-"))
	{
		r = r1 - r2;		
	}
	if (str == _T("*"))
	{
		r = r1*r2;
	}
	if (str == _T("÷"))
	{
		if (r2 != 0)
			r = r1 / r2;
		else { show.AddString(_T("被除数不能为0")); return; }
	}
	if (str == _T("开平方"))
	{
		r2 = 0;
		if(r1>0)
		r = sqrt(r1);
		else { show.AddString(_T("不能对负数开平方")); return; }
	}
	if (str == _T("求倒数"))
	{
		r2 = 0;
		if (r1!=0)
			r = 1/r1;
		else { show.AddString(_T("被除数不能为0")); return; }
	}
	s.Format(_T("%5.2f"), r);
	show.AddString(s);
	this->UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}
