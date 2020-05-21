
// CTest19(Experiment2.1)View.h : CCTest19Experiment21View 类的接口
//

#pragma once

class CCTest19Experiment21Set;

class CCTest19Experiment21View : public CRecordView
{
protected: // 仅从序列化创建
	CCTest19Experiment21View();
	DECLARE_DYNCREATE(CCTest19Experiment21View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_CTEST19EXPERIMENT21_FORM };
#endif
	CCTest19Experiment21Set* m_pSet;

// 特性
public:
	CCTest19Experiment21Doc* GetDocument() const;

// 操作
public:
	CString str; //绝对路径
	CString filename;   //最后的文件名
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
	virtual ~CCTest19Experiment21View();
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
	CString nameno;
	CString institute;
	double age;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void load();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // CTest19(Experiment2.1)View.cpp 中的调试版本
inline CCTest19Experiment21Doc* CCTest19Experiment21View::GetDocument() const
   { return reinterpret_cast<CCTest19Experiment21Doc*>(m_pDocument); }
#endif

