#ifndef __Globaldef_H
#define __Globaldef_H


/*
0时，不去掉仿真器，外部可以读出stm32内容
1时，去掉了仿真器，外部不可读stm32内容
建议只是正式发布时 = 0
*/
#define def_debug_mode			(1)


//取消开机注册等操作，默认0,即执行开机注册
#define _Disable_Register		(0)

//关闭远程升级，默认0
#define _Disable_Update			(0)


//使能断线就启动鉴权，默认1
//1 使能，0不使能
#define _Enable_AuthMul			(1)


//byleo 使能看门狗，默认1
#define _Enable_WTD					(1)


//使用域名联网时，需要 = 1 ,同时需要dbug_APN_def = 1，默认0
#define QIDNSIP_DEF					0

//自己定义IP和端口，用于调试，默认0
#define dbug_net_def 				0



//#define dbug_IP1_def 		"139.129.11.215"	//me test
//#define dbug_Port1_def 	 	"5300" 					//me

 
#define dbug_IP1_def 		"124.251.29.74"	//me test
#define dbug_Port1_def 	 	"1340" 					//me



//#define dbug_IP1_def 		"101.200.196.118"	//gao zhi win test
//#define dbug_Port1_def 	 	"5300" 					//gaozhi
//#define dbug_Port1_def 	 	"50002" 			//gaozhi

//#define dbug_IP1_def 		"123.57.233.29"	//gao zhi linux
//#define dbug_Port1_def 	 	"50002" 			//gaozhi

//#define dbug_IP1_def 		"elec.wicp.net"	//me
//#define dbug_Port1_def 	 	"56029" 			//me


//#define dbug_IP1_def 		"xxfengxia.6655.la"	//
//#define dbug_Port1_def 	 	"11601" 			//
//#define dbug_IP1_def 		"z1021256354.imwork.net"	//zhn
//#define dbug_Port1_def 	 	"16281" 			//zhn



#define dbug_IP2_def 		dbug_IP1_def	
#define dbug_Port2_def 	 	dbug_Port1_def


//使用特殊APN，默认0
//UC20-默认1，GC65和M12D-默认0
#define dbug_APN_def 				0


//长春神州行手机卡可以，估计是定制的卡
//测试长春的卡可以，测试公司的卡，初始化时，到AT+CMGD=1,4  +CMS ERROR: 3
//公司卡可以了，短信删除部分该代码了
//#define dbug_APN_Str_def 	"AT+QIREGAPP=\"CMNET\"\r\n\x0\x0"
//#define dbug_SGP_Str_def 	"AT+QICSGP=1,\"CMNET\"\r\n\x0\x0"


//测试长春的卡可以，测试公司的卡，初始化时，到AT+CMGD=1,4  +CMS ERROR: 3
//gc65 移动
//#define dbug_APN_Str_def 	"AT+QIREGAPP=\"CMNET\",\"CMNET\",\"CMNET\"\r\n\x0"
//#define dbug_SGP_Str_def 	"AT+QICSGP=1,\"CMNET\",\"CMNET\",\"CMNET\"\r\n\x0"

//uc20 联通
#define dbug_APN_Str_def 	"AT+QIREGAPP=\"UNINET\",\"\",\"\"\r\n\x0"
#define dbug_SGP_Str_def 	"AT+QICSGP=1,1,\"UNINET\",\"\",\"\",1\r\n\x0"			//移远技术支持建议2G和3G都使用这个
//#define dbug_SGP_Str_def 	"AT+QICSGP=1,1,\"3GNET\",\"\",\"\",1\r\n\x0"



//#define dbug_APN_Str_def 	"AT+QIREGAPP=\"xastjjzd.sn\",\"TEST\",\"TEST\"\r\n\x0"
//#define dbug_SGP_Str_def 	"AT+QICSGP=1,\"xastjjzd.sn\",\"TEST\",\"TEST\"\r\n\x0"




//使能调试串口输出，默认0
#define _En_Debug_Prt				(0)

//通过外部串口1，输入z字母，输出所有区域相关的地址和数据
#define def_debug_zone_flash		(0)

