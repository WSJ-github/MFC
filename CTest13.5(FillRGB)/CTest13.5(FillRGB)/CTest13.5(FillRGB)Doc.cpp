
// CTest13.5(FillRGB)Doc.cpp : CCTest135FillRGBDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest13.5(FillRGB).h"
#endif

#include "CTest13.5(FillRGB)Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest135FillRGBDoc

IMPLEMENT_DYNCREATE(CCTest135FillRGBDoc, CDocument)

BEGIN_MESSAGE_MAP(CCTest135FillRGBDoc, CDocument)
END_MESSAGE_MAP()


// CCTest135FillRGBDoc ����/����

CCTest135FillRGBDoc::CCTest135FillRGBDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CCTest135FillRGBDoc::~CCTest135FillRGBDoc()
{
}

BOOL CCTest135FillRGBDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CCTest135FillRGBDoc ���л�

void CCTest135FillRGBDoc::Serialize(CArchive& ar)
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
void CCTest135FillRGBDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CCTest135FillRGBDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest135FillRGBDoc::SetSearchContent(const CString& value)
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

// CCTest135FillRGBDoc ���

#ifdef _DEBUG
void CCTest135FillRGBDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest135FillRGBDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest135FillRGBDoc ����
