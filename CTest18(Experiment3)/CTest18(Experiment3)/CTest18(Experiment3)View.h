
// CTest18(Experiment3)View.h : CCTest18Experiment3View 类的接口
//

#pragma once

class CCTest18Experiment3Set;

class CCTest18Experiment3View : public CRecordView
{
protected: // 仅从序列化创建
	CCTest18Experiment3View();
	DECLARE_DYNCREATE(CCTest18Experiment3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST18EXPERIMENT3_FORM };
#endif
	CCTest18Experiment3Set* m_pSet;

// 特性
public:
	CCTest18Experiment3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CCTest18Experiment3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long num;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // CTest18(Experiment3)View.cpp 中的调试版本
inline CCTest18Experiment3Doc* CCTest18Experiment3View::GetDocument() const
   { return reinterpret_cast<CCTest18Experiment3Doc*>(m_pDocument); }
#endif

