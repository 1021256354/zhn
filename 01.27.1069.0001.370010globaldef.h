#ifndef __Globaldef_H
#define __Globaldef_H


/*
0ʱ����ȥ�����������ⲿ���Զ���stm32����
1ʱ��ȥ���˷��������ⲿ���ɶ�stm32����
����ֻ����ʽ����ʱ = 0
*/
#define def_debug_mode			(1)


//ȡ������ע��Ȳ�����Ĭ��0,��ִ�п���ע��
#define _Disable_Register		(0)

//�ر�Զ��������Ĭ��0
#define _Disable_Update			(0)


//ʹ�ܶ��߾�������Ȩ��Ĭ��1
//1 ʹ�ܣ�0��ʹ��
#define _Enable_AuthMul			(1)


//byleo ʹ�ܿ��Ź���Ĭ��1
#define _Enable_WTD					(1)


//ʹ����������ʱ����Ҫ = 1 ,ͬʱ��Ҫdbug_APN_def = 1��Ĭ��0
#define QIDNSIP_DEF					0

//�Լ�����IP�Ͷ˿ڣ����ڵ��ԣ�Ĭ��0
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


//ʹ������APN��Ĭ��0
//UC20-Ĭ��1��GC65��M12D-Ĭ��0
#define dbug_APN_def 				0


//�����������ֻ������ԣ������Ƕ��ƵĿ�
//���Գ����Ŀ����ԣ����Թ�˾�Ŀ�����ʼ��ʱ����AT+CMGD=1,4  +CMS ERROR: 3
//��˾�������ˣ�����ɾ�����ָô�����
//#define dbug_APN_Str_def 	"AT+QIREGAPP=\"CMNET\"\r\n\x0\x0"
//#define dbug_SGP_Str_def 	"AT+QICSGP=1,\"CMNET\"\r\n\x0\x0"


//���Գ����Ŀ����ԣ����Թ�˾�Ŀ�����ʼ��ʱ����AT+CMGD=1,4  +CMS ERROR: 3
//gc65 �ƶ�
//#define dbug_APN_Str_def 	"AT+QIREGAPP=\"CMNET\",\"CMNET\",\"CMNET\"\r\n\x0"
//#define dbug_SGP_Str_def 	"AT+QICSGP=1,\"CMNET\",\"CMNET\",\"CMNET\"\r\n\x0"

//uc20 ��ͨ
#define dbug_APN_Str_def 	"AT+QIREGAPP=\"UNINET\",\"\",\"\"\r\n\x0"
#define dbug_SGP_Str_def 	"AT+QICSGP=1,1,\"UNINET\",\"\",\"\",1\r\n\x0"			//��Զ����֧�ֽ���2G��3G��ʹ�����
//#define dbug_SGP_Str_def 	"AT+QICSGP=1,1,\"3GNET\",\"\",\"\",1\r\n\x0"



//#define dbug_APN_Str_def 	"AT+QIREGAPP=\"xastjjzd.sn\",\"TEST\",\"TEST\"\r\n\x0"
//#define dbug_SGP_Str_def 	"AT+QICSGP=1,\"xastjjzd.sn\",\"TEST\",\"TEST\"\r\n\x0"




//ʹ�ܵ��Դ��������Ĭ��0
#define _En_Debug_Prt				(0)

//ͨ���ⲿ����1������z��ĸ���������������صĵ�ַ������
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

//ʱ��ֻ��ѡһ������Դ�ķ����Ŀ,��KP��161212������ȥ��8025�������ڲ�,�豸IDӦ�ö���1612xxxx
#define _En_RTC_def         (1)   //�ڲ�rtc
#define _En_RX8025_def      (0)   //�ⲿrtc
#define _En_NORTC_def       (1)   //KP����û�е�غ�8025,��_En_RTC_def�ڲ�ʱ�����ʹ��


//ʹ�ô���3��� ���֤��Ϣ
#define testID 				0


//���ʹ��=1����ˢ���ÿ����ܸĶ�IP��APN��
// =0 ����ʹ�����ÿ�������APN���Ĭ��0
#define dbug_NotUse_SetCard_IP_def 		0


//ʹ�������APN��IP��ʹ����һ������ʹ�ܣ�ֻ��һ�������ã�Ĭ�϶���0
#define dbug_XI_AN_APN_IP_def 		0	//����ANP
#define dbug_Self_APN_IP_def 			0	//��˾�ڲ�

//Ĭ��0
#define dbug_gps_ant							0
//Ĭ��0
#define dbug_gps_sp								0

//gps ʹ�ü��ٶ��˲��ٶȣ�Ĭ��0
#define def_gps_use_g_filter			0

//gps ʹ���ٶ��˲�  Ĭ��1
#define def_gps_use_sp_filter			0		//ԭ��Ĭ�ϴ��������꣬��һ�汾�ǲ���ר�õ�

//GPS �Ѵ��������ϱ���������,Ĭ��0
#define def_gps_debug_sp_filter		0

//LIS3DH���ٶȴ������Ƿ�ʹ�ã�
#define def_use_LIS3DH            1

/////
#define  SleepOrBatMag            1      //���ߺ͵�ص��Բ��֣�

#if _En_Debug_Prt
#if	def_debug_zone_flash
void deal_debug_flash_zone(void);
#endif
#endif


//��Ϊ���޹ʿ��ŵ����飬���԰�OBD�����б��Ķ���Ĭ��0
#define debug_obd_to_server		         0

//�ͳ����糵������
#define def_CarType_sp				         1		//1:�ͳ� 0���糵

//����ʹ�õĳ���,ֻ��ʹ��һ������ʱ�������壬�Ժ��������̫���ˣ����ܻ�Ƚϸ���
//���һ�ʹʹ�õ�RAM����
//ֻ��ʹ��һ�� = 1
#define def_use_EC180                  0   //���糵������EC180CAN���߽�ȡ���ݣ���def_CAN_Vehicle���ʹ��,��������EV��֪��D2S
#define def_use_PST                    0   //���ͳ�+�춯��passatCAN���߽�ȡ���ݣ���def_CAN_Vehicle���ʹ��, ���£�������  ������,���������Ÿ�
#define def_use_E150				           0		//����E150��160��200,smart��E6 E5������E30,20160926��̩E200����Խ10��Ҳ���ô���,��ͨEV80�������ݶ�EV,֪��D2/D2S,�ۺ�EV������,����,���裻
#define def_use_smart				           0		//smart,����ط���������E150������ʹ��ʱdef_use_E150����Ϊ1����ʱȥ�����Զ�����
#define def_use_MAXUS                  0    //��ͨEV80���ⲿ��(K�߲ɼ���ʱ�ϴ�)��ʹ�ܸ��def_use_E150ҲҪʹ�ܣ�
#define def_use_GTYD                   0    //�����ݶ�EV,����ʹ��ʱ��def_use_E150ʹ�ܣ���OBD�������ݶ�ֻ��E150ʹ�ܣ�����Ĭ��0��
#define def_use_D70                    0    //����D70������״̬������������ʹ��ʱ��def_use_E150ʹ�ܣ�
#define def_use_YueD                   0    //�ִ��ö���OBD����K�߷�ʽ��def_use_E150ʹ��,����K2,���������ø�������ý���,�����ͳ��ø��
#define def_ZD2_sp                     0     //֪��D2�������Ժ��ٲ�һ��״̬
#define def_JLDH_sp                    0    //�����ۺ���ʱȥ�������⣻
#define def_use_E150_sp                0    //����ϵ��Ϩ��ֹ�Ժ��ٲ�״̬�ˣ�
#define def_ZD2_sp2                    0    //֪��D2��״̬�仯�������⣬�����ųɹ��Ժ󣬴���ֱ�ӷ�һ������ָ�� 
#define def_leiling_ACC                0    //����ACC��AD2�ɼ���֪��D2�����ACC�ɼ�AD2,�淶�߿زɼ�ACC-AD2
#define def_use_CANEQ1                 0    //С�������ź���������ʱ��������������8�У�

#define def_use_gl8_sp								 0			//GL8 ����ĵط����޷���������״̬,def_use_E150Ϊ1��

#define def_use_ZT_200			           0		//��̩E200-OBD֮ǰ�ƽ���Ʋ��˿����ţ������ֿ����ˣ��ʴ˼�����һ��Ժ�����

//������ѯ�ʺ�E150=1�Զ�����������E6=0��smart=0��ִ������,E150���ֺ��俪�����
#define def_use_E150_lock_after_ask		 0

#define def_use_JH_JVC			           1			  //����ǵ�IEV4��IEV5���Ƽ�����෴,��ʱ���ƺͽ�����һ��OBD�����Ʋ��˿����ź�����,����,��̩100sҲ����һ��(�ݶ�OBD���Ʋ���ʹ�����߿�)
#define def_use_GW_YD                  1        //����GA5���߿ؿ����źͽ���һ�£�����ʹ��ʱ������ʹ�ܣ������ݶ����ƽⲻ���߿صģ���E150��ͬ���Ժ�������(�ݶ�OBD���Ʋ���ʹ�����߿�)��
#define def_use_JL_E200                0        //����200�������һ��Ϊ1��def_use_JH_JVC������ѡ��ҲΪ1
#define def_use_JH_iev6                0        //����ʹ��ʱ��def_use_JH_JVCΪ1�����iev6�³�,�����Ÿ��ߺͺ����ߣ�������ã�Ĭ��0
#define def_JL_ACC_sp                  0        //����100,����E200����AD2���߿�ACC�ɼ���
#define def_YL_EV2                     0        //ԣ·EV2����APPִ�п������� ����״̬������ ���俪��û���Ÿ�Ӧ������״̬����״̬��û�У����ŸУ�OBD�����ţ�����ʹ�ܣ�def_use_JH_JVCʹ�ܣ�
#define def_ruina_locksta              0        //������״̬��AD2�ɼ���def_use_JH_JVCʹ�ܣ�
#define def_ruina_ACCsta               0        //����ACC״̬��AD3�ɼ�,���obd�ɲ����ø��def_use_JH_JVC��def_ruina_lockstaʹ�ܣ�
#define def_YLEV2_locksta              0        //ԣ·��״̬��AD4�ɼ���
#define def_JH_ACC_sp                  0        //����iev5���͸磩ACC״̬�ɲ�������AD2�ɼ���


#define def_use_QiruiEQ			           0			//����EQ
#define def_use_QiruiEQ_sp             0      //����EQ�����ߣ������ڶϿ��п��ˣ�����ԭ�����пط�ʽ����ѡ��
#define def_use_QiruiEQ_NCT            0       //����EQ���Ŀ���֮ǰ�����ţ�����֮ǰ�ȿ��ţ�
#define def_use_xiaomayi               0      //����С������AD2�������Ӧ��,ADC�ɼ���
#define def_xiaomayi_Win               0      //С������������(�ÿ������ѹ��粿��IO2)��
#define def_xiaomayi_lock              0      //С�����߿���״̬�ɼ�������4.7V����0V������AD1���ADC�ɼ���
#define def_xiaomayi_ACC               0      //С�����߿�ACC״̬�ɼ�,(AD3)
#define def_use_xiaomayi_FT            0      //���������������ţ���ʱ��������������8�У�
#define def_QiruiEQ_ACC			           0			//����EQ-ACC��AD2�ɼ���

#define def_use_ZT_301			           0			//��̩֪��301B 301C,����Ҳ��ѡ����һ��=1����100Ҳѡ������� ֪��D2�ƽ�֮�����Ĭ��0
#define def_ZD_lock_sp                 0      //֪��D2�������⴦���ÿ������ѵ����ſ������ż̵��������Ѳ��䣬ԭ���������Ÿд���ECU	,���峵�Ͱ�����ѡ��
#define def_KD_Nctldoor                0     //�����ſ������ҵģ��ʴ˼�һ���¶��壬Ҫ��def_use_ZT_301=1,����Ϊ1ʱ�������ڽ������Ϳ����ţ�����ǰ�����ţ�����ǰ�ȿ���
#define def_KD_Nctlkey                 0     //K10�µ��п��� ,def_use_ZT_301,def_KD_Nctldoor ʹ��
#define def_use_ZT_D1                  0     //def_use_ZT_301Ϊ1��֪��D1OBD�ϴ��Ķ���ʮ����������ʱ��һ���汾���Ժ�OBD�޸��Ժ�ɲ��ã�
#define def_ZD_ACC_sp                  0     //֪��D1�пACC״̬���������ĳ��߼�ⷽʽ,��ʱ��iev4ʾ��ƽţ�
#define def_ZD_2D_sp                   0     //֪��D2һ�����ƽ�״̬���ԣ�����Ҳ����,����E150������ã�Ĭ��0��
#define def_KD_ACC_sp                  0     //����K10��һ����OBD�ɲ���ACC״̬����AD2���߿�ACC�ɼ���

