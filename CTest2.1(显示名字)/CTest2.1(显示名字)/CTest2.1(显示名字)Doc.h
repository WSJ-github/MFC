
// CTest2.1(显示名字)Doc.h : CCTest21显示名字Doc 类的接口
//


#pragma once


class CCTest21显示名字Doc : public CDocument
{
protected: // 仅从序列化创建
	CCTest21显示名字Doc();
	DECLARE_DYNCREATE(CCTest21显示名字Doc)

// 特性
public:
	CString s;
	int a;
// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CCTest21显示名字Doc();
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
