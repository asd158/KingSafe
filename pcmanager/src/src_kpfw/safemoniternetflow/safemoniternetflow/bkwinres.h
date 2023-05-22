#pragma once

#define DEFCLOSEMAINBUTTON			100 //关闭主窗口
#define DEFACCESSNETCOUNT			101 //有多少个进程在访问网络
#define DEF_DOWNLOAD_SUM			102 //已下载流量
#define DEFLISTBOX					103 //显示各个软件的流量的LIST
#define DEFDOWNSPEED				104 //下载速度
#define DEFUPSPEED					105 //上传速度
#define DEFCLOSEBUTTON				106 //关闭按钮
#define DEF_FLOATWND_STATUS			107 //显示悬浮窗当前状态
#define DEF_UPLOAD_SUM              108 //已上传流量
#define DEF_NETFLOW_SWITCH          109 // 监控开关按钮

#define DEV_VIEW_DETAIL             110 //悬浮窗设置
#define DEF_FLOATWND_SWITCH         111
#define DEF_MIN_BTN                 112 // 最小化按钮
#define TAB_MAIN					250	//tab
#define TAB_SHOW_FLOW_MINTER		260 //流量监控显示页面
#define TAB_SHOW_FLOW_STAT			261 //流量统计显示页面
#define DEF_SHOW_DESCRIBE			263	//流量统计第二行描叙
#define TAB_SHOW_STAT_CSETTING		264 //流量统计显示更改设置
#define TAB_SHOW_STAT_DAYS			267 //流量统计按日查看
#define TAB_SHOW_STAT_WEEKS			269 //流量统计按周查看
#define TAB_SHOW_STAT_MONTHS		271 //流量统计按月查看
#define TAB_SHOW_STAT_DEFINESELF	273 //流量统计自定义查看
#define TAB_SHOW_STAT_WINDOW		280 //
#define DEF_NETFLOW_SWITCH2         284 //流量统计显示监控开关按钮

#define DEF_RIGHT_ALLFLOW			281 //总流量
#define	DEF_UP_ALLFLOW				282 //上传总流量
#define	DEF_DOWN_ALLFLOW			283 //下载总流量
#define DEF_SHOW_FIRST				285 //返回首页
#define DEF_SHOW_BEFORE				286 //上一页
#define	DEF_SHOW_CUR_PAGE			287 //当前页
#define DEF_SHOW_NEXT				288 //下一页
#define DEF_SHOW_ENDP_PAGE			289 //尾页
#define	DEF_FLOW_LIST_BEGIN			291 //今日网络流量占用排行榜的显示开始
#define DEF_SHOW_MORE				306 //点击查看更多

#define	DEF_BEGIN_STAT_LIST_BEGIN   400							//统计的list开始
#define	DEF_BEGIN_STAT_LIST_401   DEF_BEGIN_STAT_LIST_BEGIN+1 //
#define	DEF_BEGIN_STAT_LIST_402   DEF_BEGIN_STAT_LIST_BEGIN+2 //
#define	DEF_BEGIN_STAT_LIST_403   DEF_BEGIN_STAT_LIST_BEGIN+3 //
#define	DEF_BEGIN_STAT_LIST_404   DEF_BEGIN_STAT_LIST_BEGIN+4 //
#define	DEF_BEGIN_STAT_LIST_405   DEF_BEGIN_STAT_LIST_BEGIN+5 //
#define	DEF_BEGIN_STAT_LIST_406   DEF_BEGIN_STAT_LIST_BEGIN+6 //
#define	DEF_BEGIN_STAT_LIST_407   DEF_BEGIN_STAT_LIST_BEGIN+7 //


