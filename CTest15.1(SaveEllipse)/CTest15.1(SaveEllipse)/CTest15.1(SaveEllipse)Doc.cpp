
// CTest15.1(SaveEllipse)Doc.cpp : CCTest151SaveEllipseDoc 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "CTest15.1(SaveEllipse).h"
#endif

#include "CTest15.1(SaveEllipse)Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CCTest151SaveEllipseDoc

IMPLEMENT_DYNCREATE(CCTest151SaveEllipseDoc, CDocument)

BEGIN_MESSAGE_MAP(CCTest151SaveEllipseDoc, CDocument)
END_MESSAGE_MAP()


// CCTest151SaveEllipseDoc 构造/析构

CCTest151SaveEllipseDoc::CCTest151SaveEllipseDoc()
{
	// TODO: 在此添加一次性构造代码
	
}

CCTest151SaveEllipseDoc::~CCTest151SaveEllipseDoc()
{
}

BOOL CCTest151SaveEllipseDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// CCTest151SaveEllipseDoc 序列化

void CCTest151SaveEllipseDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
	ary.Serialize(ar);
}

#ifdef SHARED_HANDLERS

// 缩略图的支持
void CCTest151SaveEllipseDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// 修改此代码以绘制文档数据
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

// 搜索处理程序的支持
void CCTest151SaveEllipseDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// 从文档数据设置搜索内容。
	// 内容部分应由“;”分隔

	// 例如:     strSearchContent = _T("point;rectangle;circle;ole object;")；
	SetSearchContent(strSearchContent);
}

void CCTest151SaveEllipseDoc::SetSearchContent(const CString& value)
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

// CCTest151SaveEllipseDoc 诊断

#ifdef _DEBUG
void CCTest151SaveEllipseDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCTest151SaveEllipseDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCTest151SaveEllipseDoc 命令
