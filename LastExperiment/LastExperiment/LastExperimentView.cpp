
// LastExperimentView.cpp : CLastExperimentView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "LastExperiment.h"
#endif

#include "LastExperimentSet.h"
#include "LastExperimentDoc.h"
#include "LastExperimentView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"bigDialog.h"
#include"addDialog.h"
#include"resetDialog.h"
#include"sortDialog.h"
#include"findDialog.h"


// CLastExperimentView

IMPLEMENT_DYNCREATE(CLastExperimentView, CRecordView)

BEGIN_MESSAGE_MAP(CLastExperimentView, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &CLastExperimentView::OnBnClickedResetButton)
	ON_COMMAND(ID_RECORD_FIRST, &CLastExperimentView::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CLastExperimentView::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CLastExperimentView::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CLastExperimentView::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON5, &CLastExperimentView::ClickBig)
	ON_BN_CLICKED(IDC_BUTTON1, &CLastExperimentView::OnBnclickedAddButton)
	ON_BN_CLICKED(IDC_BUTTON2, &CLastExperimentView::OnBnClickedRemoveButton)
	ON_BN_CLICKED(IDC_BUTTON7, &CLastExperimentView::OnBnClickedSortButton)
	ON_BN_CLICKED(IDC_BUTTON6, &CLastExperimentView::OnBnClickedFindButton)
	ON_BN_CLICKED(IDC_BUTTON4, &CLastExperimentView::OnBnClickedButton4)
END_MESSAGE_MAP()

// CLastExperimentView ����/����

CLastExperimentView::CLastExperimentView()
	: CRecordView(IDD_LASTEXPERIMENT_FORM)
	, name(_T(""))
	, nameno(_T(""))
	, major(_T(""))
	, sex(_T(""))
	, birth(_T(""))
	, phone(_T(""))
	, home(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	absolutePath=_T("C:\\Users\\�ܸ�\\Pictures\\Camera Roll\\");
	filename = _T("");
	flag = 1;
}

CLastExperimentView::~CLastExperimentView()
{
}

void CLastExperimentView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
}

BOOL CLastExperimentView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CLastExperimentView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_LastExperimentSet;
	CRecordView::OnInitialUpdate();
	OnRecordFirst();
}


// CLastExperimentView ���

#ifdef _DEBUG
void CLastExperimentView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CLastExperimentView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CLastExperimentDoc* CLastExperimentView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLastExperimentDoc)));
	return (CLastExperimentDoc*)m_pDocument;
}
#endif //_DEBUG


// CLastExperimentView ���ݿ�֧��
CRecordset* CLastExperimentView::OnGetRecordset()
{
	return m_pSet;
}



// CLastExperimentView ��Ϣ�������
void CLastExperimentView::road()
{
	CString s;
	m_pSet->GetFieldValue(short(8), s);
	//m_pSet->GetFieldValue(short(8), r);  ÿһ����¼�е�����һ���ֶλ�ȡ�Ĵ������ܶ���һ��(���Ը���GetDlgText��ID,r��)
	filename = s;
	Invalidate();
}

void CLastExperimentView::OnBnClickedResetButton()   //�޸ļ�¼
{
	resetDialog resetlog;
	boolean flag1;
	flag1 = false;
	GetDlgItemText(IDC_EDIT1, resetlog.name2);
	GetDlgItemText(IDC_EDIT2, resetlog.nameno2);
	GetDlgItemText(IDC_EDIT3, resetlog.major2);
	GetDlgItemText(IDC_EDIT5, resetlog.sex2);
	GetDlgItemText(IDC_EDIT4, resetlog.birth2);
	GetDlgItemText(IDC_EDIT6, resetlog.phone2);
	GetDlgItemText(IDC_EDIT7, resetlog.home2);
	//GetDlgItemText(IDC_EDIT8, resetlog.filename2); 
	/*m_pSet->GetFieldValue(short(1), resetlog.name2);
	m_pSet->GetFieldValue(short(2), resetlog.nameno2);
	m_pSet->GetFieldValue(short(3), resetlog.major2);
	m_pSet->GetFieldValue(short(4), resetlog.sex2);
	m_pSet->GetFieldValue(short(5), resetlog.birth2);
	m_pSet->GetFieldValue(short(6), resetlog.phone2);
	m_pSet->GetFieldValue(short(7), resetlog.home2);
	m_pSet->GetFieldValue(short(8), resetlog.filename2);*/  //ǰ���ȡ����8���ֶε������ˣ������øú����ظ���ȡ
	resetlog.filename2 = filename;
	int r = resetlog.DoModal();
	if (r == IDOK)
	{
		flag1 = resetlog.flag1;
		if (flag1 == false)
		{
			AfxMessageBox(_T("�޸ļ�¼ʧ�ܣ��������������"));
		}
		else {
			m_pSet->Edit();
			m_pSet->column1 = resetlog.name2;
			m_pSet->column2 = resetlog.nameno2;
			m_pSet->column3 = resetlog.major2;
			m_pSet->column4 = resetlog.sex2;
			m_pSet->column5 = resetlog.birth2;
			m_pSet->column6 = resetlog.phone2;
			m_pSet->column7 = resetlog.home2;
			m_pSet->column8 = resetlog.filename2;
			//filename = resetlog.filename2;
			m_pSet->Update();
			m_pSet->Requery();
			OnRecordFirst();
			AfxMessageBox(_T("�޸ļ�¼�ɹ�"));
		}
	}
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CLastExperimentView::OnRecordFirst()
{
	m_pSet->MoveFirst();
	UpdateData(false);
	road();
	// TODO: �ڴ���������������
}


void CLastExperimentView::OnRecordPrev()
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


void CLastExperimentView::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
	{
		m_pSet->MoveLast();
	}
	UpdateData(false);
	road();
}


void CLastExperimentView::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	road();
}


void CLastExperimentView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()

	/*if (flag == 1)   //���һ���ˣ�ֱ���ڳ�ʼ����������һ��OnRecordFirst�������ɳ�ʼ��
	{
		CString k;
		k = _T("wsj.jpg");
		filename = k;
		CImage img;
		img.Load(absolutePath + k);
		CDC *pdc = GetDlgItem(IDC_STATIC)->GetDC();
		CRect r;
		GetDlgItem(IDC_STATIC)->GetClientRect(&r);
		pdc->SetStretchBltMode(HALFTONE);   //��֤ͼ��ʧ��
		img.Draw(pdc->m_hDC, 0, 0, r.Width(), r.Height());   //�����ҾͲ���foo�������ݿ�߱���drawͼ���ˣ���Ϊ�����Ҷ���
		ReleaseDC(pdc);
		//filename = _T("");
		flag = 0;

	}*/
	if (filename != _T(""))
	{
		CImage img;
		img.Load(absolutePath + filename);
		CDC *pdc = GetDlgItem(IDC_STATIC)->GetDC();
		CRect r;
		GetDlgItem(IDC_STATIC)->GetClientRect(&r);
		pdc->SetStretchBltMode(HALFTONE);   //��֤ͼ��ʧ��
		img.Draw(pdc->m_hDC, 0, 0, r.Width(), r.Height());   //�����ҾͲ���foo�������ݿ�߱���drawͼ���ˣ���Ϊ�����Ҷ���
		ReleaseDC(pdc);
		//filename = _T("");
	}
}


void CLastExperimentView::ClickBig()   //����Ŵ�ť
{
	bigDialog biglog;
	biglog.str = absolutePath + filename;
	biglog.DoModal();
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CLastExperimentView::OnBnclickedAddButton()  //���Ӽ�¼
{
	addDialog addlog;
	int r = addlog.DoModal();
	if (r == IDOK)
	{
		if (addlog.name1 == _T(""))
		{
			AfxMessageBox(_T("������¼ʧ�ܣ��������������"));
		}
		else {
			m_pSet->AddNew();   //���������¼�ɹ���ִ������
			m_pSet->column1 = addlog.name1;
			m_pSet->column2 = addlog.nameno1;
			m_pSet->column3 = addlog.major1;
			m_pSet->column4 = addlog.sex1;
			m_pSet->column5 = addlog.birth1;
			m_pSet->column6 = addlog.phone1;
			m_pSet->column7 = addlog.home1;
			m_pSet->column8 = addlog.filename1;
			m_pSet->Update();
			m_pSet->Requery();
			OnRecordLast();
			AfxMessageBox(_T("������¼�ɹ�"));
		}
	}
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CLastExperimentView::OnBnClickedRemoveButton()//ɾ����¼
{
	m_pSet->Delete();
	OnRecordPrev();
	if (m_pSet->IsBOF())
	{
		OnRecordFirst();
	}
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}





void CLastExperimentView::OnBnClickedSortButton()   //����
{
	sortDialog sortlog;
	int r = sortlog.DoModal();
	if (r == IDOK)
	{
		if (sortlog.condition != _T(""))
		{
			m_pSet->m_strSort = sortlog.condition;   //������������m_strSort
			m_pSet->Requery();
			OnRecordFirst();
		}
	}
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CLastExperimentView::OnBnClickedFindButton()  // ��ѯ
{
	findDialog findlog;
	int r = findlog.DoModal();
	if (r == IDOK)
	{
		if (findlog.condition != _T(""))
		{
			m_pSet->m_strFilter = findlog.condition;
			m_pSet->Requery();
			OnRecordFirst();
		}
	}
	
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CLastExperimentView::OnBnClickedButton4()
{
	m_pSet->m_strFilter = _T("");
	m_pSet->Requery();
	OnRecordFirst();
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