//////////////////////////////////////////////////////////////////////////
//String
#define DefString1					1 //有多少进程在访问网络
#define Str_Download_Sum			2 //已下载总量
#define DefString3					3 //下载速度
#define DefString4					4 //上传速度
#define DefString5					5
#define DefString6					6
#define DefString7					7
#define DefString8					8 //是否要结束 %s
#define DefString9					9
#define DefString10					10
#define DefString11					11
#define DefString12					12
#define Str_Hide              13
#define Str_Show              14
#define Str_SystemIdleProcessDescription	15
#define Str_SystemIdleProcessName			16
#define Str_Column_Name						17
#define Str_Column_Description				18
#define Str_Column_TrustMode				19
#define Str_Column_DownloadSpeed			20
#define Str_Column_UploadSpeed				21
#define Str_Column_Total_Download			22
#define Str_Column_Total_Upload				23
#define Str_Column_Operator					24
#define Str_Kill_Process					25
#define Str_TrustMode_UnVerfiy				26
#define Str_TrustMode_Unknown				27
#define Str_TrustMode_Safe					28
#define Str_TrustMode_Danger				29
#define Str_SystemProcessDescription		30
#define Str_Upload_Sum                      31
#define DefString32		                    32 //
#define DefString33		                    33 //抱歉，流量监控功能暂不支持64位系统，我们将尽快改进！
#define Str_NetMonDisabled                  34
#define Str_NetMonDisabledHint              35
#define Str_NetMonEnabledHint                36
#define Str_FloatWndEnabled                  37
#define Str_FloatWndDisabled                 38
#define Str_FloatWndPromptMsgBoxText         39
#define Str_FloatWndPromptMsgBoxRememberCheck 40
#define Str_FloatWndPromptMsgBoxCaption      41
#define STR_BTN_FEEDBACK                     42
#define STR_BTN_QUIT                         43
#define STR_DRIVER_FAILED_MSGBOX_CAPTION     44
#define DefStringShow					     52
#define DefStringHide					     53
#define DefStatCloseNetMoniter				 54
#define DefStatCloseSetNone					 55
#define DefStatCloseSetDay					 56
#define DefStatCloseSetMonth				 57
#define DefStatCloseSetDayM					 58
#define	DefString59							 59
#define	DefString60							 60
#define	DefString61							 61

