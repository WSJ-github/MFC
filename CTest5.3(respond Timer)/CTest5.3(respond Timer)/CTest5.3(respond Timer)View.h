
// CTest5.3(respond Timer)View.h : CCTest53respondTimerView ��Ľӿ�
//

#pragma once


class CCTest53respondTimerView : public CView
{
protected: // �������л�����
	CCTest53respondTimerView();
	DECLARE_DYNCREATE(CCTest53respondTimerView)

// ����
public:
	CCTest53respondTimerDoc* GetDocument() const;

// ����
public:
	CRect r;
	int set; //����
	int flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest53respondTimerView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // CTest5.3(respond Timer)View.cpp �еĵ��԰汾
inline CCTest53respondTimerDoc* CCTest53respondTimerView::GetDocument() const
   { return reinterpret_cast<CCTest53respondTimerDoc*>(m_pDocument); }
#endif

