
// CTest2.1(��ʾ����)View.h : CCTest21��ʾ����View ��Ľӿ�
//

#pragma once


class CCTest21��ʾ����View : public CView
{
protected: // �������л�����
	CCTest21��ʾ����View();
	DECLARE_DYNCREATE(CCTest21��ʾ����View)

// ����
public:
	CCTest21��ʾ����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest21��ʾ����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest2.1(��ʾ����)View.cpp �еĵ��԰汾
inline CCTest21��ʾ����Doc* CCTest21��ʾ����View::GetDocument() const
   { return reinterpret_cast<CCTest21��ʾ����Doc*>(m_pDocument); }
#endif

