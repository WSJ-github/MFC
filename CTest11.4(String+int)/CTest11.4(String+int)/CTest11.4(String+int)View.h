
// CTest11.4(String+int)View.h : CCTest114StringintView ��Ľӿ�
//

#pragma once


class CCTest114StringintView : public CView
{
protected: // �������л�����
	CCTest114StringintView();
	DECLARE_DYNCREATE(CCTest114StringintView)

// ����
public:
	CCTest114StringintDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest114StringintView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
};

#ifndef _DEBUG  // CTest11.4(String+int)View.cpp �еĵ��԰汾
inline CCTest114StringintDoc* CCTest114StringintView::GetDocument() const
   { return reinterpret_cast<CCTest114StringintDoc*>(m_pDocument); }
#endif