#define def_use_BYD_F3			           0			//BYD F3
#define def_use_ShiPao_sp              0      //ʨ����ʱ�ѳ���״̬��ȥ��

#define def_use_passt				           0			//passt ʹ��ң��Կ�׿��ƿ���������
#define def_passt_keyL                 0      //passatԿ�����Ͷ�����Ĭ��0�����綯��,14��

#define def_use_buick                  0    //��˾�Խʹ��ң��Կ�׿�������
#define def_use_buick_sp               0    //��Խ10����״̬��ȡ��������OBD���ƿ���������,����Ϊ1��def_use_E150ҲӦ��Ϊ1��

#define def_kangdi_spk			           0			//def_use_ZT_301 =1, ���Ҳ=1�����Ǹ�����ʹ�õģ�������Ҫ�����չˣ�����֮ǰ��װ�Ŀ��Ϻ�֪�����ѣ����������Ժ���һ��Ĭ��0��
#define def_K2_spk                     0      //����K2���ѵ�����def_use_YueDʹ�ܣ�

#define EN_TLD_define                  0    //ͨ����Ҫ��ֻ�ж�λ��ͨ�ţ�ACC����ó��źͺ���ļ��ڣ�PE9����

/****����ĳЩ����OBD��ȡ��ʣ������������󣬹ʴ˼�һ����ǿ���ϱ�������Ϊ0**********/
#define def_use_carLeftKM_Zero         0    //ǿ������Ϊ0  ʣ���������(����+����+����+��̩) ����E200֪�����Զ�ȡ
#define def_use_SOC_Zero               0    //ǿ��ʣ�����Ϊ0

//���byd F3���ͳ��������ɼ���ͬ���ֵ�һ���꣬������ߵ�F3�����ݵ�F3��ͬ��
#define def_use_BYD_F3_bj              0     //���ø���ʱ��def_use_BYD_F3������Ч
#define def_use_BYD_F3_lz              0     //���ø���ʱ��def_use_BYD_F3������Ч

//�ö������������,��Ҫͬʱ def_use_YueD = 1
#define def_use_YueD_OilAdc						 0
//����k2������⣬�����ö�������43L
#define def_use_K2_OilAdc						   0
//�ִ�����������⣬43L
#define def_use_ruina_OilAdc           0
//����(�ͳ�)--������Ӧ��ϵ���ݲ����ã���Ҫ����171128
#define def_use_leiling_OilAdc         0//������53L
//�淶 40L ʹ��ADC�ɼ���������Ҫͬʱʹ��def_use_E150 = 1�� def_use_YueD = 1
#define def_use_fengfan_OilAdc           0

//CANģʽ��������ADC�ɼ�������Ҫ����ʹ�ܣ�ͬʱdef_use_EC180��def_CAN_VehicleҲʹ�ܣ�
#define def_use_CAN_AdcOil               0
//˧��CANģʽ��������ADC�ɼ�������Ҫ����ʹ�ܣ�ͬʱdef_use_CAN_AdcOil��def_use_PST��def_CAN_VehicleҲʹ�ܣ�
#define def_use_shuaike_OilAdc           0
//�����ִ��ʶ�����CANģʽ��������ADC�ɼ�������Ҫ����ʹ�ܣ�ͬʱdef_use_CAN_AdcOil��def_use_PST��def_CAN_VehicleҲʹ�ܣ�
#define def_use_langdong_OilAdc          0
//��˿�Խ����CANģʽ��������ADC�ɼ�������Ҫ����ʹ�ܣ�ͬʱdef_use_CAN_AdcOil��def_use_PST��def_CAN_VehicleҲʹ�ܣ�
#define def_use_Excelle_OilAdc           0
//����A60����CANģʽ��������ADC�ɼ�������Ҫ����ʹ�ܣ�ͬʱdef_use_CAN_AdcOil��def_use_PST��def_CAN_VehicleҲʹ�ܣ�
#define def_use_DFA60_OilAdc             0

