
// CTest16(DynamicAndStaticLinkLibraries)View.h : CCTest16DynamicAndStaticLinkLibrariesView ��Ľӿ�
//

#pragma once


class CCTest16DynamicAndStaticLinkLibrariesView : public CView
{
protected: // �������л�����
	CCTest16DynamicAndStaticLinkLibrariesView();
	DECLARE_DYNCREATE(CCTest16DynamicAndStaticLinkLibrariesView)

// ����
public:
	CCTest16DynamicAndStaticLinkLibrariesDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest16DynamicAndStaticLinkLibrariesView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest16(DynamicAndStaticLinkLibraries)View.cpp �еĵ��԰汾
inline CCTest16DynamicAndStaticLinkLibrariesDoc* CCTest16DynamicAndStaticLinkLibrariesView::GetDocument() const
   { return reinterpret_cast<CCTest16DynamicAndStaticLinkLibrariesDoc*>(m_pDocument); }
#endif

