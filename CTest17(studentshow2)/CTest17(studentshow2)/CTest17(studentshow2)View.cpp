
// CTest17(studentshow2)View.cpp : CCTest17studentshow2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CCTest17studentshow2View ����/����

CCTest17studentshow2View::CCTest17studentshow2View()
	: CRecordView(IDD_CTEST17STUDENTSHOW2_FORM)
	, name(_T(""))
	, nameno(_T(""))
	, institute(_T(""))
	, age(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	str = _T("C:\\Users\\�ܸ�\\Pictures\\Camera Roll\\");
	filename= _T("");
	flag = 1;

}

CCTest17studentshow2View::~CCTest17studentshow2View()
{
}

void CCTest17studentshow2View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_201812300010);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_F4);
}

BOOL CCTest17studentshow2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CCTest17studentshow2View::OnInitialUpdate()
{
	//this->Invalidate();
	m_pSet = &GetDocument()->m_CTest17studentshow2Set;
	CRecordView::OnInitialUpdate();
}


// CCTest17studentshow2View ���

#ifdef _DEBUG
void CCTest17studentshow2View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest17studentshow2View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest17studentshow2Doc* CCTest17studentshow2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest17studentshow2Doc)));
	return (CCTest17studentshow2Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest17studentshow2View ���ݿ�֧��
CRecordset* CCTest17studentshow2View::OnGetRecordset()
{
	return m_pSet;
}



// CCTest17studentshow2View ��Ϣ�������


void CCTest17studentshow2View::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CCTest17studentshow2View::OnEnChangeEdit5()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CCTest17studentshow2View::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
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
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���������������
}


void CCTest17studentshow2View::OnRecordLast()
{
	m_pSet->MoveLast();
	UpdateData(false);
	//this->RedrawWindow();
	load();
	// TODO: �ڴ���������������
}



void CCTest17studentshow2View::OnPaint()
{
	
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	//һ��Ҫ����������һ�δ���֮�£���������
	if (flag == 1)
	{
		CString s;
		s = _T("C:\\Users\\�ܸ�\\Pictures\\Camera Roll\\gxnu.jpg");
		CImage img;
		img.Load(s);
		CDC *pdc = GetDlgItem(IDC_STATIC)->GetDC();
		CRect r;
		GetDlgItem(IDC_STATIC)->GetClientRect(&r);
		pdc->SetStretchBltMode(HALFTONE);   //��ֹʧ��
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
		pdc->SetStretchBltMode(HALFTONE);   //��ֹʧ��
		img.Draw(pdc->m_hDC, 0, 0, r.Width(), r.Height());
		ReleaseDC(pdc);
		//filename = _T("");
	}

}
