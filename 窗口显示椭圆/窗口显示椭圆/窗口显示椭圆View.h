
// ������ʾ��ԲView.h : C������ʾ��ԲView ��Ľӿ�
//

#pragma once


class C������ʾ��ԲView : public CView
{
protected: // �������л�����
	C������ʾ��ԲView();
	DECLARE_DYNCREATE(C������ʾ��ԲView)

// ����
public:
	C������ʾ��ԲDoc* GetDocument() const;

// ����
public:
	CRect cr;
	//CArray<CRect, CRect&> c;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C������ʾ��ԲView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ������ʾ��ԲView.cpp �еĵ��԰汾
inline C������ʾ��ԲDoc* C������ʾ��ԲView::GetDocument() const
   { return reinterpret_cast<C������ʾ��ԲDoc*>(m_pDocument); }
#endif