//�����·�������ʱ�������ϵ��ԣ����û���⣬���ƹ������³���ʹ��
//�������͵��������ȷ�ʽ����
#define useCurrentCoilCalc							 0
//Ϊ�˲���ԭʼֵ���Ѿ�γ�ȵĸ߶Ⱥͷ��򣬸ĳ��ϱ�����ֵ��Ĭ��=0
#define useCurrentCoilCalcDebug					 0

//�ƾ����-��AD3���룬��ʱֻ���͸���
#define def_detectAlcoholInf             0
//�ƾ����-ӳ�䵽AD1������ʹ��ʱ��def_detectAlcoholInfʹ�ܣ�
#define def_detectAlcoholInf_EX          0

//���ǵ�E6û��N��ͣ��ʱP���������޷����������� = 1�������������N����ʵ��E160������Ҳ���ԡ�
// passt = 1
//E150 = 0
//iev4 = 1
//smart = 1
//eq = 0
//֪��301 = 1
#define def_not_detect_GearN			        1					//0�ж�N������������1���ж�N��


//#define def_use_km_percent			(17500/10)		//E30 175km		��������E30
//#define def_use_km_percent			(15000/10)	//E150 150km
//#define def_use_km_percent			(16000/10)	//E160 160km
//#define def_use_km_percent			(20000/10)	//E200 240km


//ʹ�ÿճ��ƣ�ֻ�б�����E150�ſ���ʹ��Ep���ճ��ƣ�
//�������� EQ������
//passt�����пճ���
#define def_use_Ep					              0



//��Ϊ�����ĳ���������һ�����⣬����4�������ƶ����ʱ����ʱ����ּ�⳵�Źأ���׼ȷ
//��ʱ�ͻ�����޷����ţ����쵼���飬��⵽����δ�أ�Ҳִ����������
//#if (def_use_JH_JVC || def_use_BYD_F3)
	#define Always_lock_def		              1
//#endif

//E150 �ֶ����Ƶ���Ϩ��ͬʱOBD֧�ָð汾
//����˵IEV4�� EQ��һ��
#if (def_use_E150 || def_use_QiruiEQ || def_use_JH_JVC)
#define Manual_Engine				              0
#endif



//������Щ��ǿ���ص�

//�����������궨�壬ֻ��ʹ��1�� 
#define USE_ID_MODULE				              0				//ʹ�����֤����ģ��
//��ʹ��FM1722��ȡTypeB�Ƿ���ڣ�֮�����������֤����ģ��
//�����ʹ�����֤����=0.
#define FirstRdTypeBUID			            	0			//ˢ���֤ʱ������=1��������=0


#define USE_RF1702_BD				              0 				//ʹ��RF1702��ȡMF1
#define USE_CARKEY_MF				              0				//Կ�װ󿨣������׿��ϱ��ͷ�����д�����������忨�ϱ�


#define def_write_mf_card			            0			//����ʹ��Զ��д���֤������ҪUSE_RF1702_BD = 1
#define USE_MF_WITH_DATE		              0					//1��MF1ˢ�������ڸ�ʽ�ģ� 0�������ڸ�ʽ��,Զ��д��



//֮ǰд�ĳ������ڡ� XUESHI_MAIN_20140610 �� ���棬
//������Ϊ��600���ϰ��ӿ�棬�������ϰ����ϸ�д��������IO
#define USE_XUESHI_MAIN_20140610_BD				0 				//��ѧʱ����
#define USE_XUESHI_600_Version						0					//��ѧʱ����
#define USE_XUESHI_RentV3									1					//���⳵��������
#define USE_SMART_BOARD_SP								0					//Ϊsmart���Ƶ����壬�����˷���

//����Ҫ���ֻ����ſ����¶���
#define Sp_SMS_Order_def									0


