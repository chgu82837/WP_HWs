#pragma once

// Dlg_RaiseBid 對話方塊

class Dlg_RaiseBid : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg_RaiseBid)

public:
	Dlg_RaiseBid(CWnd* pParent = NULL);   // 標準建構函式
	virtual ~Dlg_RaiseBid();

// 對話方塊資料
	enum { IDD = IDD_RBID_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支援

	DECLARE_MESSAGE_MAP()
public:
	CEdit input;
	int result;
	afx_msg void OnBnClickedOk();
};
