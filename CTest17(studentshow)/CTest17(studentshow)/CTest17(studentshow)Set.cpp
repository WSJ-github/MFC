
// CTest17(studentshow)Set.cpp : CCTest17studentshowSet ���ʵ��
//

#include "stdafx.h"
#include "CTest17(studentshow).h"
#include "CTest17(studentshow)Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCTest17studentshowSet ʵ��

// ���������� 2020��5��13��, 0:12

IMPLEMENT_DYNAMIC(CCTest17studentshowSet, CRecordset)

CCTest17studentshowSet::CCTest17studentshowSet(CDatabase* pdb)
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
CString CCTest17studentshowSet::GetDefaultConnect()
{
	return _T("DSN=student;DBQ=D:\\\x5b66\x751f\x8868.xls;DefaultDir=D:;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CCTest17studentshowSet::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CCTest17studentshowSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
//C:\\\\Users\\\\�ܸ�\\\\Pictures\\\\Camera Roll\\\\wsj#
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[ѧ��]"), m_201812300010);
	RFX_Text(pFX, _T("[ѧԺ]"), column2);
	RFX_Double(pFX, _T("[����]"), m_F4);
	RFX_Text(pFX, _T("[ͼƬ·��]"), m_wsjjpg);

}
/////////////////////////////////////////////////////////////////////////////
// CCTest17studentshowSet ���

#ifdef _DEBUG
void CCTest17studentshowSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCTest17studentshowSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