//����ʹ�ò�ͬ��ģ��
#define defUseM12D						            1				//ʹ��M12Dʱֻ�д���=1������ʹ��M26ʱ����=1
#define defUseUC20						            0				//ʹ��3Gʱ=1������ʹ��EC20ʱ=1
#define defUseGC65_DTR				            1 			//GC65 DTR���ƣ�GC65=1��UC0 = 0 M12D = 1.
#define defUseEC20						            0				//��Զ4Gģ�飬��Ҫͬʱʹ��defUseUC20 = 1��defUseEC20_DTR = 1
#define defUseM26													1				//Ҫ��defUseM12D = 1��defUseGC65_DTR = 1
#define defUseEC20_DTR										0				//EC20�͹��ģ����ʹ��EC20������=1��UC20ʱ����=0



//��������ˢ���ֱ֤�����ɶ�����Ĭ��0
//#define genSpecialOrder_def		0



//�����������Ϊ����ϲ���
//��û�����OBDʱ��Ϊ�����ϵͳ���ԣ�ģ��OBD���ڷ��ص�����,Ĭ��0
#define use_sim_obd					        0		//Ĭ��0
#define use_sim_location		        0		//GPS ��λ��ʹ�ù̶���γ�ȣ�Ĭ��0


//ʹ��OBD���ٶ���ϵͳ�ٶȣ��漰ƣ�ͼ�ʻ��λ����Ϣ�ϱ�����ʻ���ͳ�ƣ�Ĭ��1
//���ǵ�F3=0��BYD E6 = 1��E5 = 0�����𲿷֣�
//can�ܻ���ٶȣ�
//K2��������OBD�ٶ�,��Խ��iev6E17��,��־4008,D2�������
#define def_use_obd_speed				    1
//�Ƿ����GSA��Ϣ����λģʽ2D/3D,�Լ�PDOP��λ���ȣ�Ĭ��0��������Ҫ����ʹ�ܣ�
#define def_use_gps_PDOP            1
//�Ƿ����GSV��Ϣ������������Ч��������������Ҫʹ�ܸ��
#define def_use_gps_GSV             1
//��վ��Ϩ�����ٶ��Ժ󣬻���ʮ����ʱ��(30S)��λ����Ч�ģ���βɼ���ʮ������ƽ������֮�䲻����20������ϴ洢�������жϣ�֮�������Զ�λ����Ϣ���ٲ���λ����Ϣ�ϱ���ֻ���뿪վ���Ժ�GPS�ٶȴ���20�������ϲſ�ʼ�ϱ���Ч��Ϣ�����˹켣��
#define def_gps_sp_filter			      1		//
// �����¶�λ�Ժ�ǰ�Ÿ����ֵ�Ӻ�һ�������10���ֵ�ϱ���def_gps_sp_filterʹ��
// ���V53-S��λ���̣�����Ϊ0
#define def_gps_filter9and1         0
//GPS�����̩��303���������߼�ⲿ�֣����Ӹ���壬4G�豸��ʼ��
#define def_use_TDant_det           0

//11 �⳵Ҫ��������·�������Կ���������ACC
//����Ϳճ���IO���õģ�ֻ����һ��������
#if (!(def_use_Ep))
#define def_ctrl_ACC						    1

//=1ʱ�������ж���ʱ�Զ��պϼ̵�����û����ʱ�Զ��Ͽ��̵���
//�¹����smart auto_off=1��auto_on = 0��������=0
//20161114����EQ��EV160�����������
#define def_ACC_auto_on						  0		//1���¶���ʱ�Զ��ϵ�
#define def_ACC_auto_off						0 	//1�������������Զ��ϵ�
//EQ��Ҫ�󣺿����Ǽ̵����ϵ磻����ʱ�̵����ϵ磨���ٶ�+Ϩ��
#define def_ACC_on_when_op          1   //1:�����ϵ�
#define def_ACC_off_when_cl         1   //1:���Ŷϵ�
//�������ʹ�ã��ϵ����������Ժ�10min�������ϵ磻Ĭ��Ϊ1���粻��ҪΪ0��
#define def_ACC_off_sp              0

#endif


//ʹ��������ֻ����ѧʱ������������ѧʱû�е���
#define useBlueTooth						    1   //�ñ����������ƣ�����Ϊ1
#define def_enable_BT_Cipher		    0		//�Ƿ���ܣ�Ĭ��1,�Ժ���
#define useBlueTooth_LP             0   //����ʡ����ƣ�Ĭ��0���ã��������޶���ʱʹ�ܣ��Ժ���

#define useBlueIBeacon					    0 	//ibeacon

//passt = 1�� BYD F3 = 1��BYD E6 E5 = 1
//֪��301 2014�� = 1���޷���ȡ�����
//��100����ʹ��GPS���������
//passt ��һ��ò��û��������
//����K10Ҳ��Ҫ�������,����֪��D1
//����Ҳ������
//�ö����GPSͳ��,����K2,����
//��̩260��230����Խ,����(�ͳ�) ,A60,37�����
#define BYD_E6_SetKM						    0	// ��������ʹ��� ��λ����, 
#define BYD_E6_SetKM_FRAM			    	0	//1ʱ��ʹ�����磬0ʱʹ���ⲿFlash


//IEV4��ʹ���⳵���壬ʹ��AD4�����ʾ���״̬
#define USE_AD4_DetectLight					0
//iev4=0;iev5 = 1; ��Ϊʾ��Ƽ�������෴
#define IEV4_RESET0_IEV5_SET1				0


//���ǵ�E5��E6,Ĭ�Ͽ���ȥ����Ƽ�⹦��=0������=1
//�������=0��USE_AD4_DetectLightҲ��������
//����ָֻ����ʱ���жϣ�����λ����Ϣ�ϱ��л�Ҫ����
//GL8 =1 
#define UseLightDetect							1
//GE3�������еƹ⣻�����Ժ�λ�õƻ���������ʱλ�õ����Σ�����ƹ������ж�
//EU260
#define LocalLightFil               0

//Ĭ��1
#define UpdateGPS_TheLast			 			1			//1 ��ʾgps����λʱ���ϱ����һ�ξ�γ�ȵȣ�


//smart = 1������=0
#define 	smart_wire_spk						0			//smart ʹ���߿�����

//smart Ҫ����������ʱ��������˸=1
//���ö��Ƶĳ��ͳ���Ҫ��ʹ�ܸ�ѡ��iev5��BYD E6��EV200
//�������� = 0
#define LockWithLight								0

//һ�ȱ�����������ʧ�����ѣ���ʱ������ȥ�����������ƣ�
//â��Ҳ������
#define LockfailOnceLight						0

//â��Ѱ��Ҳֻ���ƣ�������ʱȥ��,����������ֻ�·����Ƶģ�
#define FindOnceLight						    0
//smartҪ���¶������Զ�����������һ�����ⶨ��ĺ�
//Ҫ���¶������Զ�������=1������Ĭ��=0

#define auto_unlock_when_order_download		   0



//����ʱ�жϵ��=1,CAN����Ҳ�ø����жϵ��
//��̩2014��֪��301 = 0��
//����EQ = 0����˵Ϩ����Сʱ����Ϩ��ɹ�
//�������Ͷ� = 1
//����100û��OBD��û��״̬��
#define 	def_ACC_USE					    1
//�������
#define UseWindowDetect           0
//������������״̬��� 
#define UseOtherBodyDetect        0


//���Կ�װ�iev4����һ̨�޷���⵽�������涨���ֿ��������ִ��������
//�������ⶨ�ư汾��Ҫ��Ĭ��=0
#define def_not_detect_acc				0


//û����ʱ���Զ�����
//�����Ժ���ʽ��smart=1�����԰�=0��������ʱ��=0
//���ܵ�E160 = 1�����ƣ�
//С����������ɹ�һ��֮�������ˣ�����һ�Σ�
#define def_auto_lock_car					0

//ԭ�������Զ�������һ�κ����������Ժ�ȥ����Ĭ��=0
#define def_sp_lock_car_use				0


//2���һ��OBD״̬��
//��Ϊsmart���Ų��ϱ������������޷��Զ����ţ����ڸĳ�ȫ�ٲ�ѯ
#define always_chk_obd						0


//����ԭ���ϱ�ʹ�ܣ�Ĭ��0
//#define def_reasonforSPK        0


//����EQ������ɲ�ϱ���������
//��������=0�������BYD F3�������������ͻ�����ܹ���
//iev4 Ҳ����������ɲ��
#define hand_brake_use		        0



