
// CTest19(Experiment2.1)Doc.h : CCTest19Experiment21Doc 类的接口
//


#pragma once
#include "CTest19(Experiment2.1)Set.h"


class CCTest19Experiment21Doc : public CDocument
{
protected: // 仅从序列化创建
	CCTest19Experiment21Doc();
	DECLARE_DYNCREATE(CCTest19Experiment21Doc)

// 特性
public:
	CCTest19Experiment21Set m_CTest19Experiment21Set;

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CCTest19Experiment21Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
