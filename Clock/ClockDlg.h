// ClockDlg.h : header file
//

#if !defined(AFX_CLOCKDLG_H__0C86CB27_A099_4578_A15D_C1BD8BA6E092__INCLUDED_)
#define AFX_CLOCKDLG_H__0C86CB27_A099_4578_A15D_C1BD8BA6E092__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CClockDlg dialog

#include "DigitalClock.h"
class CClockDlg : public CDialog
{
// Construction
public:
	CDigitalClock m_clock;
	CClockDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CClockDlg)
	enum { IDD = IDD_CLOCK_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CClockDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CClockDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()


};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLOCKDLG_H__0C86CB27_A099_4578_A15D_C1BD8BA6E092__INCLUDED_)
