
// CTest14.1(MFCserialize)Doc.cpp : CCTest141MFCserializeDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest14.1(MFCserialize).h"
#endif

#include "CTest14.1(MFCserialize)Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest141MFCserializeDoc

IMPLEMENT_DYNCREATE(CCTest141MFCserializeDoc, CDocument)

BEGIN_MESSAGE_MAP(CCTest141MFCserializeDoc, CDocument)
END_MESSAGE_MAP()


// CCTest141MFCserializeDoc ����/����

CCTest141MFCserializeDoc::CCTest141MFCserializeDoc()
{
	// TODO: �ڴ����һ���Թ������
	s = _T("");
}

CCTest141MFCserializeDoc::~CCTest141MFCserializeDoc()
{
}

BOOL CCTest141MFCserializeDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CCTest141MFCserializeDoc ���л�

void CCTest141MFCserializeDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{  //����������ʱ
		// TODO: �ڴ���Ӵ洢����
		ar << s;   //д��s
	}
	else
	{  //����򿪲���ʱ
		// TODO: �ڴ���Ӽ��ش���
		ar >> s;  //����s
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CCTest141MFCserializeDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CCTest141MFCserializeDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CCTest141MFCserializeDoc::SetSearchContent(const CString& value)
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

// CCTest141MFCserializeDoc ���

#ifdef _DEBUG
void CCTest141MFCserializeDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest141MFCserializeDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest141MFCserializeDoc ����
