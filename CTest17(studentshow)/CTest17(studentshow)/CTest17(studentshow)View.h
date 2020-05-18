
// CTest17(studentshow)View.h : CCTest17studentshowView 类的接口
//

#pragma once

class CCTest17studentshowSet;

class CCTest17studentshowView : public CRecordView
{
protected: // 仅从序列化创建
	CCTest17studentshowView();
	DECLARE_DYNCREATE(CCTest17studentshowView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST17STUDENTSHOW_FORM };
#endif
	CCTest17studentshowSet* m_pSet;

// 特性
public:
	CCTest17studentshowDoc* GetDocument() const;

// 操作
public:
	CString str;

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CCTest17studentshowView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
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

#ifndef _DEBUG  // CTest17(studentshow)View.cpp 中的调试版本
inline CCTest17studentshowDoc* CCTest17studentshowView::GetDocument() const
   { return reinterpret_cast<CCTest17studentshowDoc*>(m_pDocument); }
#endif

