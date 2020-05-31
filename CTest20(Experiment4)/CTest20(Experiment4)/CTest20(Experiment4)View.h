
// CTest20(Experiment4)View.h : CCTest20Experiment4View 类的接口
//

#pragma once

class CCTest20Experiment4Set;

class CCTest20Experiment4View : public CRecordView
{
protected: // 仅从序列化创建
	CCTest20Experiment4View();
	DECLARE_DYNCREATE(CCTest20Experiment4View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST20EXPERIMENT4_FORM };
#endif
	CCTest20Experiment4Set* m_pSet;

// 特性
public:
	CCTest20Experiment4Doc* GetDocument() const;

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
	virtual ~CCTest20Experiment4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString name;
	long age;
	CString post;
	CString workno;
	long salary;
	CFont font; //调节字体大小
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void road();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnSelect();
	afx_msg void OnSort();
	afx_msg void OnTraverse();
	afx_msg void OnReset();
};

#ifndef _DEBUG  // CTest20(Experiment4)View.cpp 中的调试版本
inline CCTest20Experiment4Doc* CCTest20Experiment4View::GetDocument() const
   { return reinterpret_cast<CCTest20Experiment4Doc*>(m_pDocument); }
#endif

