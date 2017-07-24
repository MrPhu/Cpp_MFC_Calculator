#pragma once


// SumTotal dialog

class SumTotal : public CDialogEx
{
	DECLARE_DYNAMIC(SumTotal)

public:
	SumTotal(CWnd* pParent = NULL);   // standard constructor
	virtual ~SumTotal();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };
#endif
	void setValue(int a, int b) {
		sum1 = a;
		sum2 = b;
	}
	int getValueInt() {
		return sum1 + sum2;
	}
protected:
	int sum1;
	int sum2;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
