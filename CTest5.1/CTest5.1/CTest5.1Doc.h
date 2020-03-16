
// CTest5.1Doc.h : CCTest51Doc 类的接口
//


#pragma once


class CCTest51Doc : public CDocument
{
protected: // 仅从序列化创建
	CCTest51Doc();
	DECLARE_DYNCREATE(CCTest51Doc)

// 特性
public:
	CPoint c1, c2;   //这两个点分别记录鼠标的左上角和右上角的位置信息
	CPoint c;       //记录鼠标移动过程中的点信息
	CString s;  //记录下鼠标的坐标位置
	CRect rect;
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
	virtual ~CCTest51Doc();
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
