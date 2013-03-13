#if !defined(AFX_DIGITALCLOCK_H__7D3EA251_5DE0_478E_87DE_82F402131695__INCLUDED_)
#define AFX_DIGITALCLOCK_H__7D3EA251_5DE0_478E_87DE_82F402131695__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DigitalClock.h : header file
//



#define	 ALIGN_LEFT   0 
#define	 ALIGN_RIGHT  2
#define	 ALIGN_CENTER 1

/////////////////////////////////////////////////////////////////////////////
// CDigitalClock window

class CDigitalClock : public CStatic
{
// Construction
public:
	CDigitalClock();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDigitalClock)
	//}}AFX_VIRTUAL

// Implementation
public:
	void DrawSingleNumber(int nNum,int nLeft);
	void DrawHour();
	void DrawTimer();
	void setClock(int nHour,int nMinute,int nSecond);
	void DrawSection1(int nLeft);
	virtual ~CDigitalClock();

	// Generated message map functions
protected:
	//{{AFX_MSG(CDigitalClock)
	afx_msg void OnPaint();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()


private:
	
	
	COLORREF m_crText;
	COLORREF m_crBk;
	CDC  m_memDC;
	int  m_nAlign;
	int  m_nWidth;
	int	 m_nHour;
	int	 m_nMinute;
	int	 m_nSecond;
	int  m_nSpace;
	int  m_nXmargin;
	int  m_nYMargin;
	CRect m_rect;

};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIGITALCLOCK_H__7D3EA251_5DE0_478E_87DE_82F402131695__INCLUDED_)
