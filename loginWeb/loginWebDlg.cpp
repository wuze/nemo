// loginWebDlg.cpp : implementation file
//

#include "stdafx.h"
#include "loginWeb.h"
#include "loginWebDlg.h"

#include "afxinet.h"
#include <stdio.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLoginWebDlg dialog

CLoginWebDlg::CLoginWebDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CLoginWebDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLoginWebDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CLoginWebDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLoginWebDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CLoginWebDlg, CDialog)
	//{{AFX_MSG_MAP(CLoginWebDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLoginWebDlg message handlers

BOOL CLoginWebDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CLoginWebDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CLoginWebDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CLoginWebDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CLoginWebDlg::OnButton1() 
{
	
	CInternetSession session("HttpClient");
	CHttpConnection  *pServer;
	CHttpFile		 *pf;
	CString  m_check;

	bool ret = false;
	CInternetSession  session;
	CHttpConnection* pServer;
	CHttpFile* pf;
	m_check = "";
	CString  email,password;

	FILE *fp;
	try
	{
		CString ServerName  =  "www.battlenet.com.cn";
		INTERNET_PORT nPort  =  80;  //port
		CString data = "email=" + email + "&password=" + password;
		pServer  = session.GetHttpConnection(ServerName, nPort); 
		//Æ´½ÓÍ·²¿
		pf =  pServer->OpenRequest(CHttpConnection::HTTP_VERB_GET,"");
		pf->AddRequestHeaders("Host: www.battlenet.com.cn");  
		pf->AddRequestHeaders("User-Agent: Mozilla/5.0 (Windows NT 5.1) AppleWebKit/537.31 (KHTML, like Gecko) Chrome/26.0.1410.64 Safari/537.31");
		pf->AddRequestHeaders("Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8"); 
		pf->AddRequestHeaders("Accept-Language: zh-CN,zh;q=0.8");
		pf->AddRequestHeaders("Accept-Encoding: gzip, deflate");
		pf->AddRequestHeaders("Accept-Charset: GBK,utf-8;q=0.7,*;q=0.3"); //
		pf->AddRequestHeaders("Keep-Alive: 115");   //
		pf->AddRequestHeaders("Connection:Keep-Alive");
		pf->AddRequestHeaders("Referer: http://www.baidu.com");
		pf->AddRequestHeaders("Content-Type: application/x-www-form-urlencoded");
		pf->SendRequest(NULL, 0, data.GetBuffer(0), data.GetLength());
		DWORD statusCode = 0;
		if(!pf->QueryInfoStatusCode(statusCode) || statusCode != HTTP_STATUS_OK)
		{
			CString e;
			e.Format("PC WEB Login failed, Pls Check. status code = %d/n", statusCode);
			throw exception(e.GetBuffer());
		}

		if( statusCode==HTTP_STATUS_OK)
		{
			CString content;
			CString data;
			
			while( pf->ReadString(data) )
			{
				content += data +"\r\n";
			}
			content.TrimRight();
			fp = fopen("C:\\login.txt","w+");
			fwrite(content,content.GetLength(),1,fp);
			fclose(fp);
		}




	}
	catch(exception e)
	{
		TRACE("[ERROR]:%s/n", e.what());
	}
	if(pf != NULL)
	{
		pf->Close();
		delete pf;
		pf = NULL;
	}


	if(pServer != NULL)
	{
		pServer->Close();
		delete pServer;
		pServer = NULL;
	}
	session.Close();


	/*
	char *url="http://www.imobile.com.cn/simcard.php?simcard=1392658";
	CHttpFile *pfile = (CHttpFile*)session.OpenURL(url);

	DWORD dwStatusCode;
	FILE  *fp;


	pfile->QueryInfoStatusCode(dwStatusCode);
	if(dwStatusCode == HTTP_STATUS_OK)
	{
		
		CString content;
		CString data;

		while( pfile->ReadString(data) )
		{
			content += data +"\r\n";
		}
		content.TrimRight();



		fp = fopen("C:\\login.txt","w+");
		fwrite(content,content.GetLength(),1,fp);
		fclose(fp);
	}
	*/

}
