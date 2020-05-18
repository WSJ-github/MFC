
// CTest17(studentshow)View.cpp : CCTest17studentshowView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest17(studentshow).h"
#endif

#include "CTest17(studentshow)Set.h"
#include "CTest17(studentshow)Doc.h"
#include "CTest17(studentshow)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest17studentshowView

IMPLEMENT_DYNCREATE(CCTest17studentshowView, CRecordView)

BEGIN_MESSAGE_MAP(CCTest17studentshowView, CRecordView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_EN_CHANGE(IDC_EDIT3, &CCTest17studentshowView::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON1, &CCTest17studentshowView::OnBnClickedButton1)
	ON_COMMAND(ID_RECORD_FIRST, &CCTest17studentshowView::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CCTest17studentshowView::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CCTest17studentshowView::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CCTest17studentshowView::OnRecordLast)
END_MESSAGE_MAP()

// CCTest17studentshowView 构造/析构

CCTest17studentshowView::CCTest17studentshowView()
	: CRecordView(IDD_CTEST17STUDENTSHOW_FORM)
	, r1(_T(""))
	, r2(_T(""))
	, r3(_T(""))
	, r4(0)
	, r5(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	str = _T("C:\\Users\\杰哥\\Pictures\\Camera Roll\\");
}

CCTest17studentshowView::~CCTest17studentshowView()
{
}
void CCTest17studentshowView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_201812300010);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_F4);
}

BOOL CCTest17studentshowView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CCTest17studentshowView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest17studentshowSet;
	CRecordView::OnInitialUpdate();

}


// CCTest17studentshowView 打印

BOOL CCTest17studentshowView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CCTest17studentshowView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CCTest17studentshowView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CCTest17studentshowView 诊断

#ifdef _DEBUG
void CCTest17studentshowView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest17studentshowView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest17studentshowDoc* CCTest17studentshowView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest17studentshowDoc)));
	return (CCTest17studentshowDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest17studentshowView 数据库支持
CRecordset* CCTest17studentshowView::OnGetRecordset()
{
	return m_pSet;
}



// CCTest17studentshowView 消息处理程序


void CCTest17studentshowView::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CCTest17studentshowView::OnBnClickedButton1()
{
	CString s;
	m_pSet->GetFieldValue(short(4), s);
	CImage img;
	img.Load(s);
	CDC *pdc = GetDlgItem(IDC_STATIC)->GetDC();
	CRect r;
	GetDlgItem(IDC_STATIC)->GetClientRect(&r);
	pdc->SetStretchBltMode(HALFTONE);   //防止失真
	img.Draw(pdc->m_hDC, 0, 0, r.Width(), r.Height());
	ReleaseDC(pdc);
		// TODO: 在此添加控件通知处理程序代码
}


void CCTest17studentshowView::OnRecordFirst()
{
	m_pSet->MoveFirst();
	UpdateData(false);
	this->RedrawWindow();
	// TODO: 在此添加命令处理程序代码
}


void CCTest17studentshowView::OnRecordPrev()
{
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	this->RedrawWindow();
	// TODO: 在此添加命令处理程序代码
}


void CCTest17studentshowView::OnRecordNext()
{
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
	{
		m_pSet->MoveLast();
	}
	UpdateData(false);
	this->RedrawWindow();
	// TODO: 在此添加命令处理程序代码
}


void CCTest17studentshowView::OnRecordLast()
{
	m_pSet->MoveLast();
	UpdateData(false);
	this->RedrawWindow();
	// TODO: 在此添加命令处理程序代码
}
