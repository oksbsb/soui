// MainDlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////
#pragma once

#include "SLogAdapter.h"

#include "FilterDlg.h"
#include "magnet/MagnetFrame.h"
#include "droptarget.h"

class CMainDlg : public SHostWnd, public CMagnetFrame, public IFileDropHandler
{
public:
	CMainDlg();
	~CMainDlg();

	void OnClose();
	void OnMaximize();
	void OnRestore();
	void OnMinimize();
	void OnSize(UINT nType, CSize size);

	void OnBtnMsgBox();
	int OnCreate(LPCREATESTRUCT lpCreateStruct);
	BOOL OnInitDialog(HWND wndFocus, LPARAM lInitParam);


	void UpdateFilterTags(const SArray<SStringW>& lstTags);
protected:
	virtual void OnFileDropdown(HDROP hDrop);
	void OpenFile(LPCTSTR pszFileName);

	void OnLanguage(const SStringT & strLang);
	void OnLanguageBtnCN();
	void OnLanguageBtnEN();
	void OnOpenFile();
	void OnAddFile();
	void OnFilterInputChange(EventArgs *e);
	void OnLevelsChange(EventArgs *e);
	bool OnLvContextMenu(CPoint pt);

	//soui消息
	EVENT_MAP_BEGIN()
		EVENT_NAME_COMMAND(L"btn_close", OnClose)
		EVENT_NAME_COMMAND(L"btn_min", OnMinimize)
		EVENT_NAME_COMMAND(L"btn_max", OnMaximize)
		EVENT_NAME_COMMAND(L"btn_restore", OnRestore)
		EVENT_NAME_COMMAND(L"btn_lang_cn", OnLanguageBtnCN)
		EVENT_NAME_COMMAND(L"btn_lang_en", OnLanguageBtnEN)
		EVENT_ID_COMMAND(R.id.btn_open_file,OnOpenFile)
		EVENT_ID_HANDLER(R.id.edit_filter,EventRENotify::EventID,OnFilterInputChange)
		EVENT_ID_HANDLER(R.id.cbx_levels,EventCBSelChange::EventID,OnLevelsChange)
		EVENT_ID_CONTEXTMENU(R.id.lv_log,OnLvContextMenu)
	EVENT_MAP_END()
		//HostWnd真实窗口消息处理
	BEGIN_MSG_MAP_EX(CMainDlg)
		MSG_WM_CREATE(OnCreate)
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_CLOSE(OnClose)
		MSG_WM_SIZE(OnSize)
		CHAIN_MSG_MAP(SHostWnd)
		REFLECT_NOTIFICATIONS_EX()
	END_MSG_MAP()
	void UpdateFilterPids(const SArray<UINT> & lstPid);
	void UpdateFilterTids(const SArray<UINT> & lstTid);
protected:
	CAutoRefPtr<SLogAdapter> m_logAdapter;
	SComboBox	*			 m_cbxLevels;
	SMCListView	*			 m_lvLogs;

	CFilterDlg *			m_pFilterDlg;
};
