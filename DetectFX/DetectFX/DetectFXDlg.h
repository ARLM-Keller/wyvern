// DetectFXDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CDetectFXDlg dialog
class CDetectFXDlg : public CDialog
{
// Construction
public:
	CDetectFXDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_DETECTFX_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	CListBox m_lbFX;
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnClear();
	afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
};