// 2.0 ui ctrl id [12/4/2010 zhangbaoliang]
#define NET_MONITOR_LIST_BOX_ID_BEGIN			200
#define NET_MONITOR_201							NET_MONITOR_LIST_BOX_ID_BEGIN+1
#define NET_MONITOR_202							NET_MONITOR_LIST_BOX_ID_BEGIN+2
#define NET_MONITOR_203							NET_MONITOR_LIST_BOX_ID_BEGIN+3
#define NET_MONITOR_204							NET_MONITOR_LIST_BOX_ID_BEGIN+4
#define NET_MONITOR_205							NET_MONITOR_LIST_BOX_ID_BEGIN+5
#define NET_MONITOR_206							NET_MONITOR_LIST_BOX_ID_BEGIN+6
#define NET_MONITOR_207							NET_MONITOR_LIST_BOX_ID_BEGIN+7
#define NET_MONITOR_208							NET_MONITOR_LIST_BOX_ID_BEGIN+8
#define NET_MONITOR_209							NET_MONITOR_LIST_BOX_ID_BEGIN+9
#define NET_MONITOR_210							NET_MONITOR_LIST_BOX_ID_BEGIN+10
#define NET_MONITOR_211							NET_MONITOR_LIST_BOX_ID_BEGIN+11
#define NET_MONITOR_212							NET_MONITOR_LIST_BOX_ID_BEGIN+12
#define NET_MONITOR_213							NET_MONITOR_LIST_BOX_ID_BEGIN+13
#define NET_MONITOR_214							NET_MONITOR_LIST_BOX_ID_BEGIN+14
#define NET_MONITOR_215							NET_MONITOR_LIST_BOX_ID_BEGIN+15
#define NET_MONITOR_216							NET_MONITOR_LIST_BOX_ID_BEGIN+16
#define NET_MONITOR_217							NET_MONITOR_LIST_BOX_ID_BEGIN+17
#define NET_MONITOR_218							NET_MONITOR_LIST_BOX_ID_BEGIN+18
#define NET_MONITOR_219							NET_MONITOR_LIST_BOX_ID_BEGIN+19
#define NET_MONITOR_220							NET_MONITOR_LIST_BOX_ID_BEGIN+20
#define NET_MONITOR_221							NET_MONITOR_LIST_BOX_ID_BEGIN+21
#define NET_MONITOR_222							NET_MONITOR_LIST_BOX_ID_BEGIN+22
#define NET_MONITOR_223							NET_MONITOR_LIST_BOX_ID_BEGIN+23
#define NET_MONITOR_224							NET_MONITOR_LIST_BOX_ID_BEGIN+24
#define NET_MONITOR_225							NET_MONITOR_LIST_BOX_ID_BEGIN+25
#define NET_MONITOR_226							NET_MONITOR_LIST_BOX_ID_BEGIN+26
#define NET_MONITOR_227							NET_MONITOR_LIST_BOX_ID_BEGIN+27
#define NET_MONITOR_228							NET_MONITOR_LIST_BOX_ID_BEGIN+28
#define NET_MONITOR_229							NET_MONITOR_LIST_BOX_ID_BEGIN+29
#define NET_MONITOR_230							NET_MONITOR_LIST_BOX_ID_BEGIN+30
#define NET_MONITOR_231							NET_MONITOR_LIST_BOX_ID_BEGIN+31
#define NET_MONITOR_232							NET_MONITOR_LIST_BOX_ID_BEGIN+32
#define NET_MONITOR_233							NET_MONITOR_LIST_BOX_ID_BEGIN+33
#define NET_MONITOR_234							NET_MONITOR_LIST_BOX_ID_BEGIN+34
#define NET_MONITOR_235							NET_MONITOR_LIST_BOX_ID_BEGIN+35
#define NET_MONITOR_236							NET_MONITOR_LIST_BOX_ID_BEGIN+36
#define NET_MONITOR_237							NET_MONITOR_LIST_BOX_ID_BEGIN+37
#define NET_MONITOR_238							NET_MONITOR_LIST_BOX_ID_BEGIN+38
#define NET_MONITOR_239							NET_MONITOR_LIST_BOX_ID_BEGIN+39
#define NET_MONITOR_240							NET_MONITOR_LIST_BOX_ID_BEGIN+40
#define NET_MONITOR_241							NET_MONITOR_LIST_BOX_ID_BEGIN+41
#define NET_MONITOR_242							NET_MONITOR_LIST_BOX_ID_BEGIN+42
#define NET_MONITOR_243							NET_MONITOR_LIST_BOX_ID_BEGIN+43
#define NET_MONITOR_244							NET_MONITOR_LIST_BOX_ID_BEGIN+44
#define NET_MONITOR_245							NET_MONITOR_LIST_BOX_ID_BEGIN+45
#define NET_MONITOR_246							NET_MONITOR_LIST_BOX_ID_BEGIN+46
#define NET_MONITOR_247							NET_MONITOR_LIST_BOX_ID_BEGIN+47
#define NET_MONITOR_248							NET_MONITOR_LIST_BOX_ID_BEGIN+48
#define NET_MONITOR_249							NET_MONITOR_LIST_BOX_ID_BEGIN+49
#define NET_MONITOR_250							NET_MONITOR_LIST_BOX_ID_BEGIN+50
#define NET_MONITOR_251							NET_MONITOR_LIST_BOX_ID_BEGIN+51
#define NET_MONITOR_252							NET_MONITOR_LIST_BOX_ID_BEGIN+52
#define NET_MONITOR_253							NET_MONITOR_LIST_BOX_ID_BEGIN+53
#define NET_MONITOR_254							NET_MONITOR_LIST_BOX_ID_BEGIN+54
#define NET_MONITOR_255							NET_MONITOR_LIST_BOX_ID_BEGIN+55
#define NET_MONITOR_256							NET_MONITOR_LIST_BOX_ID_BEGIN+56
#define NET_MONITOR_257							NET_MONITOR_LIST_BOX_ID_BEGIN+57
#define NET_MONITOR_258							NET_MONITOR_LIST_BOX_ID_BEGIN+58
#define NET_MONITOR_259							NET_MONITOR_LIST_BOX_ID_BEGIN+59
#define NET_MONITOR_260							NET_MONITOR_LIST_BOX_ID_BEGIN+60
#define NET_MONITOR_261							NET_MONITOR_LIST_BOX_ID_BEGIN+61
#define NET_MONITOR_262							NET_MONITOR_LIST_BOX_ID_BEGIN+62
#define NET_MONITOR_263							NET_MONITOR_LIST_BOX_ID_BEGIN+63
#define NET_MONITOR_264							NET_MONITOR_LIST_BOX_ID_BEGIN+64
#define NET_MONITOR_265							NET_MONITOR_LIST_BOX_ID_BEGIN+65
#define NET_MONITOR_266							NET_MONITOR_LIST_BOX_ID_BEGIN+66
#define NET_MONITOR_267							NET_MONITOR_LIST_BOX_ID_BEGIN+67
#define NET_MONITOR_268							NET_MONITOR_LIST_BOX_ID_BEGIN+68
#define NET_MONITOR_269							NET_MONITOR_LIST_BOX_ID_BEGIN+69
#define NET_MONITOR_270							NET_MONITOR_LIST_BOX_ID_BEGIN+70
#define NET_MONITOR_271							NET_MONITOR_LIST_BOX_ID_BEGIN+71
#define NET_MONITOR_272							NET_MONITOR_LIST_BOX_ID_BEGIN+72
#define NET_MONITOR_273							NET_MONITOR_LIST_BOX_ID_BEGIN+73
#define NET_MONITOR_274							NET_MONITOR_LIST_BOX_ID_BEGIN+74
#define NET_MONITOR_275							NET_MONITOR_LIST_BOX_ID_BEGIN+75
#define NET_MONITOR_276							NET_MONITOR_LIST_BOX_ID_BEGIN+76
#define NET_MONITOR_277							NET_MONITOR_LIST_BOX_ID_BEGIN+77
#define NET_MONITOR_278							NET_MONITOR_LIST_BOX_ID_BEGIN+78
#define NET_MONITOR_279							NET_MONITOR_LIST_BOX_ID_BEGIN+79
#define NET_MONITOR_280							NET_MONITOR_LIST_BOX_ID_BEGIN+80
#define NET_MONITOR_281							NET_MONITOR_LIST_BOX_ID_BEGIN+81
#define NET_MONITOR_282							NET_MONITOR_LIST_BOX_ID_BEGIN+82
#define NET_MONITOR_283							NET_MONITOR_LIST_BOX_ID_BEGIN+83
#define NET_MONITOR_284							NET_MONITOR_LIST_BOX_ID_BEGIN+84
#define NET_MONITOR_285							NET_MONITOR_LIST_BOX_ID_BEGIN+85
#define NET_MONITOR_286							NET_MONITOR_LIST_BOX_ID_BEGIN+86
#define NET_MONITOR_287							NET_MONITOR_LIST_BOX_ID_BEGIN+87
#define NET_MONITOR_288							NET_MONITOR_LIST_BOX_ID_BEGIN+88
#define NET_MONITOR_289							NET_MONITOR_LIST_BOX_ID_BEGIN+89
#define NET_MONITOR_290							NET_MONITOR_LIST_BOX_ID_BEGIN+90
#define NET_MONITOR_291							NET_MONITOR_LIST_BOX_ID_BEGIN+91
#define NET_MONITOR_292							NET_MONITOR_LIST_BOX_ID_BEGIN+92
#define NET_MONITOR_293							NET_MONITOR_LIST_BOX_ID_BEGIN+93
#define NET_MONITOR_294							NET_MONITOR_LIST_BOX_ID_BEGIN+94
#define NET_MONITOR_295							NET_MONITOR_LIST_BOX_ID_BEGIN+95
#define NET_MONITOR_296							NET_MONITOR_LIST_BOX_ID_BEGIN+96
#define NET_MONITOR_297							NET_MONITOR_LIST_BOX_ID_BEGIN+97
#define NET_MONITOR_298							NET_MONITOR_LIST_BOX_ID_BEGIN+98
#define NET_MONITOR_299							NET_MONITOR_LIST_BOX_ID_BEGIN+99
#define NET_MONITOR_300							NET_MONITOR_LIST_BOX_ID_BEGIN+100