#define _En_GPRS_debug			(0)
#define _En_Tim1_debug			(0)
#define _En_FM_debug				(0)
#define _En_Flash_debug			(0)
#define _En_MessAdr_debug		(0)
#define _En_PicAdr_debug		(0)
#define _En_GPS_debug				(0)
#define _En_regular_roboot	(0)
#define _En_OverTimeDrive		(0)
#define _En_AreaZoneDebug		(0)
#define  obd_uart_debug			(0)		//OBD uart 
#define IB_uart_debug				(0)		
#define  BT_uart_debug			(0)
#define _En_SetPara_debug   (0)
#define _En_debug_AES128    (0)
#define _En_debug_BKP       (0)
#define _En_debug_Tkeys     (0)
#define __En_debug_LIS3DH   (0)

//时钟只能选一个，针对戴姆勒项目,后KP（161212）盒子去掉8025，改用内部,设备ID应该都是1612xxxx
#define _En_RTC_def         (1)   //内部rtc
#define _En_RX8025_def      (0)   //外部rtc
#define _En_NORTC_def       (1)   //KP盒子没有电池和8025,和_En_RTC_def内部时钟配合使用


//使用串口3输出 身份证信息
#define testID 				0


//如果使能=1，则刷设置卡不能改动IP和APN能
// =0 可以使用设置卡，设置APN等项，默认0
#define dbug_NotUse_SetCard_IP_def 		0


//使用哪里的APN和IP就使能哪一个，都使能，只有一个起作用，默认都是0
#define dbug_XI_AN_APN_IP_def 		0	//西安ANP
#define dbug_Self_APN_IP_def 			0	//公司内部

//默认0
#define dbug_gps_ant							0
//默认0
#define dbug_gps_sp								0

//gps 使用加速度滤波速度，默认0
#define def_gps_use_g_filter			0

//gps 使用速度滤波  默认1
#define def_gps_use_sp_filter			0		//原来默认带过滤坐标，这一版本是测试专用的

//GPS 把错误问题上报给服务器,默认0
#define def_gps_debug_sp_filter		0

//LIS3DH加速度传感器是否使用；
#define def_use_LIS3DH            1

/////
#define  SleepOrBatMag            1      //休眠和电池调试部分；

#if _En_Debug_Prt
#if	def_debug_zone_flash
void deal_debug_flash_zone(void);
#endif
#endif


//因为有无故开门的事情，所以把OBD的所有报文都，默认0
#define debug_obd_to_server		         0

//油车、电车的区分
#define def_CarType_sp				         1		//1:油车 0：电车

//定义使用的车型,只能使能一个，暂时这样定义，以后如果车型太多了，可能会比较复杂
//并且会使使用的RAM增加
//只能使用一个 = 1
#define def_use_EC180                  0   //（电车）北汽EC180CAN总线截取数据；和def_CAN_Vehicle配合使用,长安奔奔EV，知豆D2S
#define def_use_PST                    0   //（油车+混动）passatCAN总线截取数据；和def_CAN_Vehicle配合使用, 逸致，凯美瑞  汉兰达,卡罗拉，雅阁
#define def_use_E150				           0		//北汽E150、160、200,smart，E6 E5，晨风E30,20160926众泰E200，君越10款也可用此项,大通EV80，长安逸动EV,知豆D2/D2S,帝豪EV，轩逸,阳光,雷凌；
#define def_use_smart				           0		//smart,特殊地方，区别于E150，该项使能时def_use_E150必须为1，临时去掉了自动落锁
#define def_use_MAXUS                  0    //大通EV80特殊部分(K线采集延时较大)，使能该项，def_use_E150也要使能；
#define def_use_GTYD                   0    //长安逸动EV,该项使能时，def_use_E150使能，后OBD调整，逸动只用E150使能，该项默认0；
#define def_use_D70                    0    //北汽D70，车锁状态读不到；该项使能时，def_use_E150使能；
#define def_use_YueD                   0    //现代悦动，OBD采用K线方式，def_use_E150使能,起亚K2,瑞纳油量用该项，控制用江淮,雷凌油车用该项；
#define def_ZD2_sp                     0     //知豆D2，锁门以后再查一遍状态
#define def_JLDH_sp                    0    //吉利帝豪临时去掉后备箱检测；
#define def_use_E150_sp                0    //北汽系列熄火静止以后不再查状态了；
#define def_ZD2_sp2                    0    //知豆D2锁状态变化慢的问题，开关门成功以后，串口直接发一条闪灯指令 
#define def_leiling_ACC                0    //雷凌ACC用AD2采集；知豆D2智享版ACC采集AD2,锋范线控采集ACC-AD2
#define def_use_CANEQ1                 0    //小哥先锁门后升窗，暂时放在锁门命令字8中；

