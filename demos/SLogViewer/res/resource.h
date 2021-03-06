//stamp:0af128f7d6bee720
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				dlg_filter = _T("LAYOUT:dlg_filter");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * dlg_filter;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
		class _languages{
			public:
			_languages(){
				lang_cn = _T("languages:lang_cn");
				lang_en = _T("languages:lang_en");
			}
			const TCHAR * lang_cn;
			const TCHAR * lang_en;
		}languages;
		class _smenu{
			public:
			_smenu(){
				menu_lv = _T("smenu:menu_lv");
			}
			const TCHAR * menu_lv;
		}smenu;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"btn_add_file",65541},
		{L"btn_close",65536},
		{L"btn_lang_cn",65544},
		{L"btn_lang_en",65545},
		{L"btn_max",65537},
		{L"btn_min",65539},
		{L"btn_open_file",65540},
		{L"btn_restore",65538},
		{L"cbx_levels",65542},
		{L"chk_pid",65572},
		{L"chk_tag",65570},
		{L"chk_tid",65574},
		{L"col_content",65567},
		{L"col_function",65565},
		{L"col_level",65555},
		{L"col_line_index",65547},
		{L"col_module",65559},
		{L"col_pid",65551},
		{L"col_source_file",65561},
		{L"col_source_line",65563},
		{L"col_tag",65557},
		{L"col_tid",65553},
		{L"col_time",65549},
		{L"edit_filter",65543},
		{L"lv_log",65546},
		{L"lv_pid",65571},
		{L"lv_tags",65569},
		{L"lv_tid",65573},
		{L"txt_content",65568},
		{L"txt_function",65566},
		{L"txt_level",65556},
		{L"txt_line",65548},
		{L"txt_module",65560},
		{L"txt_pid",65552},
		{L"txt_source_file",65562},
		{L"txt_source_line",65564},
		{L"txt_tag",65558},
		{L"txt_tid",65554},
		{L"txt_time",65550}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			btn_add_file = namedXmlID[0].strName;
			btn_close = namedXmlID[1].strName;
			btn_lang_cn = namedXmlID[2].strName;
			btn_lang_en = namedXmlID[3].strName;
			btn_max = namedXmlID[4].strName;
			btn_min = namedXmlID[5].strName;
			btn_open_file = namedXmlID[6].strName;
			btn_restore = namedXmlID[7].strName;
			cbx_levels = namedXmlID[8].strName;
			chk_pid = namedXmlID[9].strName;
			chk_tag = namedXmlID[10].strName;
			chk_tid = namedXmlID[11].strName;
			col_content = namedXmlID[12].strName;
			col_function = namedXmlID[13].strName;
			col_level = namedXmlID[14].strName;
			col_line_index = namedXmlID[15].strName;
			col_module = namedXmlID[16].strName;
			col_pid = namedXmlID[17].strName;
			col_source_file = namedXmlID[18].strName;
			col_source_line = namedXmlID[19].strName;
			col_tag = namedXmlID[20].strName;
			col_tid = namedXmlID[21].strName;
			col_time = namedXmlID[22].strName;
			edit_filter = namedXmlID[23].strName;
			lv_log = namedXmlID[24].strName;
			lv_pid = namedXmlID[25].strName;
			lv_tags = namedXmlID[26].strName;
			lv_tid = namedXmlID[27].strName;
			txt_content = namedXmlID[28].strName;
			txt_function = namedXmlID[29].strName;
			txt_level = namedXmlID[30].strName;
			txt_line = namedXmlID[31].strName;
			txt_module = namedXmlID[32].strName;
			txt_pid = namedXmlID[33].strName;
			txt_source_file = namedXmlID[34].strName;
			txt_source_line = namedXmlID[35].strName;
			txt_tag = namedXmlID[36].strName;
			txt_tid = namedXmlID[37].strName;
			txt_time = namedXmlID[38].strName;
		}
		 const wchar_t * btn_add_file;
		 const wchar_t * btn_close;
		 const wchar_t * btn_lang_cn;
		 const wchar_t * btn_lang_en;
		 const wchar_t * btn_max;
		 const wchar_t * btn_min;
		 const wchar_t * btn_open_file;
		 const wchar_t * btn_restore;
		 const wchar_t * cbx_levels;
		 const wchar_t * chk_pid;
		 const wchar_t * chk_tag;
		 const wchar_t * chk_tid;
		 const wchar_t * col_content;
		 const wchar_t * col_function;
		 const wchar_t * col_level;
		 const wchar_t * col_line_index;
		 const wchar_t * col_module;
		 const wchar_t * col_pid;
		 const wchar_t * col_source_file;
		 const wchar_t * col_source_line;
		 const wchar_t * col_tag;
		 const wchar_t * col_tid;
		 const wchar_t * col_time;
		 const wchar_t * edit_filter;
		 const wchar_t * lv_log;
		 const wchar_t * lv_pid;
		 const wchar_t * lv_tags;
		 const wchar_t * lv_tid;
		 const wchar_t * txt_content;
		 const wchar_t * txt_function;
		 const wchar_t * txt_level;
		 const wchar_t * txt_line;
		 const wchar_t * txt_module;
		 const wchar_t * txt_pid;
		 const wchar_t * txt_source_file;
		 const wchar_t * txt_source_line;
		 const wchar_t * txt_tag;
		 const wchar_t * txt_tid;
		 const wchar_t * txt_time;
		}name;

		class _id{
		public:
		const static int btn_add_file	=	65541;
		const static int btn_close	=	65536;
		const static int btn_lang_cn	=	65544;
		const static int btn_lang_en	=	65545;
		const static int btn_max	=	65537;
		const static int btn_min	=	65539;
		const static int btn_open_file	=	65540;
		const static int btn_restore	=	65538;
		const static int cbx_levels	=	65542;
		const static int chk_pid	=	65572;
		const static int chk_tag	=	65570;
		const static int chk_tid	=	65574;
		const static int col_content	=	65567;
		const static int col_function	=	65565;
		const static int col_level	=	65555;
		const static int col_line_index	=	65547;
		const static int col_module	=	65559;
		const static int col_pid	=	65551;
		const static int col_source_file	=	65561;
		const static int col_source_line	=	65563;
		const static int col_tag	=	65557;
		const static int col_tid	=	65553;
		const static int col_time	=	65549;
		const static int edit_filter	=	65543;
		const static int lv_log	=	65546;
		const static int lv_pid	=	65571;
		const static int lv_tags	=	65569;
		const static int lv_tid	=	65573;
		const static int txt_content	=	65568;
		const static int txt_function	=	65566;
		const static int txt_level	=	65556;
		const static int txt_line	=	65548;
		const static int txt_module	=	65560;
		const static int txt_pid	=	65552;
		const static int txt_source_file	=	65562;
		const static int txt_source_line	=	65564;
		const static int txt_tag	=	65558;
		const static int txt_tid	=	65554;
		const static int txt_time	=	65550;
		}id;

		class _string{
		public:
		const static int col_content	=	0;
		const static int col_level	=	1;
		const static int col_line	=	2;
		const static int col_pid	=	3;
		const static int col_tag	=	4;
		const static int col_tid	=	5;
		const static int col_time	=	6;
		const static int copy	=	7;
		const static int filter	=	8;
		const static int level	=	9;
		const static int pid_filter	=	10;
		const static int tag_filter	=	11;
		const static int tid_filter	=	12;
		const static int title	=	13;
		const static int ver	=	14;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
