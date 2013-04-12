// loginWebDlg.h : header file
//

#if !defined(AFX_LOGINWEBDLG_H__ECB25B62_68F6_47BF_BC25_4310C73FFBEB__INCLUDED_)
#define AFX_LOGINWEBDLG_H__ECB25B62_68F6_47BF_BC25_4310C73FFBEB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CLoginWebDlg dialog

class CLoginWebDlg : public CDialog
{
// Construction
public:
	CLoginWebDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CLoginWebDlg)
	enum { IDD = IDD_LOGINWEB_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLoginWebDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CLoginWebDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGINWEBDLG_H__ECB25B62_68F6_47BF_BC25_4310C73FFBEB__INCLUDED_)
