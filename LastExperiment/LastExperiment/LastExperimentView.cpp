
// LastExperimentView.cpp : CLastExperimentView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "LastExperiment.h"
#endif

#include "LastExperimentSet.h"
#include "LastExperimentDoc.h"
#include "LastExperimentView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"bigDialog.h"
#include"addDialog.h"
#include"resetDialog.h"
#include"sortDialog.h"
#include"findDialog.h"


// CLastExperimentView

IMPLEMENT_DYNCREATE(CLastExperimentView, CRecordView)

BEGIN_MESSAGE_MAP(CLastExperimentView, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &CLastExperimentView::OnBnClickedResetButton)
	ON_COMMAND(ID_RECORD_FIRST, &CLastExperimentView::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CLastExperimentView::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CLastExperimentView::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CLastExperimentView::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON5, &CLastExperimentView::ClickBig)
	ON_BN_CLICKED(IDC_BUTTON1, &CLastExperimentView::OnBnclickedAddButton)
	ON_BN_CLICKED(IDC_BUTTON2, &CLastExperimentView::OnBnClickedRemoveButton)
	ON_BN_CLICKED(IDC_BUTTON7, &CLastExperimentView::OnBnClickedSortButton)
	ON_BN_CLICKED(IDC_BUTTON6, &CLastExperimentView::OnBnClickedFindButton)
	ON_BN_CLICKED(IDC_BUTTON4, &CLastExperimentView::OnBnClickedButton4)
END_MESSAGE_MAP()

// CLastExperimentView 构造/析构

CLastExperimentView::CLastExperimentView()
	: CRecordView(IDD_LASTEXPERIMENT_FORM)
	, name(_T(""))
	, nameno(_T(""))
	, major(_T(""))
	, sex(_T(""))
	, birth(_T(""))
	, phone(_T(""))
	, home(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	absolutePath=_T("C:\\Users\\杰哥\\Pictures\\Camera Roll\\");
	filename = _T("");
	flag = 1;
}

CLastExperimentView::~CLastExperimentView()
{
}

void CLastExperimentView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
}

BOOL CLastExperimentView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CLastExperimentView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_LastExperimentSet;
	CRecordView::OnInitialUpdate();
	OnRecordFirst();
}


// CLastExperimentView 诊断

#ifdef _DEBUG
void CLastExperimentView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CLastExperimentView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CLastExperimentDoc* CLastExperimentView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLastExperimentDoc)));
	return (CLastExperimentDoc*)m_pDocument;
}
#endif //_DEBUG


// CLastExperimentView 数据库支持
CRecordset* CLastExperimentView::OnGetRecordset()
{
	return m_pSet;
}



// CLastExperimentView 消息处理程序
void CLastExperimentView::road()
{
	CString s;
	m_pSet->GetFieldValue(short(8), s);
	//m_pSet->GetFieldValue(short(8), r);  每一条记录中的任意一个字段获取的次数不能多于一次(可以改用GetDlgText（ID,r）)
	filename = s;
	Invalidate();
}

void CLastExperimentView::OnBnClickedResetButton()   //修改记录
{
	resetDialog resetlog;
	boolean flag1;
	flag1 = false;
	GetDlgItemText(IDC_EDIT1, resetlog.name2);
	GetDlgItemText(IDC_EDIT2, resetlog.nameno2);
	GetDlgItemText(IDC_EDIT3, resetlog.major2);
	GetDlgItemText(IDC_EDIT5, resetlog.sex2);
	GetDlgItemText(IDC_EDIT4, resetlog.birth2);
	GetDlgItemText(IDC_EDIT6, resetlog.phone2);
	GetDlgItemText(IDC_EDIT7, resetlog.home2);
	//GetDlgItemText(IDC_EDIT8, resetlog.filename2); 
	/*m_pSet->GetFieldValue(short(1), resetlog.name2);
	m_pSet->GetFieldValue(short(2), resetlog.nameno2);
	m_pSet->GetFieldValue(short(3), resetlog.major2);
	m_pSet->GetFieldValue(short(4), resetlog.sex2);
	m_pSet->GetFieldValue(short(5), resetlog.birth2);
	m_pSet->GetFieldValue(short(6), resetlog.phone2);
	m_pSet->GetFieldValue(short(7), resetlog.home2);
	m_pSet->GetFieldValue(short(8), resetlog.filename2);*/  //前面获取过第8个字段的数据了，不能用该函数重复获取
	resetlog.filename2 = filename;
	int r = resetlog.DoModal();
	if (r == IDOK)
	{
		flag1 = resetlog.flag1;
		if (flag1 == false)
		{
			AfxMessageBox(_T("修改记录失败！可能是输入错误！"));
		}
		else {
			m_pSet->Edit();
			m_pSet->column1 = resetlog.name2;
			m_pSet->column2 = resetlog.nameno2;
			m_pSet->column3 = resetlog.major2;
			m_pSet->column4 = resetlog.sex2;
			m_pSet->column5 = resetlog.birth2;
			m_pSet->column6 = resetlog.phone2;
			m_pSet->column7 = resetlog.home2;
			m_pSet->column8 = resetlog.filename2;
			//filename = resetlog.filename2;
			m_pSet->Update();
			m_pSet->Requery();
			OnRecordFirst();
			AfxMessageBox(_T("修改记录成功"));
		}
	}
	// TODO: 在此添加控件通知处理程序代码
}