#define NET_MONITOR_307							NET_MONITOR_LIST_BOX_ID_BEGIN+107
#define NET_MONITOR_308							NET_MONITOR_LIST_BOX_ID_BEGIN+108

#define NET_MONITOR_LIST_BOX_ID_END				NET_MONITOR_LIST_BOX_ID_BEGIN+199


// 2.0UI [12/4/2010 zhangbaoliang]
#define NET_MONITOR_STR_ID_BEGIN				500
#define NET_MONITOR_STR_501						NET_MONITOR_STR_ID_BEGIN+1
#define NET_MONITOR_STR_502						NET_MONITOR_STR_ID_BEGIN+2
#define NET_MONITOR_STR_503						NET_MONITOR_STR_ID_BEGIN+3
#define NET_MONITOR_STR_504						NET_MONITOR_STR_ID_BEGIN+4
#define NET_MONITOR_STR_505						NET_MONITOR_STR_ID_BEGIN+5
#define NET_MONITOR_STR_506						NET_MONITOR_STR_ID_BEGIN+6
#define NET_MONITOR_STR_507						NET_MONITOR_STR_ID_BEGIN+7
#define NET_MONITOR_STR_508						NET_MONITOR_STR_ID_BEGIN+8
#define NET_MONITOR_STR_509						NET_MONITOR_STR_ID_BEGIN+9
#define NET_MONITOR_STR_510						NET_MONITOR_STR_ID_BEGIN+10
#define NET_MONITOR_STR_511						NET_MONITOR_STR_ID_BEGIN+11
#define NET_MONITOR_STR_512							NET_MONITOR_STR_ID_BEGIN+12
#define NET_MONITOR_STR_513							NET_MONITOR_STR_ID_BEGIN+13
#define NET_MONITOR_STR_514							NET_MONITOR_STR_ID_BEGIN+14
#define NET_MONITOR_STR_515							NET_MONITOR_STR_ID_BEGIN+15
#define NET_MONITOR_STR_516							NET_MONITOR_STR_ID_BEGIN+16
#define NET_MONITOR_STR_517							NET_MONITOR_STR_ID_BEGIN+17
#define NET_MONITOR_STR_518							NET_MONITOR_STR_ID_BEGIN+18
#define NET_MONITOR_STR_519							NET_MONITOR_STR_ID_BEGIN+19
#define NET_MONITOR_STR_520							NET_MONITOR_STR_ID_BEGIN+20
#define NET_MONITOR_STR_521							NET_MONITOR_STR_ID_BEGIN+21
#define NET_MONITOR_STR_522							NET_MONITOR_STR_ID_BEGIN+22
#define NET_MONITOR_STR_523							NET_MONITOR_STR_ID_BEGIN+23
#define NET_MONITOR_STR_524							NET_MONITOR_STR_ID_BEGIN+24
#define NET_MONITOR_STR_525							NET_MONITOR_STR_ID_BEGIN+25
#define NET_MONITOR_STR_526							NET_MONITOR_STR_ID_BEGIN+26
#define NET_MONITOR_STR_527							NET_MONITOR_STR_ID_BEGIN+27
#define NET_MONITOR_STR_528							NET_MONITOR_STR_ID_BEGIN+28
#define NET_MONITOR_STR_529							NET_MONITOR_STR_ID_BEGIN+29
#define NET_MONITOR_STR_530							NET_MONITOR_STR_ID_BEGIN+30
#define NET_MONITOR_STR_531							NET_MONITOR_STR_ID_BEGIN+31
#define NET_MONITOR_STR_532							NET_MONITOR_STR_ID_BEGIN+32
#define NET_MONITOR_STR_533							NET_MONITOR_STR_ID_BEGIN+33
#define NET_MONITOR_STR_534							NET_MONITOR_STR_ID_BEGIN+34
#define NET_MONITOR_STR_535							NET_MONITOR_STR_ID_BEGIN+35
#define NET_MONITOR_STR_536							NET_MONITOR_STR_ID_BEGIN+36
#define NET_MONITOR_STR_537							NET_MONITOR_STR_ID_BEGIN+37
#define NET_MONITOR_STR_538							NET_MONITOR_STR_ID_BEGIN+38
#define NET_MONITOR_STR_539							NET_MONITOR_STR_ID_BEGIN+39
#define NET_MONITOR_STR_540							NET_MONITOR_STR_ID_BEGIN+40
#define NET_MONITOR_STR_541							NET_MONITOR_STR_ID_BEGIN+41
#define NET_MONITOR_STR_542							NET_MONITOR_STR_ID_BEGIN+42
#define NET_MONITOR_STR_543							NET_MONITOR_STR_ID_BEGIN+43
#define NET_MONITOR_STR_544							NET_MONITOR_STR_ID_BEGIN+44
#define NET_MONITOR_STR_545							NET_MONITOR_STR_ID_BEGIN+45
#define NET_MONITOR_STR_546							NET_MONITOR_STR_ID_BEGIN+46
#define NET_MONITOR_STR_547							NET_MONITOR_STR_ID_BEGIN+47
#define NET_MONITOR_STR_548							NET_MONITOR_STR_ID_BEGIN+48
#define NET_MONITOR_STR_549							NET_MONITOR_STR_ID_BEGIN+49
#define NET_MONITOR_STR_550							NET_MONITOR_STR_ID_BEGIN+50
#define NET_MONITOR_STR_551							NET_MONITOR_STR_ID_BEGIN+51
#define NET_MONITOR_STR_552							NET_MONITOR_STR_ID_BEGIN+52
#define NET_MONITOR_STR_553							NET_MONITOR_STR_ID_BEGIN+53
#define NET_MONITOR_STR_554							NET_MONITOR_STR_ID_BEGIN+54
#define NET_MONITOR_STR_555							NET_MONITOR_STR_ID_BEGIN+55
#define NET_MONITOR_STR_556							NET_MONITOR_STR_ID_BEGIN+56
#define NET_MONITOR_STR_557							NET_MONITOR_STR_ID_BEGIN+57
#define NET_MONITOR_STR_558							NET_MONITOR_STR_ID_BEGIN+58
#define NET_MONITOR_STR_559							NET_MONITOR_STR_ID_BEGIN+59
#define NET_MONITOR_STR_560							NET_MONITOR_STR_ID_BEGIN+60

#define NET_MONITOR_STR_ID_END					NET_MONITOR_STR_ID_BEGIN+299


#define SYS_PERFORMANCE_STR_BEGIN						800

#define SYS_PERFORMANCE_STR_801							SYS_PERFORMANCE_STR_BEGIN+1
#define SYS_PERFORMANCE_STR_802							SYS_PERFORMANCE_STR_BEGIN+2
#define SYS_PERFORMANCE_STR_803							SYS_PERFORMANCE_STR_BEGIN+3
#define SYS_PERFORMANCE_STR_804							SYS_PERFORMANCE_STR_BEGIN+4
#define SYS_PERFORMANCE_STR_805							SYS_PERFORMANCE_STR_BEGIN+5
#define SYS_PERFORMANCE_STR_806							SYS_PERFORMANCE_STR_BEGIN+6
#define SYS_PERFORMANCE_STR_807							SYS_PERFORMANCE_STR_BEGIN+7
#define SYS_PERFORMANCE_STR_808							SYS_PERFORMANCE_STR_BEGIN+8
#define SYS_PERFORMANCE_STR_809							SYS_PERFORMANCE_STR_BEGIN+9
#define SYS_PERFORMANCE_STR_810							SYS_PERFORMANCE_STR_BEGIN+10
#define SYS_PERFORMANCE_STR_811							SYS_PERFORMANCE_STR_BEGIN+11
#define SYS_PERFORMANCE_STR_812							SYS_PERFORMANCE_STR_BEGIN+12
#define SYS_PERFORMANCE_STR_813							SYS_PERFORMANCE_STR_BEGIN+13
#define SYS_PERFORMANCE_STR_814							SYS_PERFORMANCE_STR_BEGIN+14
#define SYS_PERFORMANCE_STR_815							SYS_PERFORMANCE_STR_BEGIN+15
#define SYS_PERFORMANCE_STR_816							SYS_PERFORMANCE_STR_BEGIN+16
#define SYS_PERFORMANCE_STR_817							SYS_PERFORMANCE_STR_BEGIN+17
#define SYS_PERFORMANCE_STR_818							SYS_PERFORMANCE_STR_BEGIN+18
#define SYS_PERFORMANCE_STR_819							SYS_PERFORMANCE_STR_BEGIN+19
#define SYS_PERFORMANCE_STR_820							SYS_PERFORMANCE_STR_BEGIN+20
#define SYS_PERFORMANCE_STR_821							SYS_PERFORMANCE_STR_BEGIN+21
#define SYS_PERFORMANCE_STR_822							SYS_PERFORMANCE_STR_BEGIN+22
#define SYS_PERFORMANCE_STR_823							SYS_PERFORMANCE_STR_BEGIN+23
#define SYS_PERFORMANCE_STR_824							SYS_PERFORMANCE_STR_BEGIN+24
#define SYS_PERFORMANCE_STR_825							SYS_PERFORMANCE_STR_BEGIN+25
#define SYS_PERFORMANCE_STR_826							SYS_PERFORMANCE_STR_BEGIN+26
#define SYS_PERFORMANCE_STR_827							SYS_PERFORMANCE_STR_BEGIN+27
#define SYS_PERFORMANCE_STR_828							SYS_PERFORMANCE_STR_BEGIN+28
#define SYS_PERFORMANCE_STR_829							SYS_PERFORMANCE_STR_BEGIN+29
#define SYS_PERFORMANCE_STR_830							SYS_PERFORMANCE_STR_BEGIN+30
#define SYS_PERFORMANCE_STR_831							SYS_PERFORMANCE_STR_BEGIN+31
#define SYS_PERFORMANCE_STR_832							SYS_PERFORMANCE_STR_BEGIN+32
#define SYS_PERFORMANCE_STR_833							SYS_PERFORMANCE_STR_BEGIN+33
#define SYS_PERFORMANCE_STR_834							SYS_PERFORMANCE_STR_BEGIN+34
#define SYS_PERFORMANCE_STR_835							SYS_PERFORMANCE_STR_BEGIN+35
#define SYS_PERFORMANCE_STR_836							SYS_PERFORMANCE_STR_BEGIN+36
#define SYS_PERFORMANCE_STR_837							SYS_PERFORMANCE_STR_BEGIN+37
#define SYS_PERFORMANCE_STR_838							SYS_PERFORMANCE_STR_BEGIN+38
#define SYS_PERFORMANCE_STR_839							SYS_PERFORMANCE_STR_BEGIN+39
#define SYS_PERFORMANCE_STR_840							SYS_PERFORMANCE_STR_BEGIN+40
#define SYS_PERFORMANCE_STR_841							SYS_PERFORMANCE_STR_BEGIN+41
#define SYS_PERFORMANCE_STR_842							SYS_PERFORMANCE_STR_BEGIN+42
#define SYS_PERFORMANCE_STR_843							SYS_PERFORMANCE_STR_BEGIN+43
#define SYS_PERFORMANCE_STR_844							SYS_PERFORMANCE_STR_BEGIN+44
#define SYS_PERFORMANCE_STR_845							SYS_PERFORMANCE_STR_BEGIN+45
#define SYS_PERFORMANCE_STR_846							SYS_PERFORMANCE_STR_BEGIN+46
#define SYS_PERFORMANCE_STR_847							SYS_PERFORMANCE_STR_BEGIN+47
#define SYS_PERFORMANCE_STR_848							SYS_PERFORMANCE_STR_BEGIN+48
#define SYS_PERFORMANCE_STR_849							SYS_PERFORMANCE_STR_BEGIN+49
#define SYS_PERFORMANCE_STR_850							SYS_PERFORMANCE_STR_BEGIN+50

#define SYS_PERFORMANCE_STR_END						SYS_PERFORMANCE_STR_BEGIN+299

#define CTRL_ID_NETMON_FORBID_BEGIN					1000

#define IDC_BTN_FORBID_DLG_OK						CTRL_ID_NETMON_FORBID_BEGIN+1
#define IDC_BTN_FORBID_DLG_CANCEL					CTRL_ID_NETMON_FORBID_BEGIN+2
#define IDC_TXT_FORBID_INFO							CTRL_ID_NETMON_FORBID_BEGIN+3
#define IDC_CHECK_REMEMBER_FORBID					CTRL_ID_NETMON_FORBID_BEGIN+4
#define IDC_BTN_FORBID_DLG_CLOSE					CTRL_ID_NETMON_FORBID_BEGIN+5