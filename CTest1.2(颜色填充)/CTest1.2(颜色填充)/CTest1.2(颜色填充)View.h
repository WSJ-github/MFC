
// CTest1.2(��ɫ���)View.h : CCTest12��ɫ���View ��Ľӿ�
//

#pragma once


class CCTest12��ɫ���View : public CView
{
protected: // �������л�����
	CCTest12��ɫ���View();
	DECLARE_DYNCREATE(CCTest12��ɫ���View)

// ����
public:
	CCTest12��ɫ���Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CCTest12��ɫ���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CTest1.2(��ɫ���)View.cpp �еĵ��԰汾
inline CCTest12��ɫ���Doc* CCTest12��ɫ���View::GetDocument() const
   { return reinterpret_cast<CCTest12��ɫ���Doc*>(m_pDocument); }
#endif

