
// CTest11.3(ClickEllipseMove)Doc.cpp : CCTest113ClickEllipseMoveDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest11.3(ClickEllipseMove).h"
#endif

#include "CTest11.3(ClickEllipseMove)Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest113ClickEllipseMoveDoc

IMPLEMENT_DYNCREATE(CCTest113ClickEllipseMoveDoc, CDocument)

BEGIN_MESSAGE_MAP(CCTest113ClickEllipseMoveDoc, CDocument)
END_MESSAGE_MAP()


// CCTest113ClickEllipseMoveDoc ����/����

CCTest113ClickEllipseMoveDoc::CCTest113ClickEllipseMoveDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CCTest113ClickEllipseMoveDoc::~CCTest113ClickEllipseMoveDoc()
{
}

BOOL CCTest113ClickEllipseMoveDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CCTest113ClickEllipseMoveDoc ���л�

void CCTest113ClickEllipseMoveDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CCTest113ClickEllipseMoveDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CCTest113ClickEllipseMoveDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest113ClickEllipseMoveDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CCTest113ClickEllipseMoveDoc ���

#ifdef _DEBUG
void CCTest113ClickEllipseMoveDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest113ClickEllipseMoveDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest113ClickEllipseMoveDoc ����
