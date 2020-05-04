
// CTest15(BigProject)Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CTest15(BigProject).h"
#include "CTest15(BigProject)Dlg.h"
#include "afxdialogex.h"
#include"string"
#include"iostream"
using namespace std;
#include"fstream"

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


// CCTest15BigProjectDlg �Ի���



CCTest15BigProjectDlg::CCTest15BigProjectDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_CTEST15BIGPROJECT_DIALOG, pParent)
	, s(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCTest15BigProjectDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, list);
	DDX_Text(pDX, IDC_EDIT1, s);
}

BEGIN_MESSAGE_MAP(CCTest15BigProjectDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_LBN_SELCHANGE(IDC_LIST1, &CCTest15BigProjectDlg::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDC_BUTTON2, &CCTest15BigProjectDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CCTest15BigProjectDlg::OnBnClickedButton1)
	ON_WM_DESTROY()
//	ON_WM_CLOSE()
ON_WM_CLOSE()
END_MESSAGE_MAP()


// CCTest15BigProjectDlg ��Ϣ�������

BOOL CCTest15BigProjectDlg::OnInitDialog()
{
	filename = _T("");
	CDialogEx::OnInitDialog();
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

void CCTest15BigProjectDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CCTest15BigProjectDlg::OnPaint()
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
HCURSOR CCTest15BigProjectDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CCTest15BigProjectDlg::OnLbnSelchangeList1()
{
	UpdateData(true);
	int i = list.GetCurSel();
	CString str;
	list.GetText(i, str);
	s = str;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CCTest15BigProjectDlg::OnBnClickedButton2()
{
	CFileDialog log(true);
	int r=log.DoModal();
	if (r == IDOK)
	{
		filename = log.GetPathName();
		ifstream in(filename);
		string r;
		if (in)  //������ļ���������ΪNULL��
		{
			while (getline(in, r))
			{
				list.AddString(CString(r.c_str()));
			}
			list.SetCurSel(0);
		}
		else
		{
			UpdateData(true);
			s = _T("no such file");
			UpdateData(false);
		}
	}


	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CCTest15BigProjectDlg::OnBnClickedButton1()
{
	UpdateData(true);
	int i = list.GetCurSel();
	//CString str;
	//list.GetText(i, str);
	//list.SetDlgItemTextW(i, s);
	list.DeleteString(i);  
	list.InsertString(i, s);
	UpdateData(false);

	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CCTest15BigProjectDlg::OnDestroy()
{
	CDialogEx::OnDestroy();
	if (filename != _T(""))
	{
		ofstream out(filename);
		CString r;
		int i = list.GetCount();
		//out.flush();
		for (int k = 0; k < i; k++)
		{
			list.GetText(k, r);
			out << CT2A(r.GetString()) << endl;   //�����������Ĭ��ˢ���ļ���
		}
		out.flush();
		out.close();
	}
	AfxMessageBox(_T("ϵͳ���Զ��������"));
	// TODO: �ڴ˴������Ϣ����������
}









