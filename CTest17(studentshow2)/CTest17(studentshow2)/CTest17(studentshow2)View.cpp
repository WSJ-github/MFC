
// CTest17(studentshow2)View.cpp : CCTest17studentshow2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest17(studentshow2).h"
#endif

#include "CTest17(studentshow2)Set.h"
#include "CTest17(studentshow2)Doc.h"
#include "CTest17(studentshow2)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest17studentshow2View

IMPLEMENT_DYNCREATE(CCTest17studentshow2View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest17studentshow2View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT3, &CCTest17studentshow2View::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT5, &CCTest17studentshow2View::OnEnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT2, &CCTest17studentshow2View::OnEnChangeEdit2)
	ON_COMMAND(ID_RECORD_FIRST, &CCTest17studentshow2View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CCTest17studentshow2View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CCTest17studentshow2View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CCTest17studentshow2View::OnRecordLast)
	ON_WM_PAINT()
	ON_WM_PAINT()
END_MESSAGE_MAP()

// CCTest17studentshow2View 构造/析构

CCTest17studentshow2View::CCTest17studentshow2View()
	: CRecordView(IDD_CTEST17STUDENTSHOW2_FORM)
	, name(_T(""))
	, nameno(_T(""))
	, institute(_T(""))
	, age(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	str = _T("C:\\Users\\杰哥\\Pictures\\Camera Roll\\");
	filename= _T("");
	flag = 1;

}

CCTest17studentshow2View::~CCTest17studentshow2View()
{
}

void CCTest17studentshow2View::DoDataExchange(CDataExchange* pDX)
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

BOOL CCTest17studentshow2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CCTest17studentshow2View::OnInitialUpdate()
{
	//this->Invalidate();
	m_pSet = &GetDocument()->m_CTest17studentshow2Set;
	CRecordView::OnInitialUpdate();
}


// CCTest17studentshow2View 诊断

#ifdef _DEBUG
void CCTest17studentshow2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest17studentshow2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest17studentshow2Doc* CCTest17studentshow2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest17studentshow2Doc)));
	return (CCTest17studentshow2Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest17studentshow2View 数据库支持
CRecordset* CCTest17studentshow2View::OnGetRecordset()
{
	return m_pSet;
}



// CCTest17studentshow2View 消息处理程序


void CCTest17studentshow2View::OnEnChangeEdit3()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CCTest17studentshow2View::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CCTest17studentshow2View::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
void CCTest17studentshow2View::load()
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


void CCTest17studentshow2View::OnRecordFirst()
{
	m_pSet->MoveFirst();
	UpdateData(false);
	//this->RedrawWindow();
	load();
	// TODO: 在此添加命令处理程序代码
}


void CCTest17studentshow2View::OnRecordPrev()
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


void CCTest17studentshow2View::OnRecordNext()
{
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
	{
		m_pSet->MoveLast();
	}
	UpdateData(false);
	load();
	//this->RedrawWindow();
	// TODO: 在此添加命令处理程序代码
}


void CCTest17studentshow2View::OnRecordLast()
{
	m_pSet->MoveLast();
	UpdateData(false);
	//this->RedrawWindow();
	load();
	// TODO: 在此添加命令处理程序代码
}



void CCTest17studentshow2View::OnPaint()
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