#define def_use_gl8_sp								 0			//GL8 特殊的地方，无法读出车锁状态,def_use_E150为1；

#define def_use_ZT_200			           0		//众泰E200-OBD之前破解控制不了开关门，后来又可以了，故此加了这一项，以后不用了

//服务器询问后，E150=1自动锁车，其它E6=0、smart=0不执行锁车,E150出现后备箱开的情况
#define def_use_E150_lock_after_ask		 0

#define def_use_JH_JVC			           1			  //后面记得IEV4和IEV5车灯检测正相反,暂时腾势和江淮放一起，OBD都控制不了开关门和鸣笛,江铃,众泰100s也是这一项(逸动OBD控制不好使，改线控)
#define def_use_GW_YD                  1        //传祺GA5，线控开关门和江淮一致，该项使能时江淮项使能，长安逸动后破解不用线控的，和E150相同，以后不用这项(逸动OBD控制不好使，改线控)；
#define def_use_JL_E200                0        //江铃200，如果这一项为1，def_use_JH_JVC江淮的选项也为1
#define def_use_JH_iev6                0        //该项使能时，def_use_JH_JVC为1，针对iev6新车,后找门感线和后备箱线，该项不在用，默认0
#define def_JL_ACC_sp                  0        //江铃100,江铃E200，用AD2做线控ACC采集；
#define def_YL_EV2                     0        //裕路EV2，用APP执行开关门锁 车锁状态读不到 后备箱开关没有门感应开关锁状态和门状态都没有，接门感，OBD开关门；该项使能，def_use_JH_JVC使能；
#define def_ruina_locksta              0        //瑞纳锁状态用AD2采集，def_use_JH_JVC使能；
#define def_ruina_ACCsta               0        //瑞纳ACC状态用AD3采集,如果obd采不到用该项，def_use_JH_JVC，def_ruina_locksta使能；
#define def_YLEV2_locksta              0        //裕路锁状态用AD4采集；
#define def_JH_ACC_sp                  0        //江淮iev5（巴哥）ACC状态采不到，用AD2采集；


#define def_use_QiruiEQ			           0			//奇瑞EQ
#define def_use_QiruiEQ_sp             0      //奇瑞EQ后找线，不用在断开中控了，兼容原来断中控方式，可选；
#define def_use_QiruiEQ_NCT            0       //奇瑞EQ整改开门之前先锁门，锁门之前先开门；
#define def_use_xiaomayi               0      //奇瑞小蚂蚁用AD2做后备箱感应线,ADC采集；
#define def_xiaomayi_Win               0      //小蚂蚁升窗操作(用康迪鸣笛供电部分IO2)；
#define def_xiaomayi_lock              0      //小蚂蚁线控锁状态采集（开锁4.7V，锁0V），用AD1检测ADC采集；
#define def_xiaomayi_ACC               0      //小蚂蚁线控ACC状态采集,(AD3)
#define def_use_xiaomayi_FT            0      //飞兔先升窗后锁门，暂时放在锁门命令字8中；
#define def_QiruiEQ_ACC			           0			//奇瑞EQ-ACC用AD2采集；

#define def_use_ZT_301			           0			//众泰知豆301B 301C,康迪也是选择这一项=1，云100也选这项，但是 知豆D2破解之后该项默认0
#define def_ZD_lock_sp                 0      //知豆D2锁门特殊处理，用康迪鸣笛的引脚控制锁门继电器；鸣笛不变，原锁门线做门感触发ECU	,具体车型按需求选择
#define def_KD_Nctldoor                0     //康迪门控线新找的，故此加一个新定义，要求def_use_ZT_301=1,此项为1时，类似于江淮拉低开关门；开门前先锁门，锁门前先开门
#define def_KD_Nctlkey                 0     //K10新的中控锁 ,def_use_ZT_301,def_KD_Nctldoor 使能
#define def_use_ZT_D1                  0     //def_use_ZT_301为1；知豆D1OBD上传的多了十倍，所以暂时用一个版本，以后OBD修改以后可不用；
#define def_ZD_ACC_sp                  0     //知豆D1有款车ACC状态都不到，改成线检测方式,临时用iev4示宽灯脚；
#define def_ZD_2D_sp                   0     //知豆D2一雄新破解状态可以，动作也可以,类似E150，该项不用，默认0；
#define def_KD_ACC_sp                  0     //康迪K10有一批车OBD采不到ACC状态，用AD2做线控ACC采集；

#define def_use_BYD_F3			           0			//BYD F3
#define def_use_ShiPao_sp              0      //狮跑暂时把车锁状态线去掉

#define def_use_passt				           0			//passt 使用遥控钥匙控制开锁和锁车
#define def_passt_keyL                 0      //passat钥匙拉低动作；默认0：供电动作,14款

#define def_use_buick                  0    //别克君越使用遥控钥匙开锁锁车
#define def_use_buick_sp               0    //君越10款锁状态读取不到，用OBD控制开关门鸣笛,此项为1，def_use_E150也应该为1；

#define def_kangdi_spk			           0			//def_use_ZT_301 =1, 这个也=1，则是给康迪使用的，鸣笛需要特殊照顾；兼容之前安装的康迪和知豆鸣笛；后来找线以后这一项默认0；
#define def_K2_spk                     0      //起亚K2鸣笛单独，def_use_YueD使能；

#define EN_TLD_define                  0    //通利达要求，只有定位和通信，ACC检测用车门和后备箱的检测口（PE9），

/****由于某些车型OBD读取的剩余续航里程有误，故此加一个宏强制上报的续航为0**********/
#define def_use_carLeftKM_Zero         0    //强制续航为0  剩余续航里程(康迪+奇瑞+江淮+众泰) 江铃E200知豆可以读取
#define def_use_SOC_Zero               0    //强制剩余电量为0

//针对byd F3的油车，油量采集不同划分的一个宏，北京这边的F3和柳州的F3不同；
#define def_use_BYD_F3_bj              0     //设置该项时，def_use_BYD_F3必须有效
#define def_use_BYD_F3_lz              0     //设置该项时，def_use_BYD_F3必须有效

//悦动增加油量检测,需要同时 def_use_YueD = 1
#define def_use_YueD_OilAdc						 0
//起亚k2油量检测，类似悦动；满油43L
#define def_use_K2_OilAdc						   0
//现代瑞纳油量检测，43L
#define def_use_ruina_OilAdc           0
//雷凌(油车)--油量对应关系表暂不能用，需要调整171128
#define def_use_leiling_OilAdc         0//满箱油53L
//锋范 40L 使用ADC采集油量，需要同时使能def_use_E150 = 1； def_use_YueD = 1
#define def_use_fengfan_OilAdc           0

//CAN模式下油量用ADC采集，如需要该项使能，同时def_use_EC180和def_CAN_Vehicle也使能；
#define def_use_CAN_AdcOil               0
//帅客CAN模式下油量用ADC采集，如需要该项使能，同时def_use_CAN_AdcOil，def_use_PST和def_CAN_Vehicle也使能；
#define def_use_shuaike_OilAdc           0
//北京现代朗动汽车CAN模式下油量用ADC采集，如需要该项使能，同时def_use_CAN_AdcOil，def_use_PST和def_CAN_Vehicle也使能；
#define def_use_langdong_OilAdc          0
//别克凯越汽车CAN模式下油量用ADC采集，如需要该项使能，同时def_use_CAN_AdcOil，def_use_PST和def_CAN_Vehicle也使能；
#define def_use_Excelle_OilAdc           0
//东风A60汽车CAN模式下油量用ADC采集，如需要该项使能，同时def_use_CAN_AdcOil，def_use_PST和def_CAN_Vehicle也使能；
#define def_use_DFA60_OilAdc             0

//熊总新方案，暂时在瑞纳上调试，如果没问题，会推广所有新车型使用
//按油量和电流成正比方式计算
#define useCurrentCoilCalc							 0
//为了测试原始值，把经纬度的高度和方向，改成上报测试值，默认=0
#define useCurrentCoilCalcDebug					 0

//酒精检测-用AD3输入，暂时只给巴哥用
#define def_detectAlcoholInf             0
//酒精检测-映射到AD1；该项使能时，def_detectAlcoholInf使能；
#define def_detectAlcoholInf_EX          0

//比亚迪E6没有N，停车时P档，导致无法锁车，该项 = 1，则锁车不检测N档，实际E160，这样也可以。
// passt = 1
//E150 = 0
//iev4 = 1
//smart = 1
//eq = 0
//知豆301 = 1
#define def_not_detect_GearN			        1					//0判断N档才能锁车；1不判断N档


