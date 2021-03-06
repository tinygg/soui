//stamp:1240e6c7d895f1ba
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
				dlg_find = _T("LAYOUT:dlg_find");
				dlg_edit_config = _T("LAYOUT:dlg_edit_config");
				dlg_about = _T("LAYOUT:dlg_about");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * dlg_filter;
			const TCHAR * dlg_find;
			const TCHAR * dlg_edit_config;
			const TCHAR * dlg_about;
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
				menu_help = _T("smenu:menu_help");
			}
			const TCHAR * menu_lv;
			const TCHAR * menu_help;
		}smenu;
		class _xml{
			public:
			_xml(){
				config = _T("xml:config");
			}
			const TCHAR * config;
		}xml;
		class _img{
			public:
			_img(){
				btn_menu = _T("img:btn_menu");
			}
			const TCHAR * btn_menu;
		}img;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"btn_clear",65545},
		{L"btn_clear_all",65575},
		{L"btn_close",65541},
		{L"btn_edit_config",65544},
		{L"btn_find",65546},
		{L"btn_max",65539},
		{L"btn_menu",65537},
		{L"btn_min",65538},
		{L"btn_next",65585},
		{L"btn_open_file",65543},
		{L"btn_prev",65586},
		{L"btn_restore",65540},
		{L"btn_save",65587},
		{L"btn_select_all",65574},
		{L"cbx_levels",65547},
		{L"chk_match_case",65583},
		{L"chk_match_whole_word",65584},
		{L"chk_pid",65579},
		{L"chk_tag",65577},
		{L"chk_tid",65581},
		{L"col_content",65570},
		{L"col_function",65568},
		{L"col_level",65558},
		{L"col_line_index",65550},
		{L"col_module",65562},
		{L"col_package",65572},
		{L"col_pid",65554},
		{L"col_source_file",65564},
		{L"col_source_line",65566},
		{L"col_tag",65560},
		{L"col_tid",65556},
		{L"col_time",65552},
		{L"edit_filter",65548},
		{L"edit_search",65582},
		{L"lv_log",65549},
		{L"lv_pid",65578},
		{L"lv_tags",65576},
		{L"lv_tid",65580},
		{L"real_scilexer",65542},
		{L"txt_content",65571},
		{L"txt_function",65569},
		{L"txt_level",65559},
		{L"txt_line",65551},
		{L"txt_module",65563},
		{L"txt_package",65573},
		{L"txt_pid",65555},
		{L"txt_source_file",65565},
		{L"txt_source_line",65567},
		{L"txt_tag",65561},
		{L"txt_tid",65557},
		{L"txt_time",65553},
		{L"txt_title",65536}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			btn_clear = namedXmlID[1].strName;
			btn_clear_all = namedXmlID[2].strName;
			btn_close = namedXmlID[3].strName;
			btn_edit_config = namedXmlID[4].strName;
			btn_find = namedXmlID[5].strName;
			btn_max = namedXmlID[6].strName;
			btn_menu = namedXmlID[7].strName;
			btn_min = namedXmlID[8].strName;
			btn_next = namedXmlID[9].strName;
			btn_open_file = namedXmlID[10].strName;
			btn_prev = namedXmlID[11].strName;
			btn_restore = namedXmlID[12].strName;
			btn_save = namedXmlID[13].strName;
			btn_select_all = namedXmlID[14].strName;
			cbx_levels = namedXmlID[15].strName;
			chk_match_case = namedXmlID[16].strName;
			chk_match_whole_word = namedXmlID[17].strName;
			chk_pid = namedXmlID[18].strName;
			chk_tag = namedXmlID[19].strName;
			chk_tid = namedXmlID[20].strName;
			col_content = namedXmlID[21].strName;
			col_function = namedXmlID[22].strName;
			col_level = namedXmlID[23].strName;
			col_line_index = namedXmlID[24].strName;
			col_module = namedXmlID[25].strName;
			col_package = namedXmlID[26].strName;
			col_pid = namedXmlID[27].strName;
			col_source_file = namedXmlID[28].strName;
			col_source_line = namedXmlID[29].strName;
			col_tag = namedXmlID[30].strName;
			col_tid = namedXmlID[31].strName;
			col_time = namedXmlID[32].strName;
			edit_filter = namedXmlID[33].strName;
			edit_search = namedXmlID[34].strName;
			lv_log = namedXmlID[35].strName;
			lv_pid = namedXmlID[36].strName;
			lv_tags = namedXmlID[37].strName;
			lv_tid = namedXmlID[38].strName;
			real_scilexer = namedXmlID[39].strName;
			txt_content = namedXmlID[40].strName;
			txt_function = namedXmlID[41].strName;
			txt_level = namedXmlID[42].strName;
			txt_line = namedXmlID[43].strName;
			txt_module = namedXmlID[44].strName;
			txt_package = namedXmlID[45].strName;
			txt_pid = namedXmlID[46].strName;
			txt_source_file = namedXmlID[47].strName;
			txt_source_line = namedXmlID[48].strName;
			txt_tag = namedXmlID[49].strName;
			txt_tid = namedXmlID[50].strName;
			txt_time = namedXmlID[51].strName;
			txt_title = namedXmlID[52].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * btn_clear;
		 const wchar_t * btn_clear_all;
		 const wchar_t * btn_close;
		 const wchar_t * btn_edit_config;
		 const wchar_t * btn_find;
		 const wchar_t * btn_max;
		 const wchar_t * btn_menu;
		 const wchar_t * btn_min;
		 const wchar_t * btn_next;
		 const wchar_t * btn_open_file;
		 const wchar_t * btn_prev;
		 const wchar_t * btn_restore;
		 const wchar_t * btn_save;
		 const wchar_t * btn_select_all;
		 const wchar_t * cbx_levels;
		 const wchar_t * chk_match_case;
		 const wchar_t * chk_match_whole_word;
		 const wchar_t * chk_pid;
		 const wchar_t * chk_tag;
		 const wchar_t * chk_tid;
		 const wchar_t * col_content;
		 const wchar_t * col_function;
		 const wchar_t * col_level;
		 const wchar_t * col_line_index;
		 const wchar_t * col_module;
		 const wchar_t * col_package;
		 const wchar_t * col_pid;
		 const wchar_t * col_source_file;
		 const wchar_t * col_source_line;
		 const wchar_t * col_tag;
		 const wchar_t * col_tid;
		 const wchar_t * col_time;
		 const wchar_t * edit_filter;
		 const wchar_t * edit_search;
		 const wchar_t * lv_log;
		 const wchar_t * lv_pid;
		 const wchar_t * lv_tags;
		 const wchar_t * lv_tid;
		 const wchar_t * real_scilexer;
		 const wchar_t * txt_content;
		 const wchar_t * txt_function;
		 const wchar_t * txt_level;
		 const wchar_t * txt_line;
		 const wchar_t * txt_module;
		 const wchar_t * txt_package;
		 const wchar_t * txt_pid;
		 const wchar_t * txt_source_file;
		 const wchar_t * txt_source_line;
		 const wchar_t * txt_tag;
		 const wchar_t * txt_tid;
		 const wchar_t * txt_time;
		 const wchar_t * txt_title;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int btn_clear	=	65545;
		const static int btn_clear_all	=	65575;
		const static int btn_close	=	65541;
		const static int btn_edit_config	=	65544;
		const static int btn_find	=	65546;
		const static int btn_max	=	65539;
		const static int btn_menu	=	65537;
		const static int btn_min	=	65538;
		const static int btn_next	=	65585;
		const static int btn_open_file	=	65543;
		const static int btn_prev	=	65586;
		const static int btn_restore	=	65540;
		const static int btn_save	=	65587;
		const static int btn_select_all	=	65574;
		const static int cbx_levels	=	65547;
		const static int chk_match_case	=	65583;
		const static int chk_match_whole_word	=	65584;
		const static int chk_pid	=	65579;
		const static int chk_tag	=	65577;
		const static int chk_tid	=	65581;
		const static int col_content	=	65570;
		const static int col_function	=	65568;
		const static int col_level	=	65558;
		const static int col_line_index	=	65550;
		const static int col_module	=	65562;
		const static int col_package	=	65572;
		const static int col_pid	=	65554;
		const static int col_source_file	=	65564;
		const static int col_source_line	=	65566;
		const static int col_tag	=	65560;
		const static int col_tid	=	65556;
		const static int col_time	=	65552;
		const static int edit_filter	=	65548;
		const static int edit_search	=	65582;
		const static int lv_log	=	65549;
		const static int lv_pid	=	65578;
		const static int lv_tags	=	65576;
		const static int lv_tid	=	65580;
		const static int real_scilexer	=	65542;
		const static int txt_content	=	65571;
		const static int txt_function	=	65569;
		const static int txt_level	=	65559;
		const static int txt_line	=	65551;
		const static int txt_module	=	65563;
		const static int txt_package	=	65573;
		const static int txt_pid	=	65555;
		const static int txt_source_file	=	65565;
		const static int txt_source_line	=	65567;
		const static int txt_tag	=	65561;
		const static int txt_tid	=	65557;
		const static int txt_time	=	65553;
		const static int txt_title	=	65536;
		}id;

		class _string{
		public:
		const static int about	=	0;
		const static int cancel	=	1;
		const static int clear	=	2;
		const static int clear_all	=	3;
		const static int close	=	4;
		const static int col_content	=	5;
		const static int col_function	=	6;
		const static int col_level	=	7;
		const static int col_line	=	8;
		const static int col_module	=	9;
		const static int col_package	=	10;
		const static int col_pid	=	11;
		const static int col_source_file	=	12;
		const static int col_source_line	=	13;
		const static int col_tag	=	14;
		const static int col_tid	=	15;
		const static int col_time	=	16;
		const static int config_format	=	17;
		const static int copy	=	18;
		const static int cue_input_filter	=	19;
		const static int edit_config	=	20;
		const static int exclude_tag	=	21;
		const static int filter	=	22;
		const static int find_text	=	23;
		const static int help	=	24;
		const static int lang_chinese	=	25;
		const static int lang_english	=	26;
		const static int language	=	27;
		const static int level	=	28;
		const static int match_case	=	29;
		const static int match_whole_word	=	30;
		const static int msg_open_failed	=	31;
		const static int next	=	32;
		const static int only_tag	=	33;
		const static int open_file	=	34;
		const static int pid_filter	=	35;
		const static int prev	=	36;
		const static int save	=	37;
		const static int search	=	38;
		const static int select_all	=	39;
		const static int tag_filter	=	40;
		const static int tid_filter	=	41;
		const static int title	=	42;
		const static int title_no_name	=	43;
		const static int url_help	=	44;
		const static int ver	=	45;
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
