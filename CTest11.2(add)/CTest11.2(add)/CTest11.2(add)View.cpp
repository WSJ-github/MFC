
// CTest11.2(add)View.cpp : CCTest112addView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest11.2(add).h"
#include"addDialog.h"
#endif

#include "CTest11.2(add)Doc.h"
#include "CTest11.2(add)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest112addView

IMPLEMENT_DYNCREATE(CCTest112addView, CView)

BEGIN_MESSAGE_MAP(CCTest112addView, CView)
	ON_COMMAND(ID_CALCULATOR, &CCTest112addView::OnCalculator)
END_MESSAGE_MAP()

// CCTest112addView ����/����

CCTest112addView::CCTest112addView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest112addView::~CCTest112addView()
{
}

BOOL CCTest112addView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest112addView ����

void CCTest112addView::OnDraw(CDC* /*pDC*/)
{
	CCTest112addDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest112addView ���

#ifdef _DEBUG
void CCTest112addView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest112addView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest112addDoc* CCTest112addView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest112addDoc)));
	return (CCTest112addDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest112addView ��Ϣ�������


void CCTest112addView::OnCalculator()
{
	addDialog log;
	log.DoModal();
	// TODO: �ڴ���������������
}