//#define def_use_km_percent			(17500/10)		//E30 175km		东风启辰E30
//#define def_use_km_percent			(15000/10)	//E150 150km
//#define def_use_km_percent			(16000/10)	//E160 160km
//#define def_use_km_percent			(20000/10)	//E200 240km


//使用空车牌，只有北汽的E150才可以使用Ep（空车牌）
//增加奇瑞 EQ可以用
//passt可以有空车牌
#define def_use_Ep					              0



//因为江淮的车出现这样一个问题，就是4个锁车灯都灭的时候，有时会出现检测车门关，不准确
//这时就会造成无法关门，后领导建议，检测到车门未关，也执行锁车操作
//#if (def_use_JH_JVC || def_use_BYD_F3)
	#define Always_lock_def		              1
//#endif

//E150 手动控制点火和熄火，同时OBD支持该版本
//熊总说IEV4和 EQ的一样
#if (def_use_E150 || def_use_QiruiEQ || def_use_JH_JVC)
#define Manual_Engine				              0
#endif



//下面这些项，是卡相关的

//下面这两个宏定义，只能使用1个 
#define USE_ID_MODULE				              0				//使用身份证读卡模块
//先使用FM1722读取TypeB是否存在，之后再启动身份证读卡模块
//如果不使用身份证，则=0.
#define FirstRdTypeBUID			            	0			//刷身份证时，该项=1，其它都=0


#define USE_RF1702_BD				              0 				//使用RF1702读取MF1
#define USE_CARKEY_MF				              0				//钥匙绑卡，包括白卡上报和服务器写卡，正常卡插卡上报


#define def_write_mf_card			            0			//定义使用远程写身份证卡，需要USE_RF1702_BD = 1
#define USE_MF_WITH_DATE		              0					//1：MF1刷卡带日期格式的； 0不带日期格式的,远程写卡



//之前写的程序都是在“ XUESHI_MAIN_20140610 ” 上面，
//后来因为有600套老板子库存，所以在老板子上改写程序驱动IO
#define USE_XUESHI_MAIN_20140610_BD				0 				//新学时主板
#define USE_XUESHI_600_Version						0					//老学时主板
#define USE_XUESHI_RentV3									1					//新租车虎年主板
#define USE_SMART_BOARD_SP								0					//为smart定制的主板，增加了防拆

//熊总要求手机短信可以下订单
#define Sp_SMS_Order_def									0


//定义使用不同的模块
#define defUseM12D						            1				//使用M12D时只有此项=1，另外使用M26时此项=1
#define defUseUC20						            0				//使用3G时=1，另外使用EC20时=1
#define defUseGC65_DTR				            1 			//GC65 DTR控制，GC65=1；UC0 = 0 M12D = 1.
#define defUseEC20						            0				//移远4G模块，需要同时使能defUseUC20 = 1，defUseEC20_DTR = 1
#define defUseM26													1				//要求defUseM12D = 1；defUseGC65_DTR = 1
#define defUseEC20_DTR										0				//EC20低功耗，如果使用EC20，此项=1，UC20时此项=0



//增加熊总刷身份证直接生成订单，默认0
//#define genSpecialOrder_def		0



//下面这两项，仅为了配合测试
//在没有外接OBD时，为了配合系统测试，模拟OBD串口返回的数据,默认0
#define use_sim_obd					        0		//默认0
#define use_sim_location		        0		//GPS 定位，使用固定经纬度，默认0


//使用OBD的速度做系统速度，涉及疲劳驾驶，位置信息上报，行驶里程统计，默认1
//比亚迪F3=0，BYD E6 = 1，E5 = 0，奇瑞部分；
//can能获得速度；
//K2和瑞纳无OBD速度,凯越，iev6E17款,标志4008,D2乐享，舒驰
#define def_use_obd_speed				    1
//是否解析GSA信息，定位模式2D/3D,以及PDOP定位精度，默认0，如有需要可以使能；
#define def_use_gps_PDOP            1
//是否解析GSV信息，卫星数和有效卫星数；如有需要使能该项；
#define def_use_gps_GSV             1
//到站点熄火无速度以后，还有十分钟时间(30S)定位是有效的，多次采集这十秒内算平均（点之间不超过20），结合存储的区域判断，之后周期性定位的信息不再参与位置信息上报；只有离开站点以后GPS速度大于20公里以上才开始上报有效信息（托运轨迹）
#define def_gps_sp_filter			      1		//
// 周期新定位以后前九个点均值加后一个点除以10算均值上报；def_gps_sp_filter使能
// 针对V53-S定位流程，该项为0
#define def_gps_filter9and1         0
//GPS如果用泰斗303，内置天线检测部分，增加该项定义，4G设备开始用
#define def_use_TDant_det           0

