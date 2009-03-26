// DetectFXDlg.cpp : implementation file
//

#include "stdafx.h"
#include "DetectFX.h"
#include "DetectFXDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDetectFXDlg dialog

CDetectFXDlg::CDetectFXDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDetectFXDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDetectFXDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_FXLIST, m_lbFX);
}

BEGIN_MESSAGE_MAP(CDetectFXDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDOK, &CDetectFXDlg::OnBnClickedOk)
	ON_COMMAND(ID_CMMENU_CLEAR, &CDetectFXDlg::OnClear)
	ON_WM_CONTEXTMENU()
END_MESSAGE_MAP()


// CDetectFXDlg message handlers

BOOL CDetectFXDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	CFont lbfont;
	VERIFY(lbfont.CreateFont(0,0,0,0,FW_BOLD,false,false,0,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_GUI_FONT|FF_MODERN,_T("Courier New")));
	m_lbFX.SetFont(&lbfont);
	return TRUE;  // return TRUE  unless you set the focus to a control
}


// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CDetectFXDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

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

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CDetectFXDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

#include "F:\\Code\\Snippet\detect.h"

void CDetectFXDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	m_lbFX.SendMessage(LB_RESETCONTENT);
	int iNetfx10SPLevel = -1;
	int iNetfx11SPLevel = -1;
	int iNetfx20SPLevel = -1;
	int iNetfx30SPLevel = -1;
	int iNetfx35SPLevel = -1;
	TCHAR szMessage[MAX_PATH];

	// Determine whether or not the .NET Framework
	// 1.0, 1.1, 2.0 or 3.0 are installed
	bool bNetfx10Installed = IsNetfx10Installed();
	bool bNetfx11Installed = IsNetfx11Installed();
	bool bNetfx20Installed = IsNetfx20Installed();

	// The .NET Framework 3.0 is an add-in that installs
	// on top of the .NET Framework 2.0.  For this version
	// check, validate that both 2.0 and 3.0 are installed.
	bool bNetfx30Installed = (IsNetfx20Installed() && IsNetfx30Installed());

	// The .NET Framework 3.5 is an add-in that installs
	// on top of the .NET Framework 2.0 and 3.0.  For this version
	// check, validate that 2.0, 3.0 and 3.5 are installed.
	bool bNetfx35Installed = (IsNetfx20Installed() && IsNetfx30Installed() && IsNetfx35Installed());

	// If .NET Framework 1.0 is installed, get the
	// service pack level
	if (bNetfx10Installed)
	{
		iNetfx10SPLevel = GetNetfx10SPLevel();

		if (iNetfx10SPLevel > 0)
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 1.0 service pack %i is installed."), iNetfx10SPLevel);
		else
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 1.0 is installed with no service packs."));

		m_lbFX.AddString(szMessage);
	}
	else
	{
		m_lbFX.AddString(_T(".NET Framework 1.0 is not installed."));
	}

	// If .NET Framework 1.1 is installed, get the
	// service pack level
	if (bNetfx11Installed)
	{
		iNetfx11SPLevel = GetNetfxSPLevel(g_szNetfx11RegKeyName, g_szNetfxStandardSPxRegValueName);

		if (iNetfx11SPLevel > 0)
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 1.1 service pack %i is installed."), iNetfx11SPLevel);
		else
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 1.1 is installed with no service packs."));

		m_lbFX.AddString(szMessage);
	}
	else
	{
		m_lbFX.AddString(_T(".NET Framework 1.1 is not installed."));
	}

	// If .NET Framework 2.0 is installed, get the
	// service pack level
	if (bNetfx20Installed)
	{
		iNetfx20SPLevel = GetNetfxSPLevel(g_szNetfx20RegKeyName, g_szNetfxStandardSPxRegValueName);

		if (iNetfx20SPLevel > 0)
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 2.0 service pack %i is installed."), iNetfx20SPLevel);
		else
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 2.0 is installed with no service packs."));

		m_lbFX.AddString(szMessage);
	}
	else
	{
		m_lbFX.AddString(_T(".NET Framework 2.0 is not installed."));
	}

	// If .NET Framework 3.0 is installed, get the
	// service pack level
	if (bNetfx30Installed)
	{
		iNetfx30SPLevel = GetNetfxSPLevel(g_szNetfx30SpRegKeyName, g_szNetfxStandardSPxRegValueName);

		if (iNetfx30SPLevel > 0)
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 3.0 service pack %i is installed."), iNetfx30SPLevel);
		else
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 3.0 is installed with no service packs."));

		m_lbFX.AddString(szMessage);
	}
	else
	{
		m_lbFX.AddString(_T(".NET Framework 3.0 is not installed."));
	}

	// If .NET Framework 3.5 is installed, get the
	// service pack level
	if (bNetfx35Installed)
	{
		iNetfx35SPLevel = GetNetfxSPLevel(g_szNetfx35RegKeyName, g_szNetfxStandardSPxRegValueName);

		if (iNetfx35SPLevel > 0)
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 3.5 service pack %i is installed."), iNetfx35SPLevel);
		else
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 3.5 is installed with no service packs."));

		m_lbFX.AddString(szMessage);
	}
	else
	{
		m_lbFX.AddString(_T(".NET Framework 3.5 is not installed."));
	}
	
}


void CDetectFXDlg::OnClear()
{
	m_lbFX.SendMessage(LB_RESETCONTENT);
}

void CDetectFXDlg::OnContextMenu(CWnd* pWnd, CPoint point)
{
	CRect rect;
	m_lbFX.GetWindowRect(&rect);
	if(rect.PtInRect(point))
	{
		HMENU hMenu=GetSubMenu(LoadMenu(NULL,MAKEINTRESOURCE(IDR_LBCM)),0);
		ASSERT(hMenu!=NULL);
		TrackPopupMenu(hMenu,TPM_CENTERALIGN,point.x,point.y,0,this->GetSafeHwnd(),rect);
		DestroyMenu(hMenu);
	}
}
