
// CTest20(Experiment4)View.cpp : CCTest20Experiment4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest20(Experiment4).h"
#endif

#include "CTest20(Experiment4)Set.h"
#include "CTest20(Experiment4)Doc.h"
#include "CTest20(Experiment4)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"bigDialog.h"
#include"selectDialog.h"
#include"sortDialog.h"
#include"traverseDialog.h"


// CCTest20Experiment4View

IMPLEMENT_DYNCREATE(CCTest20Experiment4View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest20Experiment4View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CCTest20Experiment4View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CCTest20Experiment4View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CCTest20Experiment4View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CCTest20Experiment4View::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &CCTest20Experiment4View::OnBnClickedButton1)
//	ON_WM_SHOWWINDOW()
ON_COMMAND(ID_SELECT, &CCTest20Experiment4View::OnSelect)
ON_COMMAND(ID_SORT, &CCTest20Experiment4View::OnSort)
ON_COMMAND(ID_TRAVERSE, &CCTest20Experiment4View::OnTraverse)
ON_COMMAND(ID_RESET, &CCTest20Experiment4View::OnReset)
END_MESSAGE_MAP()

// CCTest20Experiment4View 构造/析构

CCTest20Experiment4View::CCTest20Experiment4View()
	: CRecordView(IDD_CTEST20EXPERIMENT4_FORM)
	, name(_T(""))
	, age(0)
	, post(_T(""))
	, workno(_T(""))
	, salary(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	absolutePath = _T("C:\\Users\\杰哥\\Pictures\\ForWorkDmb\\");   //绝对路径
	filename = _T("");
	flag = 1;
}

CCTest20Experiment4View::~CCTest20Experiment4View()
{
}
long	m_ID;
CStringW	column1;
long	column2;
CStringW	column3;
CStringW	column4;
CStringW	column5;
long	m_1;
void CCTest20Experiment4View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_1);
}

BOOL CCTest20Experiment4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式
	return CRecordView::PreCreateWindow(cs);
}

void CCTest20Experiment4View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest20Experiment4Set;
	CRecordView::OnInitialUpdate();

}


// CCTest20Experiment4View 诊断

#ifdef _DEBUG
void CCTest20Experiment4View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest20Experiment4View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest20Experiment4Doc* CCTest20Experiment4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest20Experiment4Doc)));
	return (CCTest20Experiment4Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest20Experiment4View 数据库支持
CRecordset* CCTest20Experiment4View::OnGetRecordset()
{
	return m_pSet;
}

void CCTest20Experiment4View::road()
{
	CString s;
	m_pSet->GetFieldValue(short(4), s);
	filename = s;
	Invalidate();
}

// CCTest20Experiment4View 消息处理程序


void CCTest20Experiment4View::OnRecordFirst()
{
	m_pSet->MoveFirst();
	UpdateData(false);
	road();
	// TODO: 在此添加命令处理程序代码
}


void CCTest20Experiment4View::OnRecordPrev()
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


void CCTest20Experiment4View::OnRecordNext()
{
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
	{
		m_pSet->MoveLast();
	}
	UpdateData(false);
	road();
	// TODO: 在此添加命令处理程序代码
}


void CCTest20Experiment4View::OnRecordLast()
{
	m_pSet->MoveLast();
	UpdateData(false);
	road();
	// TODO: 在此添加命令处理程序代码
}


void CCTest20Experiment4View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
	if (flag == 1)
	{
		CString k;
		k = _T("张三.jpg");
		filename = k;
		CImage img;
		img.Load(absolutePath+k);
		CDC *pdc = GetDlgItem(IDC_STATIC)->GetDC();
		CRect r;
		GetDlgItem(IDC_STATIC)->GetClientRect(&r);
		pdc->SetStretchBltMode(HALFTONE);   //保证图像不失真
		img.Draw(pdc->m_hDC, 0, 0, r.Width(), r.Height());   //这里我就不用foo函数根据宽高比来draw图像了，因为方法我都懂
		ReleaseDC(pdc);
		//filename = _T("");
		flag = 0;
		
	}
	if (filename != _T(""))
	{
		CImage img;
		img.Load(absolutePath + filename);
		CDC *pdc=GetDlgItem(IDC_STATIC)->GetDC();
		CRect r;
		GetDlgItem(IDC_STATIC)->GetClientRect(&r);
		pdc->SetStretchBltMode(HALFTONE);   //保证图像不失真
		img.Draw(pdc->m_hDC,0,0,r.Width(),r.Height());   //这里我就不用foo函数根据宽高比来draw图像了，因为方法我都懂
		ReleaseDC(pdc);
		//filename = _T("");
	}
}


void CCTest20Experiment4View::OnBnClickedButton1()   //点击放大图片按钮
{
	bigDialog dlg;
	dlg.str = absolutePath+filename;
	dlg.DoModal();
	// TODO: 在此添加控件通知处理程序代码
}





void CCTest20Experiment4View::OnSelect() //点击查询时
{
	CString s;
	selectDialog selectlog;
	int r = selectlog.DoModal();
	if (r == IDOK)
	{
		s = selectlog.condition;  //获得查询条件
		m_pSet->m_strFilter = s;  //将where的条件赋值给记录集成员m_strFilter
		m_pSet->Requery();   //重新查询记录集
		//OnRecordFirst();   //从重新查询后的记录集的第一条记录开始看
	}
	// TODO: 在此添加命令处理程序代码
}


void CCTest20Experiment4View::OnSort()   //排序记录集(将order by的条件赋值赋值给m_strSort)
{  //比如 年龄 ASC 或 年龄 DESC
	CString s;
	sortDialog sortlog;
	int r = sortlog.DoModal();
	if (r == IDOK)
	{
		s = sortlog.condition;  //获得查询条件
		m_pSet->m_strSort = s;
		m_pSet->Requery();   //重新查询记录集
		OnRecordFirst();   //从重新查询后的记录集的第一条记录开始看
	}
	// TODO: 在此添加命令处理程序代码
}


void CCTest20Experiment4View::OnTraverse()
{
	int num = m_pSet->GetODBCFieldCount();   //获取字段(即属性)数目(字段数目在这个access表中有7个，但是实际上是从0号字段开始的，所以只有0~6号字段)
	CString str;
	str = _T("");
	m_pSet->MoveFirst();
	CString s;
	while (!m_pSet->IsEOF())//检查有没有遍历到记录集的末端
	{
		for (int j = 1; j < num; j++)  //ID字段不要（从o开始编号，一共7个字段，而此时第0号字段ID字段不要）
		{
			m_pSet->GetFieldValue((short)j, s);  //会刷新str原来的内容
			str = str + s + _T("    ");
		}
		str = str + _T("\r\n");  //识别不了\n，所以换不了行
		m_pSet->MoveNext();
	}
	traverseDialog traverselog;
	traverselog.traverse = str;
	traverselog.DoModal();
	// TODO: 在此添加命令处理程序代码
}


void CCTest20Experiment4View::OnReset()   //恢复初始记录集
{
	m_pSet->m_strFilter = _T("");  //将where条件清空，即将过滤器清空
	m_pSet->Requery();
	// TODO: 在此添加命令处理程序代码
}
