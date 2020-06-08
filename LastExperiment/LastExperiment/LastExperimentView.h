
// LastExperimentView.h : CLastExperimentView 类的接口
//

#pragma once

class CLastExperimentSet;

class CLastExperimentView : public CRecordView
{
protected: // 仅从序列化创建
	CLastExperimentView();
	DECLARE_DYNCREATE(CLastExperimentView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_LASTEXPERIMENT_FORM };
#endif
	CLastExperimentSet* m_pSet;

// 特性
public:
	CLastExperimentDoc* GetDocument() const;

// 操作
public:
	CString absolutePath;
	CString filename;
	int flag;

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CLastExperimentView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedResetButton();
	CString name;
	CString nameno;
	CString major;
	CString sex;
	CString birth;
	CString phone;
	CString home;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void road();
	afx_msg void OnPaint();
	afx_msg void ClickBig();
	afx_msg void OnBnclickedAddButton();
	afx_msg void OnBnClickedRemoveButton();
	afx_msg void OnBnClickedSortButton();
	afx_msg void OnBnClickedFindButton();
	afx_msg void OnBnClickedButton4();
};

#ifndef _DEBUG  // LastExperimentView.cpp 中的调试版本
inline CLastExperimentDoc* CLastExperimentView::GetDocument() const
   { return reinterpret_cast<CLastExperimentDoc*>(m_pDocument); }
#endif

