
// CTest7.2(showBitmap)View.cpp : CCTest72showBitmapView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest7.2(showBitmap).h"
#endif

#include "CTest7.2(showBitmap)Doc.h"
#include "CTest7.2(showBitmap)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest72showBitmapView

IMPLEMENT_DYNCREATE(CCTest72showBitmapView, CView)

BEGIN_MESSAGE_MAP(CCTest72showBitmapView, CView)
END_MESSAGE_MAP()

// CCTest72showBitmapView ����/����

CCTest72showBitmapView::CCTest72showBitmapView()
{
	// TODO: �ڴ˴���ӹ������
	bitmap.LoadBitmapW(IDB_BITMAP3);
}

CCTest72showBitmapView::~CCTest72showBitmapView()
{
}

BOOL CCTest72showBitmapView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest72showBitmapView ����

void CCTest72showBitmapView::OnDraw(CDC* pDC)
{
	CCTest72showBitmapDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	bitmap.GetBitmap(&BM);
	width = BM.bmWidth;
	heigth = BM.bmHeight;
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(bitmap);
	pDC->BitBlt(0, 0, width, heigth, &MemDC, 0, 0, SRCCOPY);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest72showBitmapView ���

#ifdef _DEBUG
void CCTest72showBitmapView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest72showBitmapView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest72showBitmapDoc* CCTest72showBitmapView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest72showBitmapDoc)));
	return (CCTest72showBitmapDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest72showBitmapView ��Ϣ�������
