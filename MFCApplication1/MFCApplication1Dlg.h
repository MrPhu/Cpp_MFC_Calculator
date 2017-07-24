
// MFCApplication1Dlg.h : header file
//

#pragma once
#include "afxwin.h"


// CMFCApplication1Dlg dialog
class CMFCApplication1Dlg : public CDialogEx
{
// Construction
public:
	CMFCApplication1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP();
protected:
	int sum1;
	int sum2;
public:
	void setValue(int a, int b) {
		sum1 = a;
		sum2 = b;
	}
	int getSum1(){
		return sum1;
	}
	int getSum2(){
		return sum2;
	}
	afx_msg void OnBnClickedBtn1();
	CStatic display1;
};
