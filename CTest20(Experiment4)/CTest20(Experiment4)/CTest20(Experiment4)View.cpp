
// CTest20(Experiment4)View.cpp : CCTest20Experiment4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest20(Experiment4).h"
#endif

#include "CTest20(Experiment4)Set.h"
#include "CTest20(Experiment4)Doc.h"
#include "CTest20(Experiment4)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"bigDialog.h"
#include"selectDialog.h"
#include"sortDialog.h"
#include"traverseDialog.h"


// CCTest20Experiment4View

IMPLEMENT_DYNCREATE(CCTest20Experiment4View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest20Experiment4View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CCTest20Experiment4View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CCTest20Experiment4View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CCTest20Experiment4View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CCTest20Experiment4View::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &CCTest20Experiment4View::OnBnClickedButton1)
//	ON_WM_SHOWWINDOW()
ON_COMMAND(ID_SELECT, &CCTest20Experiment4View::OnSelect)
ON_COMMAND(ID_SORT, &CCTest20Experiment4View::OnSort)
ON_COMMAND(ID_TRAVERSE, &CCTest20Experiment4View::OnTraverse)
ON_COMMAND(ID_RESET, &CCTest20Experiment4View::OnReset)
END_MESSAGE_MAP()

// CCTest20Experiment4View ����/����

CCTest20Experiment4View::CCTest20Experiment4View()
	: CRecordView(IDD_CTEST20EXPERIMENT4_FORM)
	, name(_T(""))
	, age(0)
	, post(_T(""))
	, workno(_T(""))
	, salary(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	absolutePath = _T("C:\\Users\\�ܸ�\\Pictures\\ForWorkDmb\\");   //����·��
	filename = _T("");
	flag = 1;
}

CCTest20Experiment4View::~CCTest20Experiment4View()
{
}
long	m_ID;
CStringW	column1;
long	column2;
CStringW	column3;
CStringW	column4;
CStringW	column5;
long	m_1;
void CCTest20Experiment4View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_1);
}

BOOL CCTest20Experiment4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ
	return CRecordView::PreCreateWindow(cs);
}

void CCTest20Experiment4View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest20Experiment4Set;
	CRecordView::OnInitialUpdate();

}


// CCTest20Experiment4View ���

#ifdef _DEBUG
void CCTest20Experiment4View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest20Experiment4View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest20Experiment4Doc* CCTest20Experiment4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest20Experiment4Doc)));
	return (CCTest20Experiment4Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest20Experiment4View ���ݿ�֧��
CRecordset* CCTest20Experiment4View::OnGetRecordset()
{
	return m_pSet;
}

void CCTest20Experiment4View::road()
{
	CString s;
	m_pSet->GetFieldValue(short(4), s);
	filename = s;
	Invalidate();
}

// CCTest20Experiment4View ��Ϣ�������


void CCTest20Experiment4View::OnRecordFirst()
{
	m_pSet->MoveFirst();
	UpdateData(false);
	road();
	// TODO: �ڴ���������������
}


void CCTest20Experiment4View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	road();
}


void CCTest20Experiment4View::OnRecordNext()
{
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
	{
		m_pSet->MoveLast();
	}
	UpdateData(false);
	road();
	// TODO: �ڴ���������������
}


void CCTest20Experiment4View::OnRecordLast()
{
	m_pSet->MoveLast();
	UpdateData(false);
	road();
	// TODO: �ڴ���������������
}


void CCTest20Experiment4View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	if (flag == 1)
	{
		CString k;
		k = _T("����.jpg");
		filename = k;
		CImage img;
		img.Load(absolutePath+k);
		CDC *pdc = GetDlgItem(IDC_STATIC)->GetDC();
		CRect r;
		GetDlgItem(IDC_STATIC)->GetClientRect(&r);
		pdc->SetStretchBltMode(HALFTONE);   //��֤ͼ��ʧ��
		img.Draw(pdc->m_hDC, 0, 0, r.Width(), r.Height());   //�����ҾͲ���foo�������ݿ�߱���drawͼ���ˣ���Ϊ�����Ҷ���
		ReleaseDC(pdc);
		//filename = _T("");
		flag = 0;
		
	}
	if (filename != _T(""))
	{
		CImage img;
		img.Load(absolutePath + filename);
		CDC *pdc=GetDlgItem(IDC_STATIC)->GetDC();
		CRect r;
		GetDlgItem(IDC_STATIC)->GetClientRect(&r);
		pdc->SetStretchBltMode(HALFTONE);   //��֤ͼ��ʧ��
		img.Draw(pdc->m_hDC,0,0,r.Width(),r.Height());   //�����ҾͲ���foo�������ݿ�߱���drawͼ���ˣ���Ϊ�����Ҷ���
		ReleaseDC(pdc);
		//filename = _T("");
	}
}


void CCTest20Experiment4View::OnBnClickedButton1()   //����Ŵ�ͼƬ��ť
{
	bigDialog dlg;
	dlg.str = absolutePath+filename;
	dlg.DoModal();
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}





void CCTest20Experiment4View::OnSelect() //�����ѯʱ
{
	CString s;
	selectDialog selectlog;
	int r = selectlog.DoModal();
	if (r == IDOK)
	{
		s = selectlog.condition;  //��ò�ѯ����
		m_pSet->m_strFilter = s;  //��where��������ֵ����¼����Աm_strFilter
		m_pSet->Requery();   //���²�ѯ��¼��
		//OnRecordFirst();   //�����²�ѯ��ļ�¼���ĵ�һ����¼��ʼ��
	}
	// TODO: �ڴ���������������
}


void CCTest20Experiment4View::OnSort()   //�����¼��(��order by��������ֵ��ֵ��m_strSort)
{  //���� ���� ASC �� ���� DESC
	CString s;
	sortDialog sortlog;
	int r = sortlog.DoModal();
	if (r == IDOK)
	{
		s = sortlog.condition;  //��ò�ѯ����
		m_pSet->m_strSort = s;
		m_pSet->Requery();   //���²�ѯ��¼��
		OnRecordFirst();   //�����²�ѯ��ļ�¼���ĵ�һ����¼��ʼ��
	}
	// TODO: �ڴ���������������
}


void CCTest20Experiment4View::OnTraverse()
{
	int num = m_pSet->GetODBCFieldCount();   //��ȡ�ֶ�(������)��Ŀ(�ֶ���Ŀ�����access������7��������ʵ�����Ǵ�0���ֶο�ʼ�ģ�����ֻ��0~6���ֶ�)
	CString str;
	str = _T("");
	m_pSet->MoveFirst();
	CString s;
	while (!m_pSet->IsEOF())//�����û�б�������¼����ĩ��
	{
		for (int j = 1; j < num; j++)  //ID�ֶβ�Ҫ����o��ʼ��ţ�һ��7���ֶΣ�����ʱ��0���ֶ�ID�ֶβ�Ҫ��
		{
			m_pSet->GetFieldValue((short)j, s);  //��ˢ��strԭ��������
			str = str + s + _T("    ");
		}
		str = str + _T("\r\n");  //ʶ����\n�����Ի�������
		m_pSet->MoveNext();
	}
	traverseDialog traverselog;
	traverselog.traverse = str;
	traverselog.DoModal();
	// TODO: �ڴ���������������
}


void CCTest20Experiment4View::OnReset()   //�ָ���ʼ��¼��
{
	m_pSet->m_strFilter = _T("");  //��where������գ��������������
	m_pSet->Requery();
	// TODO: �ڴ���������������
}
