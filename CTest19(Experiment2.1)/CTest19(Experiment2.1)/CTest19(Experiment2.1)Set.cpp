
// CTest19(Experiment2.1)Set.cpp : CCTest19Experiment21Set ���ʵ��
//

#include "stdafx.h"
#include "CTest19(Experiment2.1).h"
#include "CTest19(Experiment2.1)Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest19Experiment21Set ʵ��

// ���������� 2020��5��21��, 10:45

IMPLEMENT_DYNAMIC(CCTest19Experiment21Set, CRecordset)

CCTest19Experiment21Set::CCTest19Experiment21Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	column1 = L"";
	m_201812300010 = L"";
	column2 = L"";
	m_F4 = 0.0;
	m_wsjjpg = L"";
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CCTest19Experiment21Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f\x8868;DBQ=D:\\\x5b66\x751f\x4fe1\x606f\x8868.xls;DefaultDir=D:;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CCTest19Experiment21Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CCTest19Experiment21Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Text(pFX, _T("[������]"), column1);
	RFX_Text(pFX, _T("[201812300010]"), m_201812300010);
	RFX_Text(pFX, _T("[����ѧԺ]"), column2);
	RFX_Double(pFX, _T("[F4]"), m_F4);
	RFX_Text(pFX, _T("[wsj#jpg]"), m_wsjjpg);

}
/////////////////////////////////////////////////////////////////////////////
// CCTest19Experiment21Set ���

#ifdef _DEBUG
void CCTest19Experiment21Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCTest19Experiment21Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

