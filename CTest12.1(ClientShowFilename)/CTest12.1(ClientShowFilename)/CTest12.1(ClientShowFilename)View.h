
// CTest12.1(ClientShowFilename)View.h : CCTest121ClientShowFilenameView ��Ľӿ�
//

#pragma once


class CCTest121ClientShowFilenameView : public CView
{
protected: // �������л�����
	CCTest121ClientShowFilenameView();
	DECLARE_DYNCREATE(CCTest121ClientShowFilenameView)

// ����
public:
	CCTest121ClientShowFilenameDoc* GetDocument() const;

// ����
public:
	CString filename=_T(" ");
	

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest121ClientShowFilenameView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnEditshow();
	afx_msg void OnListshow();
};

#ifndef _DEBUG  // CTest12.1(ClientShowFilename)View.cpp �еĵ��԰汾
inline CCTest121ClientShowFilenameDoc* CCTest121ClientShowFilenameView::GetDocument() const
   { return reinterpret_cast<CCTest121ClientShowFilenameDoc*>(m_pDocument); }
#endif

