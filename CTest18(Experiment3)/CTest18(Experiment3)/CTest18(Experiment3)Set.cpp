
// CTest18(Experiment3)Set.cpp : CCTest18Experiment3Set ���ʵ��
//

#include "stdafx.h"
#include "CTest18(Experiment3).h"
#include "CTest18(Experiment3)Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest18Experiment3Set ʵ��

// ���������� 2020��5��19��, 23:02

IMPLEMENT_DYNAMIC(CCTest18Experiment3Set, CRecordset)

CCTest18Experiment3Set::CCTest18Experiment3Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_num = 0;
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CCTest18Experiment3Set::GetDefaultConnect()
{
	return _T("DSN=num_access;DBQ=D:\\mbd_access.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CCTest18Experiment3Set::GetDefaultSQL()
{
	return _T("[num2_access]");
}

void CCTest18Experiment3Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[num]"), m_num);

}
/////////////////////////////////////////////////////////////////////////////
// CCTest18Experiment3Set ���

#ifdef _DEBUG
void CCTest18Experiment3Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCTest18Experiment3Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