void CLastExperimentView::OnRecordFirst()
{
	m_pSet->MoveFirst();
	UpdateData(false);
	road();
	// TODO: 在此添加命令处理程序代码
}


void CLastExperimentView::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	road();
}


void CLastExperimentView::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
	{
		m_pSet->MoveLast();
	}
	UpdateData(false);
	road();
}


void CLastExperimentView::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	road();
}


void CLastExperimentView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()

	/*if (flag == 1)   //多此一举了，直接在初始化函数中用一个OnRecordFirst（）即可初始化
	{
		CString k;
		k = _T("wsj.jpg");
		filename = k;
		CImage img;
		img.Load(absolutePath + k);
		CDC *pdc = GetDlgItem(IDC_STATIC)->GetDC();
		CRect r;
		GetDlgItem(IDC_STATIC)->GetClientRect(&r);
		pdc->SetStretchBltMode(HALFTONE);   //保证图像不失真
		img.Draw(pdc->m_hDC, 0, 0, r.Width(), r.Height());   //这里我就不用foo函数根据宽高比来draw图像了，因为方法我都懂
		ReleaseDC(pdc);
		//filename = _T("");
		flag = 0;

	}*/
	if (filename != _T(""))
	{
		CImage img;
		img.Load(absolutePath + filename);
		CDC *pdc = GetDlgItem(IDC_STATIC)->GetDC();
		CRect r;
		GetDlgItem(IDC_STATIC)->GetClientRect(&r);
		pdc->SetStretchBltMode(HALFTONE);   //保证图像不失真
		img.Draw(pdc->m_hDC, 0, 0, r.Width(), r.Height());   //这里我就不用foo函数根据宽高比来draw图像了，因为方法我都懂
		ReleaseDC(pdc);
		//filename = _T("");
	}
}


void CLastExperimentView::ClickBig()   //点击放大按钮
{
	bigDialog biglog;
	biglog.str = absolutePath + filename;
	biglog.DoModal();
	// TODO: 在此添加控件通知处理程序代码
}


void CLastExperimentView::OnBnclickedAddButton()  //增加记录
{
	addDialog addlog;
	int r = addlog.DoModal();
	if (r == IDOK)
	{
		if (addlog.name1 == _T(""))
		{
			AfxMessageBox(_T("新增记录失败！可能是输入错误！"));
		}
		else {
			m_pSet->AddNew();   //如果新增记录成功则执行以下
			m_pSet->column1 = addlog.name1;
			m_pSet->column2 = addlog.nameno1;
			m_pSet->column3 = addlog.major1;
			m_pSet->column4 = addlog.sex1;
			m_pSet->column5 = addlog.birth1;
			m_pSet->column6 = addlog.phone1;
			m_pSet->column7 = addlog.home1;
			m_pSet->column8 = addlog.filename1;
			m_pSet->Update();
			m_pSet->Requery();
			OnRecordLast();
			AfxMessageBox(_T("新增记录成功"));
		}
	}
	// TODO: 在此添加控件通知处理程序代码
}


void CLastExperimentView::OnBnClickedRemoveButton()//删除记录
{
	m_pSet->Delete();
	OnRecordPrev();
	if (m_pSet->IsBOF())
	{
		OnRecordFirst();
	}
	// TODO: 在此添加控件通知处理程序代码
}





void CLastExperimentView::OnBnClickedSortButton()   //排序
{
	sortDialog sortlog;
	int r = sortlog.DoModal();
	if (r == IDOK)
	{
		if (sortlog.condition != _T(""))
		{
			m_pSet->m_strSort = sortlog.condition;   //将排序条件给m_strSort
			m_pSet->Requery();
			OnRecordFirst();
		}
	}
	// TODO: 在此添加控件通知处理程序代码
}


void CLastExperimentView::OnBnClickedFindButton()  // 查询
{
	findDialog findlog;
	int r = findlog.DoModal();
	if (r == IDOK)
	{
		if (findlog.condition != _T(""))
		{
			m_pSet->m_strFilter = findlog.condition;
			m_pSet->Requery();
			OnRecordFirst();
		}
	}
	
	// TODO: 在此添加控件通知处理程序代码
}


void CLastExperimentView::OnBnClickedButton4()
{
	m_pSet->m_strFilter = _T("");
	m_pSet->Requery();
	OnRecordFirst();
	// TODO: 在此添加控件通知处理程序代码
}
