
// CTest19(Experiment2.1)View.cpp : CCTest19Experiment21View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest19(Experiment2.1).h"
#endif

#include "CTest19(Experiment2.1)Set.h"
#include "CTest19(Experiment2.1)Doc.h"
#include "CTest19(Experiment2.1)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"bigDialog.h"


// CCTest19Experiment21View

IMPLEMENT_DYNCREATE(CCTest19Experiment21View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest19Experiment21View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CCTest19Experiment21View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CCTest19Experiment21View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CCTest19Experiment21View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CCTest19Experiment21View::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON2, &CCTest19Experiment21View::OnBnClickedButton2)
END_MESSAGE_MAP()

// CCTest19Experiment21View 构造/析构

CCTest19Experiment21View::CCTest19Experiment21View()
	: CRecordView(IDD_CTEST19EXPERIMENT21_FORM)
	, name(_T(""))
	, nameno(_T(""))
	, institute(_T(""))
	, age(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	str = _T("C:\\Users\\杰哥\\Pictures\\Camera Roll\\");
	filename = _T("C:\\Users\\杰哥\\Pictures\\Camera Roll\\gxnu.jpg");
	flag = 1;
}

CCTest19Experiment21View::~CCTest19Experiment21View()
{
}

void CCTest19Experiment21View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_201812300010);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_F4);
}

BOOL CCTest19Experiment21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CCTest19Experiment21View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest19Experiment21Set;
	CRecordView::OnInitialUpdate();

}


// CCTest19Experiment21View 诊断

#ifdef _DEBUG
void CCTest19Experiment21View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest19Experiment21View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest19Experiment21Doc* CCTest19Experiment21View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest19Experiment21Doc)));
	return (CCTest19Experiment21Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest19Experiment21View 数据库支持
CRecordset* CCTest19Experiment21View::OnGetRecordset()
{
	return m_pSet;
}

void CCTest19Experiment21View::load()
{
	filename = _T("");
	CString s;
	m_pSet->GetFieldValue(short(4), s);
	filename = str + s;
	//CDC *pdc = GetDlgItem(IDC_STATIC)->GetDC();
	//GetDlgItem(IDC_STATIC)->Invalidate();
	//CRect r;
	//GetDlgItem(IDC_STATIC)->GetClientRect(&r);
	//GetDlgItem(IDC_STATIC)->InvalidateRect(r);
	this->Invalidate();
}

// CCTest19Experiment21View 消息处理程序


void CCTest19Experiment21View::OnRecordFirst()
{
	m_pSet->MoveFirst();
	UpdateData(false);
	//this->RedrawWindow();
	load();
	// TODO: 在此添加命令处理程序代码
}


void CCTest19Experiment21View::OnRecordPrev()
{
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	//this->RedrawWindow();
	load();
	// TODO: 在此添加命令处理程序代码
}


void CCTest19Experiment21View::OnRecordNext()
{
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
	{
		m_pSet->MoveLast();
	}
	UpdateData(false);
	load();
	// TODO: 在此添加命令处理程序代码
}


void CCTest19Experiment21View::OnRecordLast()
{
	m_pSet->MoveLast();
	UpdateData(false);
	//this->RedrawWindow();
	load();
	// TODO: 在此添加命令处理程序代码
}


void CCTest19Experiment21View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
					   //一定要放在上面这一段代码之下！！！！！
	if (flag == 1)
	{
		CString s;
		s = _T("C:\\Users\\杰哥\\Pictures\\Camera Roll\\gxnu.jpg");
		CImage img;
		img.Load(s);
		CDC *pdc = GetDlgItem(IDC_STATIC)->GetDC();
		CRect r;
		GetDlgItem(IDC_STATIC)->GetClientRect(&r);
		pdc->SetStretchBltMode(HALFTONE);   //防止失真
		img.Draw(pdc->m_hDC, 0, 0, r.Width(), r.Height());
		ReleaseDC(pdc);
		flag = 0;
	}
	if (filename != _T(""))
	{
		CImage img;
		img.Load(filename);
		CDC *pdc = GetDlgItem(IDC_STATIC)->GetDC();
		CRect r;
		GetDlgItem(IDC_STATIC)->GetClientRect(&r);
		pdc->SetStretchBltMode(HALFTONE);   //防止失真
		img.Draw(pdc->m_hDC, 0, 0, r.Width(), r.Height());
		ReleaseDC(pdc);
		//filename = _T("");
	}
}


void CCTest19Experiment21View::OnBnClickedButton2()
{
	bigDialog big;
	big.filename = filename;
	big.DoModal();
	// TODO: 在此添加控件通知处理程序代码
}
