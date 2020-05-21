
// CTest19(Experiment2.1)View.cpp : CCTest19Experiment21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CCTest19Experiment21View ����/����

CCTest19Experiment21View::CCTest19Experiment21View()
	: CRecordView(IDD_CTEST19EXPERIMENT21_FORM)
	, name(_T(""))
	, nameno(_T(""))
	, institute(_T(""))
	, age(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	str = _T("C:\\Users\\�ܸ�\\Pictures\\Camera Roll\\");
	filename = _T("C:\\Users\\�ܸ�\\Pictures\\Camera Roll\\gxnu.jpg");
	flag = 1;
}

CCTest19Experiment21View::~CCTest19Experiment21View()
{
}

void CCTest19Experiment21View::DoDataExchange(CDataExchange* pDX)
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

BOOL CCTest19Experiment21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CCTest19Experiment21View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest19Experiment21Set;
	CRecordView::OnInitialUpdate();

}


// CCTest19Experiment21View ���

#ifdef _DEBUG
void CCTest19Experiment21View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest19Experiment21View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest19Experiment21Doc* CCTest19Experiment21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest19Experiment21Doc)));
	return (CCTest19Experiment21Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest19Experiment21View ���ݿ�֧��
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

// CCTest19Experiment21View ��Ϣ�������


void CCTest19Experiment21View::OnRecordFirst()
{
	m_pSet->MoveFirst();
	UpdateData(false);
	//this->RedrawWindow();
	load();
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���������������
}


void CCTest19Experiment21View::OnRecordLast()
{
	m_pSet->MoveLast();
	UpdateData(false);
	//this->RedrawWindow();
	load();
	// TODO: �ڴ���������������
}


void CCTest19Experiment21View::OnPaint()
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


void CCTest19Experiment21View::OnBnClickedButton2()
{
	bigDialog big;
	big.filename = filename;
	big.DoModal();
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
