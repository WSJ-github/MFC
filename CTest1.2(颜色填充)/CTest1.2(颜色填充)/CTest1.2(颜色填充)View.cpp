
// CTest1.2(��ɫ���)View.cpp : CCTest12��ɫ���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest1.2(��ɫ���).h"
#endif

#include "CTest1.2(��ɫ���)Doc.h"
#include "CTest1.2(��ɫ���)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest12��ɫ���View

IMPLEMENT_DYNCREATE(CCTest12��ɫ���View, CView)

BEGIN_MESSAGE_MAP(CCTest12��ɫ���View, CView)
END_MESSAGE_MAP()

// CCTest12��ɫ���View ����/����

CCTest12��ɫ���View::CCTest12��ɫ���View()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest12��ɫ���View::~CCTest12��ɫ���View()
{
}

BOOL CCTest12��ɫ���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest12��ɫ���View ����

void CCTest12��ɫ���View::OnDraw(CDC* pDC)
{
	CCTest12��ɫ���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect c;
	GetClientRect(&c);
	CBrush brush(RGB(0,0,0));
	CRgn rgn;  //����һ��������
	rgn.CreateEllipticRgn(0,0,c.right,c.bottom);   //���ݿͻ������ε��������һ����Բ
	//CBrush* pOldBrush = pDC->SelectObject(&brush);  //ѡ���µĻ�ˢ
	//pDC->SelectObject(pOldBrush);	  //��ԭ���Ļ�ˢѡ��ȥ
	pDC->FillRgn(&rgn,&brush);   //����Բ��ɫ
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest12��ɫ���View ���

#ifdef _DEBUG
void CCTest12��ɫ���View::AssertValid() const
{
	CView::AssertValid();
}

void CCTest12��ɫ���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest12��ɫ���Doc* CCTest12��ɫ���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest12��ɫ���Doc)));
	return (CCTest12��ɫ���Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest12��ɫ���View ��Ϣ�������
