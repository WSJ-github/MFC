
// CTest18(Experiment3)View.h : CCTest18Experiment3View ��Ľӿ�
//

#pragma once

class CCTest18Experiment3Set;

class CCTest18Experiment3View : public CRecordView
{
protected: // �������л�����
	CCTest18Experiment3View();
	DECLARE_DYNCREATE(CCTest18Experiment3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST18EXPERIMENT3_FORM };
#endif
	CCTest18Experiment3Set* m_pSet;

// ����
public:
	CCTest18Experiment3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CCTest18Experiment3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long num;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // CTest18(Experiment3)View.cpp �еĵ��԰汾
inline CCTest18Experiment3Doc* CCTest18Experiment3View::GetDocument() const
   { return reinterpret_cast<CCTest18Experiment3Doc*>(m_pDocument); }
#endif

