
// CTest8.2(showCenteralJPG)View.h : CCTest82showCenteralJPGView ��Ľӿ�
//

#pragma once


class CCTest82showCenteralJPGView : public CView
{
protected: // �������л�����
	CCTest82showCenteralJPGView();
	DECLARE_DYNCREATE(CCTest82showCenteralJPGView)

// ����
public:
	CCTest82showCenteralJPGDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest82showCenteralJPGView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // CTest8.2(showCenteralJPG)View.cpp �еĵ��԰汾
inline CCTest82showCenteralJPGDoc* CCTest82showCenteralJPGView::GetDocument() const
   { return reinterpret_cast<CCTest82showCenteralJPGDoc*>(m_pDocument); }
#endif

