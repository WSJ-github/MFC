
// CTest14.2(readPictureAndShow)Doc.cpp : CCTest142readPictureAndShowDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest14.2(readPictureAndShow).h"
#endif

#include "CTest14.2(readPictureAndShow)Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest142readPictureAndShowDoc

IMPLEMENT_DYNCREATE(CCTest142readPictureAndShowDoc, CDocument)

BEGIN_MESSAGE_MAP(CCTest142readPictureAndShowDoc, CDocument)
END_MESSAGE_MAP()


// CCTest142readPictureAndShowDoc ����/����

CCTest142readPictureAndShowDoc::CCTest142readPictureAndShowDoc()
{
	// TODO: �ڴ����һ���Թ������
	filename = _T("");
}

CCTest142readPictureAndShowDoc::~CCTest142readPictureAndShowDoc()
{
}

BOOL CCTest142readPictureAndShowDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CCTest142readPictureAndShowDoc ���л�

void CCTest142readPictureAndShowDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
		ar << filename;
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
		ar >> filename;
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CCTest142readPictureAndShowDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CCTest142readPictureAndShowDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest142readPictureAndShowDoc::SetSearchContent(const CString& value)
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

// CCTest142readPictureAndShowDoc ���

#ifdef _DEBUG
void CCTest142readPictureAndShowDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest142readPictureAndShowDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest142readPictureAndShowDoc ����
