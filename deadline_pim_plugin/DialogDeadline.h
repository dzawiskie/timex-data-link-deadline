#pragma once

#include <string>

// Bo�te de dialogue CDialogDeadline

class CDialogDeadline : public CDialog
{
	DECLARE_DYNAMIC(CDialogDeadline)

public:
	CDialogDeadline(CWnd* pParent = NULL);
	CDialogDeadline(const char *path,CWnd* pParent = NULL);

  virtual ~CDialogDeadline();

// Donn�es de bo�te de dialogue
	enum { IDD = IDD_DIALOGDEADLINE };

protected:
  std::string  m_Path;

	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge DDX/DDV

	DECLARE_MESSAGE_MAP()
public:

  void FillDB();
  BOOL OnInitDialog(); 

  afx_msg void OnBnClickedOk();
};