//11 租车要求服务器下发命令，可以控制汽车的ACC
//这个和空车牌IO复用的，只能有一个起作用
#if (!(def_use_Ep))
#define def_ctrl_ACC						    1

//=1时，代表有订单时自动闭合继电器，没订单时自动断开继电器
//德国检测smart auto_off=1，auto_on = 0；其它都=0
//20161114博达EQ和EV160增加这个功能
#define def_ACC_auto_on						  0		//1：下订单时自动上电
#define def_ACC_auto_off						0 	//1：结束订单后，自动断电
//EQ新要求：开门是继电器上电；关门时继电器断电（无速度+熄火）
#define def_ACC_on_when_op          1   //1:开门上电
#define def_ACC_off_when_cl         1   //1:关门断电
//特殊情况使用，断电条件满足以后10min后主动断电；默认为1，如不需要为0；
#define def_ACC_off_sp              0

#endif


//使用蓝牙，只有新学时才有蓝牙，老学时没有调试
#define useBlueTooth						    1   //用宝驾蓝牙机制，该项为1
#define def_enable_BT_Cipher		    0		//是否加密，默认1,以后不用
#define useBlueTooth_LP             0   //蓝牙省电控制，默认0不用，设想是无订单时使能；以后不用

#define useBlueIBeacon					    0 	//ibeacon

//passt = 1； BYD F3 = 1；BYD E6 E5 = 1
//知豆301 2014款 = 1，无法获取总里程
//云100，不使用GPS计算总里程
//passt 有一个貌似没焊接铁电
//康迪K10也需要设置里程,吉利知豆D1
//江铃也许设置
//悦动里程GPS统计,起亚K2,瑞纳
//众泰260，230，凯越,雷凌(油车) ,A60,37座大巴
#define BYD_E6_SetKM						    0	// 设置总行使里程 单位百米, 
#define BYD_E6_SetKM_FRAM			    	0	//1时，使用铁电，0时使用外部Flash


//IEV4，使用租车主板，使用AD4，检测示宽灯状态
#define USE_AD4_DetectLight					0
//iev4=0;iev5 = 1; 因为示宽灯检测正好相反
#define IEV4_RESET0_IEV5_SET1				0


//比亚迪E5和E6,默认可以去掉大灯检测功能=0，其它=1
//如果此项=0，USE_AD4_DetectLight也不起作用
//此项只指锁车时不判断，但是位置信息上报中还要存在
//GL8 =1 
#define UseLightDetect							1
//GE3区分所有灯光；开锁以后位置灯会亮，锁门时位置灯屏蔽，其余灯光正常判断
//EU260
#define LocalLightFil               0

//默认1
#define UpdateGPS_TheLast			 			1			//1 表示gps不定位时，上报最后一次经纬度等，


//smart = 1，其它=0
#define 	smart_wire_spk						0			//smart 使用线控鸣笛

//smart 要求锁车或开锁时，车灯闪烁=1
//快兔定制的车型程序，要求使能该选项iev5、BYD E6、EV200
//其它车型 = 0
#define LockWithLight								0

//一度北汽出现锁门失败鸣笛，暂时把鸣笛去掉，保留闪灯；
//芒果也是这项
#define LockfailOnceLight						0

//芒果寻车也只闪灯，鸣笛暂时去掉,服务器可以只下发闪灯的；
#define FindOnceLight						    0
//smart要求下订单后，自动开锁，增加一个特殊定义的宏
//要求下订单后自动开锁的=1，其它默认=0

#define auto_unlock_when_order_download		   0



//锁车时判断点火=1,CAN数据也用该项判断点火
//众泰2014款知豆301 = 0，
//奇瑞EQ = 0，据说熄火后半小时才算熄火成功
//其它车型都 = 1
//江铃100没有OBD，没有状态；
#define 	def_ACC_USE					    1
//车窗检测
#define UseWindowDetect           0
//车身其它电器状态检测 
#define UseOtherBodyDetect        0


//天津钥匙绑卡iev4，有一台无法检测到锁车，规定发现卡，则可以执行锁车。
//属于特殊定制版本需要，默认=0
#define def_not_detect_acc				0


