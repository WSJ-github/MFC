
// CTest16(ConnectTofile.xsl)View.cpp : CCTest16ConnectTofilexslView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CCTest16ConnectTofilexslView ����/����

CCTest16ConnectTofilexslView::CCTest16ConnectTofilexslView()
	: CRecordView(IDD_CTEST16CONNECTTOFILEXSL_FORM)
	, name(_T(""))
	, nameno(_T(""))
	, phone(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CCTest16ConnectTofilexslView::~CCTest16ConnectTofilexslView()
{
}

void CCTest16ConnectTofilexslView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_201812300010);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_F3);
}

BOOL CCTest16ConnectTofilexslView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CCTest16ConnectTofilexslView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest16ConnectTofilexslSet;
	CRecordView::OnInitialUpdate();

}


// CCTest16ConnectTofilexslView ���

#ifdef _DEBUG
void CCTest16ConnectTofilexslView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest16ConnectTofilexslView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest16ConnectTofilexslDoc* CCTest16ConnectTofilexslView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest16ConnectTofilexslDoc)));
	return (CCTest16ConnectTofilexslDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest16ConnectTofilexslView ���ݿ�֧��
CRecordset* CCTest16ConnectTofilexslView::OnGetRecordset()
{
	return m_pSet;
}



// CCTest16ConnectTofilexslView ��Ϣ�������
