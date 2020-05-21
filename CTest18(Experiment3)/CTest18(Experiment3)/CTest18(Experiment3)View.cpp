
// CTest18(Experiment3)View.cpp : CCTest18Experiment3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CTest18(Experiment3).h"
#endif

#include "CTest18(Experiment3)Set.h"
#include "CTest18(Experiment3)Doc.h"
#include "CTest18(Experiment3)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"addDialog.h"
#include"alterDialog.h"


// CCTest18Experiment3View

IMPLEMENT_DYNCREATE(CCTest18Experiment3View, CRecordView)

BEGIN_MESSAGE_MAP(CCTest18Experiment3View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &CCTest18Experiment3View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &CCTest18Experiment3View::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CCTest18Experiment3View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CCTest18Experiment3View ����/����

CCTest18Experiment3View::CCTest18Experiment3View()
	: CRecordView(IDD_CTEST18EXPERIMENT3_FORM)
	, num(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CCTest18Experiment3View::~CCTest18Experiment3View()
{
}

void CCTest18Experiment3View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_num);
}

BOOL CCTest18Experiment3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CCTest18Experiment3View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_CTest18Experiment3Set;
	CRecordView::OnInitialUpdate();

}


// CCTest18Experiment3View ���

#ifdef _DEBUG
void CCTest18Experiment3View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CCTest18Experiment3View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CCTest18Experiment3Doc* CCTest18Experiment3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCTest18Experiment3Doc)));
	return (CCTest18Experiment3Doc*)m_pDocument;
}
#endif //_DEBUG


// CCTest18Experiment3View ���ݿ�֧��
CRecordset* CCTest18Experiment3View::OnGetRecordset()
{
	return m_pSet;
}



// CCTest18Experiment3View ��Ϣ�������


void CCTest18Experiment3View::OnBnClickedButton3()
{
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	Invalidate();
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CCTest18Experiment3View::OnBnClickedButton2()  //�޸ļ�¼
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	alterDialog alterlog;
	CString nownum;
	m_pSet->GetFieldValue(short(1), nownum);
	alterlog.alternum = _ttol(nownum);    //��CString���Ӧ������ת��Ϊlong���͵�����
	int r = alterlog.DoModal();
	if (r == IDOK)
	{
		m_pSet->Edit();
		m_pSet->m_num = alterlog.alternum;
		m_pSet->Update();
		UpdateData(false);
		Invalidate();
	}
}


void CCTest18Experiment3View::OnBnClickedButton1()   //���Ӽ�¼
{
	addDialog addlog;
	int r = addlog.DoModal();
	if (r==IDOK)
	{
		long ad = addlog.addnum;
		m_pSet->AddNew();
		m_pSet->m_num = ad;
		m_pSet->Update();
		m_pSet->Requery();  //���²�ѯ��������ʹ�ü�ʱˢ�¼�¼��
		//m_pSet->MoveFirst();
		//m_pSet->MoveLast();
		UpdateData(false);
	}
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