//没定单时，自动锁车
//奔驰以后正式版smart=1，测试版=0，其它暂时都=0
//熊总的E160 = 1，腾势；
//小蚂蚁如果锁成功一次之后，锁开了，再锁一次；
#define def_auto_lock_car					0

//原来程序自动锁车的一段函数，建议以后都去掉，默认=0
#define def_sp_lock_car_use				0


//2秒查一次OBD状态，
//因为smart关门不上报动作，导致无法自动锁门，现在改成全速查询
#define always_chk_obd						0


//鸣笛原因上报使能，默认0
//#define def_reasonforSPK        0


//奇瑞EQ增加手刹上报给服务器
//其它车型=0；该项和BYD F3定义的锁车检测冲突，不能共存
//iev4 也可以增加手刹了
#define hand_brake_use		        0



//通过OBD串口修改终端ID，修改完如果需要重启设备置1，不需要默认0
#define need_systemReset          0

//增加flash加密部分，默认0，不用加密
#define _En_flashCode             0

//奔驰特殊要求，不能回厂，远程加密涉及到参数表，增加特殊要求设置，1先读明文参数表，后再加密；，0先读密文参数表，后再解密(参数表和终端ID)
#define  def_BenzSpecial          0
#define  def_BenzSpecial_NO       0 //如果_En_flashCode为0，原来加密的内容解密以后全是明文，初始化参数表时解密成明文,默认1

//这个最早使用的XXTEA，
#define use_crypt_package		      0		//1和服务器通信报文加密；0不加密
//增加第二期AES
#define use_crypt_aes_add					0	//第二次加解密，要求同时use_crypt_package = 1
//备份寄存器使能
#define use_stm32_BKP             0   //使能stm32的备份寄存器，


//断电上电后，使用历史数据
#if (USE_XUESHI_RentV3 || USE_SMART_BOARD_SP)
#define use_history_data		      1
//新模块中，用铁电1s存储一条定位信息；
#define use_Lhistory_data         1
#endif


//用于实时检测车门状态，由硬件IO检测，发现车门变化，马上改变对应的OBD结果值
//smart2012, 此项=1
//其它车型=0
#define def_chk_car_door		      0

//1代表使用加密协议的OBD，0使用原来不加密的OBD协议
#define def_use_crypt_obd					0


//当点火状态或充电状态时才保存剩余续航里程，防止OBD误报-针对EQ
//EQ特殊，按熊总要求，使用固定里程 151 * soc 换算出充电时里程
//其它车型也可以使能该功能
#define   def_left_km_acc_on		  0

//1度要求，使用带续航里程上报的OBD，把续航里程除以180，换算成百分比上报给后台，
//即忽略OBD读取的SOC，自己计算一个使用。
#define 	def_soc_calc_by_leftKm	0		//EQ要求 def_left_km_acc_on = 1


//使用触摸按键
#define def_use_touchKey		0
//RSA通信蓝牙
#define def_RSA_BLE         1      //宝驾蓝牙模式，该项为1和useBlueTooth配合使用
//CAN通信整合到主流程中，增加一个宏先做区分；
#define def_CAN_Vehicle     0
//车身电池信息采集部分；
//暂时只有走CAN的模式才有该项，并且分具体车型而定；
#define def_VehicleCellInf   0     //该项使能时，def_CAN_Vehicle为1并且区分具体车型；

//开锁时，把继电器导通1秒，控制报警器关闭
//注意，这个IO使用的和(def_kangdi_spk || def_use_JL_E200 || def_ZD_lock_sp)
//鸣笛时配合继电器有关,使用的相同IO
#define def_alart_ctrl			0
//报个编译错误，提醒
#if (def_alart_ctrl && (def_kangdi_spk ||def_use_JL_E200 || def_ZD_lock_sp))
 #error "one io can not for two use"
#endif

//UC20后来加焊RN电阻，控制电源复位，故此加改宏定义，以后不用默认0；
#define defUC20_RN          0


//使用ublox的agps,，使用泰斗模块的需要=0
#define def_ublox_agps_enable							0


//使用UC20 或EC20的不需要使能GC65升级
#if defUseM12D
//使能GC65固件升级
#define def_GC65_Update									  0
//0，代表把老版本升级成新版本，1代表把新版本升级成老版本，
//主要针对易县新版本不上线问题
#define def_gc65new2old									  0
#endif




#endif







