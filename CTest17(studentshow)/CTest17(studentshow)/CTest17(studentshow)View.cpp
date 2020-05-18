
// CTest17(studentshow)View.cpp : CCTest17studentshowView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
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

// CCTest17studentshowView ����/����

CCTest17studentshowView::CCTest17studentshowView()
	: CRecordView(IDD_CTEST17STUDENTSHOW_FORM)
	, r1(_T(""))
	, r2(_T(""))
	, r3(_T(""))
	, r4(0)
	, r5(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	str = _T("C:\\Users\\�ܸ�\\Pictures\\Camera Roll\\");
}

CCTest17studentshowView::~CCTest17studentshowView()
{
}
void CCTest17studentshowView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_201812300010);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_F4);
}

BOOL CCTest17studentshowView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CCTest17studentshowView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest17studentshowSet;
	CRecordView::OnInitialUpdate();

}


// CCTest17studentshowView ��ӡ

BOOL CCTest17studentshowView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CCTest17studentshowView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CCTest17studentshowView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CCTest17studentshowView ���

#ifdef _DEBUG
void CCTest17studentshowView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest17studentshowView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest17studentshowDoc* CCTest17studentshowView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest17studentshowDoc)));
	return (CCTest17studentshowDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest17studentshowView ���ݿ�֧��
CRecordset* CCTest17studentshowView::OnGetRecordset()
{
	return m_pSet;
}



// CCTest17studentshowView ��Ϣ�������


void CCTest17studentshowView::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
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
	pdc->SetStretchBltMode(HALFTONE);   //��ֹʧ��
	img.Draw(pdc->m_hDC, 0, 0, r.Width(), r.Height());
	ReleaseDC(pdc);
		// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CCTest17studentshowView::OnRecordFirst()
{
	m_pSet->MoveFirst();
	UpdateData(false);
	this->RedrawWindow();
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���������������
}


void CCTest17studentshowView::OnRecordLast()
{
	m_pSet->MoveLast();
	UpdateData(false);
	this->RedrawWindow();
	// TODO: �ڴ���������������
}
