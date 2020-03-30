
// CTest8.1(showJPG)View.cpp : CCTest81showJPGView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest8.1(showJPG).h"
#endif

#include "CTest8.1(showJPG)Doc.h"
#include "CTest8.1(showJPG)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest81showJPGView

IMPLEMENT_DYNCREATE(CCTest81showJPGView, CView)

BEGIN_MESSAGE_MAP(CCTest81showJPGView, CView)
	ON_COMMAND(ID_FILE_OPEN, &CCTest81showJPGView::OnFileOpen)
END_MESSAGE_MAP()

// CCTest81showJPGView ����/����

CCTest81showJPGView::CCTest81showJPGView()
{
	// TODO: �ڴ˴���ӹ������

}

CCTest81showJPGView::~CCTest81showJPGView()
{
}

BOOL CCTest81showJPGView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCTest81showJPGView ����

void CCTest81showJPGView::OnDraw(CDC* /*pDC*/)
{
	CCTest81showJPGDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCTest81showJPGView ���

#ifdef _DEBUG
void CCTest81showJPGView::AssertValid() const
{
	CView::AssertValid();
}

void CCTest81showJPGView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCTest81showJPGDoc* CCTest81showJPGView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest81showJPGDoc)));
	return (CCTest81showJPGDoc*)m_pDocument;
}
#endif //_DEBUG


// CCTest81showJPGView ��Ϣ�������


void CCTest81showJPGView::OnFileOpen()
{
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	CRect rect;
	int sx, sy;
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		GetClientRect(&rect);
		sx = (rect.right - img.GetWidth()) / 2;
		sy = (rect.bottom - img.GetHeight()) / 2;

		img.Draw(dc.m_hDC, sx, sy, img.GetWidth(), img.GetHeight());
	}
	// TODO: �ڴ���������������
}
