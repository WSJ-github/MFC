
// CTest11.4(String+int)View.cpp : CCTest114StringintView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest11.4(String+int).h"
#include"connectDialog.h"
#endif

#include "CTest11.4(String+int)Doc.h"
#include "CTest11.4(String+int)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest114StringintView

IMPLEMENT_DYNCREATE(CCTest114StringintView, CView)

BEGIN_MESSAGE_MAP(CCTest114StringintView, CView)
	ON_COMMAND(ID_32771, &CCTest114StringintView::On32771)
END_MESSAGE_MAP()

// CCTest114StringintView ����/����

CCTest114StringintView::CCTest114StringintView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest114StringintView::~CCTest114StringintView()
{
}

BOOL CCTest114StringintView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest114StringintView ����

void CCTest114StringintView::OnDraw(CDC* /*pDC*/)
{
	CCTest114StringintDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest114StringintView ���

#ifdef _DEBUG
void CCTest114StringintView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest114StringintView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest114StringintDoc* CCTest114StringintView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest114StringintDoc)));
	return (CCTest114StringintDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest114StringintView ��Ϣ�������


void CCTest114StringintView::On32771()
{
	connectDialog *log = new connectDialog;
	log->Create(IDD_DIALOG1);
	log->ShowWindow(1);
	// TODO: �ڴ���������������
}
