
// CTest17(studentshow)View.h : CCTest17studentshowView ��Ľӿ�
//

#pragma once

class CCTest17studentshowSet;

class CCTest17studentshowView : public CRecordView
{
protected: // �������л�����
	CCTest17studentshowView();
	DECLARE_DYNCREATE(CCTest17studentshowView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST17STUDENTSHOW_FORM };
#endif
	CCTest17studentshowSet* m_pSet;

// ����
public:
	CCTest17studentshowDoc* GetDocument() const;

// ����
public:
	CString str;

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CCTest17studentshowView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString r1;
	CString r2;
	CString r3;
	double r4;
	CString r5;
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
};

#ifndef _DEBUG  // CTest17(studentshow)View.cpp �еĵ��԰汾
inline CCTest17studentshowDoc* CCTest17studentshowView::GetDocument() const
   { return reinterpret_cast<CCTest17studentshowDoc*>(m_pDocument); }
#endif

