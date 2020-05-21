
// CTest18(Experiment3)View.cpp : CCTest18Experiment3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest18(Experiment3).h"
#endif

#include "CTest18(Experiment3)Set.h"
#include "CTest18(Experiment3)Doc.h"
#include "CTest18(Experiment3)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"addDialog.h"
#include"alterDialog.h"


// CCTest18Experiment3View

IMPLEMENT_DYNCREATE(CCTest18Experiment3View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest18Experiment3View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &CCTest18Experiment3View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &CCTest18Experiment3View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CCTest18Experiment3View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CCTest18Experiment3View 构造/析构

CCTest18Experiment3View::CCTest18Experiment3View()
	: CRecordView(IDD_CTEST18EXPERIMENT3_FORM)
	, num(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CCTest18Experiment3View::~CCTest18Experiment3View()
{
}

void CCTest18Experiment3View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_num);
}

BOOL CCTest18Experiment3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CCTest18Experiment3View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest18Experiment3Set;
	CRecordView::OnInitialUpdate();

}


// CCTest18Experiment3View 诊断

#ifdef _DEBUG
void CCTest18Experiment3View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest18Experiment3View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest18Experiment3Doc* CCTest18Experiment3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest18Experiment3Doc)));
	return (CCTest18Experiment3Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest18Experiment3View 数据库支持
CRecordset* CCTest18Experiment3View::OnGetRecordset()
{
	return m_pSet;
}



// CCTest18Experiment3View 消息处理程序


void CCTest18Experiment3View::OnBnClickedButton3()
{
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	Invalidate();
	// TODO: 在此添加控件通知处理程序代码
}


void CCTest18Experiment3View::OnBnClickedButton2()  //修改记录
{
	// TODO: 在此添加控件通知处理程序代码
	alterDialog alterlog;
	CString nownum;
	m_pSet->GetFieldValue(short(1), nownum);
	alterlog.alternum = _ttol(nownum);    //将CString类对应的数据转化为long类型的数据
	int r = alterlog.DoModal();
	if (r == IDOK)
	{
		m_pSet->Edit();
		m_pSet->m_num = alterlog.alternum;
		m_pSet->Update();
		UpdateData(false);
		Invalidate();
	}
}


void CCTest18Experiment3View::OnBnClickedButton1()   //增加记录
{
	addDialog addlog;
	int r = addlog.DoModal();
	if (r==IDOK)
	{
		long ad = addlog.addnum;
		m_pSet->AddNew();
		m_pSet->m_num = ad;
		m_pSet->Update();
		m_pSet->Requery();  //重新查询！！！！使得即时刷新记录集
		//m_pSet->MoveFirst();
		//m_pSet->MoveLast();
		UpdateData(false);
	}
	// TODO: 在此添加控件通知处理程序代码
}