//ͨ��OBD�����޸��ն�ID���޸��������Ҫ�����豸��1������ҪĬ��0
#define need_systemReset          0

//����flash���ܲ��֣�Ĭ��0�����ü���
#define _En_flashCode             0

//��������Ҫ�󣬲��ܻس���Զ�̼����漰����������������Ҫ�����ã�1�ȶ����Ĳ��������ټ��ܣ���0�ȶ����Ĳ��������ٽ���(��������ն�ID)
#define  def_BenzSpecial          0
#define  def_BenzSpecial_NO       0 //���_En_flashCodeΪ0��ԭ�����ܵ����ݽ����Ժ�ȫ�����ģ���ʼ��������ʱ���ܳ�����,Ĭ��1

//�������ʹ�õ�XXTEA��
#define use_crypt_package		      0		//1�ͷ�����ͨ�ű��ļ��ܣ�0������
//���ӵڶ���AES
#define use_crypt_aes_add					0	//�ڶ��μӽ��ܣ�Ҫ��ͬʱuse_crypt_package = 1
//���ݼĴ���ʹ��
#define use_stm32_BKP             0   //ʹ��stm32�ı��ݼĴ�����


//�ϵ��ϵ��ʹ����ʷ����
#if (USE_XUESHI_RentV3 || USE_SMART_BOARD_SP)
#define use_history_data		      1
//��ģ���У�������1s�洢һ����λ��Ϣ��
#define use_Lhistory_data         1
#endif


//����ʵʱ��⳵��״̬����Ӳ��IO��⣬���ֳ��ű仯�����ϸı��Ӧ��OBD���ֵ
//smart2012, ����=1
//��������=0
#define def_chk_car_door		      0

//1����ʹ�ü���Э���OBD��0ʹ��ԭ�������ܵ�OBDЭ��
#define def_use_crypt_obd					0


//�����״̬����״̬ʱ�ű���ʣ��������̣���ֹOBD��-���EQ
//EQ���⣬������Ҫ��ʹ�ù̶���� 151 * soc ��������ʱ���
//��������Ҳ����ʹ�ܸù���
#define   def_left_km_acc_on		  0

//1��Ҫ��ʹ�ô���������ϱ���OBD����������̳���180������ɰٷֱ��ϱ�����̨��
//������OBD��ȡ��SOC���Լ�����һ��ʹ�á�
#define 	def_soc_calc_by_leftKm	0		//EQҪ�� def_left_km_acc_on = 1


//ʹ�ô�������
#define def_use_touchKey		0
//RSAͨ������
#define def_RSA_BLE         1      //��������ģʽ������Ϊ1��useBlueTooth���ʹ��
//CANͨ�����ϵ��������У�����һ�����������֣�
#define def_CAN_Vehicle     0
//��������Ϣ�ɼ����֣�
//��ʱֻ����CAN��ģʽ���и�����ҷ־��峵�Ͷ�����
#define def_VehicleCellInf   0     //����ʹ��ʱ��def_CAN_VehicleΪ1�������־��峵�ͣ�

//����ʱ���Ѽ̵�����ͨ1�룬���Ʊ������ر�
//ע�⣬���IOʹ�õĺ�(def_kangdi_spk || def_use_JL_E200 || def_ZD_lock_sp)
//����ʱ��ϼ̵����й�,ʹ�õ���ͬIO
#define def_alart_ctrl			0
//���������������
#if (def_alart_ctrl && (def_kangdi_spk ||def_use_JL_E200 || def_ZD_lock_sp))
 #error "one io can not for two use"
#endif

//UC20�����Ӻ�RN���裬���Ƶ�Դ��λ���ʴ˼Ӹĺ궨�壬�Ժ���Ĭ��0��
#define defUC20_RN          0


//ʹ��ublox��agps,��ʹ��̩��ģ�����Ҫ=0
#define def_ublox_agps_enable							0


//ʹ��UC20 ��EC20�Ĳ���Ҫʹ��GC65����
#if defUseM12D
//ʹ��GC65�̼�����
#define def_GC65_Update									  0
//0��������ϰ汾�������°汾��1������°汾�������ϰ汾��
//��Ҫ��������°汾����������
#define def_gc65new2old									  0
#endif




#endif







