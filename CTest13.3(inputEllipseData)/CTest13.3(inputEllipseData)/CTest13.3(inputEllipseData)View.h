
// CTest13.3(inputEllipseData)View.h : CCTest133inputEllipseDataView ��Ľӿ�
//

#pragma once


class CCTest133inputEllipseDataView : public CView
{
protected: // �������л�����
	CCTest133inputEllipseDataView();
	DECLARE_DYNCREATE(CCTest133inputEllipseDataView)

// ����
public:
	CCTest133inputEllipseDataDoc* GetDocument() const;

// ����
public:
	int f = 0;
	int r1, r2, r3, r4;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest133inputEllipseDataView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEllipse();
};

#ifndef _DEBUG  // CTest13.3(inputEllipseData)View.cpp �еĵ��԰汾
inline CCTest133inputEllipseDataDoc* CCTest133inputEllipseDataView::GetDocument() const
   { return reinterpret_cast<CCTest133inputEllipseDataDoc*>(m_pDocument); }
#endif

