// DigitalClock.cpp : implementation file
//

#include "stdafx.h"

#include "DigitalClock.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDigitalClock

CDigitalClock::CDigitalClock()
{
	m_crBk  =::GetSysColor(COLOR_BTNFACE);
	m_crText=::GetSysColor(COLOR_BTNTEXT);
	
	m_nAlign=1;
	m_nWidth=0;
	m_nHour=0;
	m_nMinute=0;
	m_nSecond=0;
	m_nSpace=5;
	m_nXmargin=10;
	m_nYmargin=4;
}

CDigitalClock::~CDigitalClock()
{
}

BEGIN_MESSAGE_MAP(CDigitalClock, CStatic)
	//{{AFX_MSG_MAP(CDigitalClock)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDigitalClock message handlers

void CDigitalClock::DrawSection1(int nLeft)
{
	if(m_memDC.m_hDC != NULL)
	{
		CPoint point[4];
		point[0].x=nLeft+(int)(0.1*m_nWidth);
		point[0].y=m_nYmargin;

		point[1].x=nLeft+(int)(0.9*m_nWidth);
		point[1].y=m_nYmargin;

		point[2].x=nLeft+(int)(0.7*m_nWidth);
		point[2].y=(int)(0.2*m_nWidth)+m_nYmargin;

		point[3].x=nLeft+(int)(0.3*m_nWidth);
		point[3].y=(int)(0.2*m_nWidth)+m_nYmargin;


		CBrush br(m_crText);
		CRgn rgn;

		rgn.CreatePolygonRgn( point,4,ALTERNATE );
		m_memDC.FillRgn(&rgn,&br);

		br.DeleteObject();
		rgn.DeleteObject();

		m_memDC.MoveTo(point[0]);
		m_memDC.LineTo(point[1]);

		m_memDC.MoveTo(point[1]);
		m_memDC.LineTo(point[2]);
		
		m_memDC.MoveTo(point[2]);
		m_memDC.LineTo(point[3]);
		
		m_memDC.MoveTo(point[3]);
		m_memDC.LineTo(point[0]);
	}
}

void CDigitalClock::DrawSection2(int nLeft)
{
	if(m_memDC.m_hDC != NULL)
	{
		CPoint point[5];
		point[0].x=nLeft+m_nWidth;
		point[0].y=(int)(0.1*m_nWidth)+m_nYmargin;

		point[1].x=nLeft+m_nWidth;
		point[1].y=(int)(0.8*m_nWidth)+m_nYmargin;

		point[2].x=nLeft+(int)(0.9*m_nWidth);
		point[2].y=(int)(0.9*m_nWidth)+m_nYmargin;

		point[3].x=nLeft+(int)(0.8*m_nWidth);
		point[3].y=(int)(0.8*m_nWidth)+m_nYmargin;
		
		point[4].x=nLeft+(int)(0.8*m_nWidth);
		point[4].y=(int)(0.3*m_nWidth)+m_nYmargin;
		
		
		
		CBrush br(m_crText);
		CRgn rgn;
		
		rgn.CreatePolygonRgn( point,5,ALTERNATE );
		m_memDC.FillRgn(&rgn,&br);
		
		br.DeleteObject();
		rgn.DeleteObject();
	}
}


void CDigitalClock::DrawSection3(int nLeft)
{
	if (m_memDC.m_hDC!=NULL)
	{
		CPoint point[5];
		point[0].x=nLeft+m_nWidth;
		point[0].y=(int)(1.1*m_nWidth)+m_nYmargin;
		
		point[1].x=nLeft+m_nWidth;
		point[1].y=(int)(1.8*m_nWidth)+m_nYmargin;
		
		point[2].x=nLeft+(int)(0.8*m_nWidth);
		point[2].y=(int)(1.6*m_nWidth)+m_nYmargin;
		
		point[3].x=nLeft+(int)(0.8*m_nWidth);
		point[3].y=(int)(1.1*m_nWidth)+m_nYmargin;
		
		point[4].x=nLeft+(int)(0.9*m_nWidth);
		point[4].y=m_nWidth+m_nYmargin;
		
		CBrush br(m_crText);
		CRgn rgn;
		rgn.CreatePolygonRgn(point,5,ALTERNATE);
		m_memDC.FillRgn(&rgn,&br);
		
		br.DeleteObject();
		rgn.DeleteObject();
	}
	
}

void CDigitalClock::DrawSection4(int nLeft)
{
	if (m_memDC.m_hDC!=NULL)
	{
		CPoint point[4];
		point[0].x=nLeft+(int)(0.1*m_nWidth);
		point[0].y=(int)(1.9*m_nWidth)+m_nYmargin;
		
		point[1].x=nLeft+(int)(0.9*m_nWidth);
		point[1].y=(int)(1.9*m_nWidth)+m_nYmargin;
		
		point[2].x=nLeft+(int)(0.7*m_nWidth);
		point[2].y=(int)(1.7*m_nWidth)+m_nYmargin;
		
		point[3].x=nLeft+(int)(0.3*m_nWidth);
		point[3].y=(int)(1.7*m_nWidth)+m_nYmargin;		
		
		CBrush br(m_crText);
		CRgn rgn;
		rgn.CreatePolygonRgn(point,4,ALTERNATE);
		m_memDC.FillRgn(&rgn,&br);
	}
}

