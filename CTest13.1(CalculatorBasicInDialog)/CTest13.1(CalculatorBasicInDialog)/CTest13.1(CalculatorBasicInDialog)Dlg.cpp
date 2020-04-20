
// CTest13.1(CalculatorBasicInDialog)Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest13.1(CalculatorBasicInDialog).h"
#include "CTest13.1(CalculatorBasicInDialog)Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// CCTest131CalculatorBasicInDialogDlg �Ի���



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


// CCTest131CalculatorBasicInDialogDlg ��Ϣ�������

BOOL CCTest131CalculatorBasicInDialogDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	select.AddString(_T("+"));
	select.AddString(_T("-"));
	select.AddString(_T("*"));
	select.AddString(_T("��"));
	select.AddString(_T("��ƽ��"));
	select.AddString(_T("����"));
	select.SetCurSel(0);
	r1 = 0;
	r2 = 0;




	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CCTest131CalculatorBasicInDialogDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CCTest131CalculatorBasicInDialogDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CCTest131CalculatorBasicInDialogDlg::OnBnClickedButton1()
{
	this->UpdateData(true);
	show.ResetContent();  //��ÿ�ε�����㰴ťʱ������listbox�е���Ϣ
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
	if (str == _T("��"))
	{
		if (r2 != 0)
			r = r1 / r2;
		else { show.AddString(_T("����������Ϊ0")); return; }
	}
	if (str == _T("��ƽ��"))
	{
		r2 = 0;
		if(r1>0)
		r = sqrt(r1);
		else { show.AddString(_T("���ܶԸ�����ƽ��")); return; }
	}
	if (str == _T("����"))
	{
		r2 = 0;
		if (r1!=0)
			r = 1/r1;
		else { show.AddString(_T("����������Ϊ0")); return; }
	}
	s.Format(_T("%5.2f"), r);
	show.AddString(s);
	this->UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
