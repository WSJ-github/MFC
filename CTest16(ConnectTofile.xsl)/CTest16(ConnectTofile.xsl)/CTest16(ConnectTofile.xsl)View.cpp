
// CTest16(ConnectTofile.xsl)View.cpp : CCTest16ConnectTofilexslView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest16(ConnectTofile.xsl).h"
#endif

#include "CTest16(ConnectTofile.xsl)Set.h"
#include "CTest16(ConnectTofile.xsl)Doc.h"
#include "CTest16(ConnectTofile.xsl)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest16ConnectTofilexslView

IMPLEMENT_DYNCREATE(CCTest16ConnectTofilexslView, CRecordView)

BEGIN_MESSAGE_MAP(CCTest16ConnectTofilexslView, CRecordView)
END_MESSAGE_MAP()

// CCTest16ConnectTofilexslView 构造/析构

CCTest16ConnectTofilexslView::CCTest16ConnectTofilexslView()
	: CRecordView(IDD_CTEST16CONNECTTOFILEXSL_FORM)
	, name(_T(""))
	, nameno(_T(""))
	, phone(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CCTest16ConnectTofilexslView::~CCTest16ConnectTofilexslView()
{
}

void CCTest16ConnectTofilexslView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_201812300010);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_F3);
}

BOOL CCTest16ConnectTofilexslView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CCTest16ConnectTofilexslView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest16ConnectTofilexslSet;
	CRecordView::OnInitialUpdate();

}


// CCTest16ConnectTofilexslView 诊断

#ifdef _DEBUG
void CCTest16ConnectTofilexslView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest16ConnectTofilexslView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest16ConnectTofilexslDoc* CCTest16ConnectTofilexslView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest16ConnectTofilexslDoc)));
	return (CCTest16ConnectTofilexslDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest16ConnectTofilexslView 数据库支持
CRecordset* CCTest16ConnectTofilexslView::OnGetRecordset()
{
	return m_pSet;
}



// CCTest16ConnectTofilexslView 消息处理程序