void CDigitalClock::DrawSection5(int nLeft)
{

	if (m_memDC.m_hDC!=NULL)
	{
		CPoint point[5];
		point[0].x=nLeft;
		point[0].y=(int)(1.1*m_nWidth)+m_nYmargin;
		
		point[1].x=nLeft;
		point[1].y=(int)(1.8*m_nWidth)+m_nYmargin;
		
		point[2].x=nLeft+(int)(0.2*m_nWidth);
		point[2].y=(int)(1.6*m_nWidth)+m_nYmargin;
		
		point[3].x=nLeft+(int)(0.2*m_nWidth);
		point[3].y=(int)(1.1*m_nWidth)+m_nYmargin;
		
		point[4].x=nLeft+(int)(0.1*m_nWidth);
		point[4].y=m_nWidth+m_nYmargin;
		
		CBrush br(m_crText);
		CRgn rgn;
		rgn.CreatePolygonRgn(point,5,ALTERNATE);
		m_memDC.FillRgn(&rgn,&br);
		
		br.DeleteObject();
		rgn.DeleteObject();
	}
	
}

void CDigitalClock::DrawSection6(int nLeft)
{
	CPoint point[5];
	point[0].x=nLeft;
	point[0].y=(int)(0.1*m_nWidth)+m_nYmargin;
	
	point[1].x=nLeft;
	point[1].y=(int)(0.8*m_nWidth)+m_nYmargin;
	
	point[2].x=nLeft+(int)(0.1*m_nWidth);
	point[2].y=(int)(0.9*m_nWidth)+m_nYmargin;
	
	point[3].x=nLeft+(int)(0.2*m_nWidth);
	point[3].y=(int)(0.8*m_nWidth)+m_nYmargin;
	
	point[4].x=nLeft+(int)(0.2*m_nWidth);
	point[4].y=(int)(0.3*m_nWidth)+m_nYmargin;
	
	CBrush br(m_crText);
	CRgn rgn;
	rgn.CreatePolygonRgn(point,5,ALTERNATE);
	m_memDC.FillRgn(&rgn,&br);
	
	br.DeleteObject();
	rgn.DeleteObject();
}

void CDigitalClock::DrawSection7(int nLeft)
{
	if (m_memDC.m_hDC!=NULL)
	{
		CPoint point[6];
		point[0].x=nLeft+(int)(0.4*m_nWidth);
		point[0].y=(int)(0.9*m_nWidth)+m_nYmargin;
		
		point[1].x=nLeft+(int)(0.7*m_nWidth);
		point[1].y=(int)(0.9*m_nWidth)+m_nYmargin;
		
		point[2].x=nLeft+(int)(0.8*m_nWidth);
		point[2].y=m_nWidth+m_nYmargin;
		
		point[3].x=nLeft+(int)(0.7*m_nWidth);
		point[3].y=(int)(1.1*m_nWidth)+m_nYmargin;
		
		point[4].x=nLeft+(int)(0.3*m_nWidth);
		point[4].y=(int)(1.1*m_nWidth)+m_nYmargin;
		
		point[5].x=nLeft+(int)(0.2*m_nWidth);
		point[5].y=m_nWidth+m_nYmargin;
		


		CBrush br(m_crText);
		CRgn rgn;
		rgn.CreatePolygonRgn(point,6,ALTERNATE);
		m_memDC.FillRgn(&rgn,&br);
		
		br.DeleteObject();
		rgn.DeleteObject();
	}
}


void CDigitalClock::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	GetClientRect(&m_rect);
	// TODO: Add your message handler code here
	
	if(m_memDC.m_hDC ==NULL )
	{

		m_nYmargin =(int)(0.1*m_rect.Height());
		CBitmap bmp;
		CBitmap *pOldBmp;
		m_memDC.CreateCompatibleDC(&dc);
		bmp.CreateCompatibleBitmap(&dc,m_rect.Width(),m_rect.Height());
		pOldBmp=m_memDC.SelectObject(&bmp);
	}

	dc.BitBlt(0,0,m_rect.Width(),m_rect.Height(),&m_memDC,0,0,SRCCOPY);
	// Do not call CStatic::OnPaint() for painting messages
}

void CDigitalClock::setClock(int nHour, int nMinute, int nSecond)
{
	m_nHour=nHour;
	m_nMinute=nMinute;
	m_nSecond=nSecond;
	DrawTimer();
}


void CDigitalClock::DrawTimer()
{
	if (m_memDC.m_hDC!=NULL)
	{	
		
		GetClientRect(&m_rect);				
		m_nWidth = (int)(m_rect.Height()-2*m_nYmargin)/2;

		if (0 == m_nAlign)
		{			
			m_nXmargin = m_nYmargin;
		}
		else if (2 == m_nAlign)
		{			
			m_nXmargin = m_rect.Width()-8*m_nWidth-3*m_nSpace-m_nYmargin;
		}
		else
		{
			m_nXmargin = (int)(m_rect.Width()-8*m_nWidth-3*m_nSpace)/2;
		}

		m_memDC.FillSolidRect(m_rect,m_crBk);
		
		CPen pen(PS_SOLID,1,m_crText);
		CPen* pOldPen=m_memDC.SelectObject(&pen);
		
		DrawHour();
		//DrawMinute();
		//DrawSecond();
		
		Invalidate();
		m_memDC.SelectObject(pOldPen);
		pen.DeleteObject();
	}
}

void CDigitalClock::DrawHour()
{
    int nLeft=m_nXmargin;
	DrawSingleNumber(0,nLeft);
}


void CDigitalClock::DrawSingleNumber(int nNum, int nLeft)
{
	DrawSection1(nLeft);
	DrawSection2(nLeft);
	DrawSection3(nLeft);
	DrawSection4(nLeft);
	DrawSection5(nLeft);
	DrawSection6(nLeft);
	DrawSection7(nLeft);
}
