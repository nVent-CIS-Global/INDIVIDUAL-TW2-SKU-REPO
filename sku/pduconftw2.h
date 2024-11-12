#ifndef __PDU_H
#define __PDU_H

#ifdef NAPDU
#define SKUBIN "skunam.bin"
#else
#define SKUBINE "skuapc2.bin"
#endif
#include "stdint.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#define LOGEEPROMCOUNT			1
#define OUTLETNUM				64
#define RELAYNUM				16
#define DAISY_UNIT_MAX			3
#define SENSORNAME_LEN			16
#define MISCINFO_LEN_EXT		128
#define SYSLOGNAMELEN			64
#define MAXNUMCARDID			16
#define SENSORSERIALNUM_LEN	    9
#define CBNUM					16
#define SENSORNUM				6
#define OUTLET6PERRELAY			6
#define OUTLET8PERRELAY			8
#define USER_NUM				16
#define USR_LEN					32
#define PHASECONF				12
#if 0
#include "power.h"
#include "relay.h"
#include "authuser.h"
#include "sensor.h"
#include "log.h"
#include "i2c.h"
#endif
#define SKU_ADDRESS	0x080C0000

#define PDU_TYPE			0
#define INLINEMETER_TYPE	1
#define POWER_CHIP_NUM		2
#define PHASE_NUM			3
#define PREFIXSKU_LEN		6
#define SKU_LEN				16
#define NAME_LEN			8
#define SERIAL_LEN			16
#define TIME_LEN			8
#define IP_LEN				16


#define MISC_LEN			32
#define RESETENERG_LEN		48
#define MISCINFO_LEN		64
#define MISCINFO_LEN_EXT	128

#define DAISY_UNIT_MAX		3

#define TBDWAY		0
#define ONEWAY		1
#define LNWAY		10
#define L1L2WAY		20
#define THRWAY		3
#define PHASECONF	12
#define YWAY		30
#define DWAY		40
#define DWAY_1		41


#define TBD_TYPE	0
#define M_TYPE		1 // monitered input/ input metered / MI
#define S_TYPE		2 // monitered input & switched output / MONITORED SWITCHED /MISO
#define MPLUS_TYPE	3 // monitered input & monitered output / outlet metered / MO
#define SPLUS_TYPE	4 // MONITORED & SWITCHED PER OUTLET / MOSO


#ifdef NAPDU
#define M_TYPE_QTY       12
#define S_TYPE_QTY       12
#define MPLUS_TYPE_QTY     12
#define SPLUS_TYPE_QTY     13
//#define NA_PDU_QTY			11
#else
#define Total_QTY		1
#endif
#define NEW_TYPE_QTY	0
#define DEFAULT_SKUIDX	0xffffffff

#define CB_NONPOLE		0 //0CB 
#define CB_POLE1		1
#define CB_POLE2		2

#define CB_CUR16		16000
#define CB_CUR20		20000
#define CB_CUR32		32000	

#define INPUT_CUR12		12000
#define INPUT_CUR16		16000
#define INPUT_CUR20		20000
#define INPUT_CUR24		24000
#define INPUT_CUR27		27700
#define INPUT_CUR28		28000
#define INPUT_CUR30		30000
#define	INPUT_CUR32		32000
#define INPUT_CUR40		40000
#define INPUT_CUR48		48000
#define INPUT_CUR50		50000
#define INPUT_CUR60		60000
#define INPUT_CUR63		63000
#define INPUT_CUR80		80000
#define INPUT_CUR100    100000

#define INPUT_CUR20_ND		20000
#define INPUT_CUR30_ND		30000
#define INPUT_CUR30JP_ND	30000
#define INPUT_CUR35_ND		35000
#define INPUT_CUR50_ND		50000
#define INPUT_CUR60_ND		60000

#define INPUT_VOL100	100000
#define INPUT_VOL110	110000
#define INPUT_VOL120	120000
#define INPUT_VOL130	130000
#define INPUT_VOL200	200000
#define INPUT_VOL208	208000
#define INPUT_VOL230	230000
#define INPUT_VOL240	240000
#define INPUT_VOL260	260000
#define INPUT_VOL346	346000
#define INPUT_VOL380	380000
#define INPUT_VOL400	400000
#define INPUT_VOL415	415000




#define U_ONE_MAXACT16	4160000
#define U_ONE_MAXACT32	8320000
#define U_ONE_MAXACT63	16280000
#define U_THR_MAXACT16	12480000
#define U_THR_MAXACT32	24960000
#define U_THR_MAXACT63	49140000
#define U_THR_MAXACT100 70000000

#define U_ONE_MAXACT110V1PH30A	    3900000
#define U_ONE_MAXACT110V1PH20A	    2600000
#define U_ONE_MAXACT230V1PH30A	    7800000
#define U_ONE_MAXACT230V1PH20A	    5200000
#define U_ONE_MAXACT200V1PH30A	    7800000
#define U_THR_MAXACT415VY20A		15600000
#define U_THR_MAXACT415VY30A		23400000
#define U_THR_MAXACT208VD20A		13500000
#define U_THR_MAXACT208VD30A		20250000
#define U_THR_MAXACT208VD35A		23625000
#define U_THR_MAXACT208VD50A		33750000
#define U_THR_MAXACT208VD60A		40500000
#define U_THR_MAXACT208VY20A		7800000
#define U_THR_MAXACT208VY30A		11700000

#define U_T_UC	0
#define U_T_UW	0
#define U_T_LW	0
#define U_T_LC	0
#define U_T_RT	0
#define U_T_CD	0
#define U_T_CT	0x0F

#define P_V_UC	260000
#define P_V_UW	250000
#define P_V_LW	190000
#define P_V_LC	180000	

#define P_110V_UC	130000
#define P_110V_UW	125000
#define P_110V_LW	95000
#define P_110V_LC	90000

#define P_120V_UC	140000
#define P_120V_UW	135000
#define P_120V_LW	105000
#define P_120V_LC	100000

#define P_230V_UC	260000
#define P_230V_UW	250000
#define P_230V_LW	190000
#define P_230V_LC	180000

#define P_208V_UC	225000
#define P_208V_UW	215000
#define P_208V_LW	190000
#define P_208V_LC	180000

#define P_V_RT	2000
#define P_V_CD	0
#define P_V_CT	0

#define P_C100_UC	90000
#define P_C100_UW	70000
#define P_C100_LW	0
#define P_C100_LC	0

#define P_C63_UC	57000
#define P_C63_UW	45000
#define P_C63_LW	0
#define P_C63_LC	0
#define P_C32_UC	28000
#define P_C32_UW	22000
#define P_C32_LW	0
#define P_C32_LC	0

#define P_C24_UC	24000
#define P_C24_UW	21000
#define P_C24_LW	0
#define P_C24_LC	0

#define P_C16_UC	14000
#define P_C16_UW	11000
#define P_C16_LW	0
#define P_C16_LC	0

#define P_C50_UC	40000
#define P_C50_UW	35000
#define P_C50_LW	0
#define P_C50_LC	0

#define P_C16D_UC	16000
#define P_C16D_UW	14000
#define P_C16D_LW	0
#define P_C16D_LC	0

#define P_C20D_UC	16000
#define P_C20D_UW	14000
#define P_C20D_LW	0
#define P_C20D_LC	0
#define P_C24D_UC	24000
#define P_C24D_UW	21000
#define P_C24D_LW	0
#define P_C24D_LC	0
#define P_C30D_UC	24000
#define P_C30D_UW	21000
#define P_C30D_LW	0
#define P_C30D_LC	0
#define P_C27D_UC	28000
#define P_C27D_UW	24000
#define P_C27D_LW	0
#define P_C27D_LC	0
#define P_C40D_UC	40000
#define P_C40D_UW	34000
#define P_C40D_LW	0
#define P_C40D_LC	0
#define P_C48D_UC	48000
#define P_C48D_UW	41000
#define P_C48D_LW	0
#define P_C48D_LC	0
#define P_C60D_UC	60000
#define P_C60D_UW	52000
#define P_C60D_LW	0
#define P_C60D_LC	0
#define P_C80D_UC	80000
#define P_C80D_UW	72000
#define P_C80D_LW	0
#define P_C80D_LC	0


#define P_C12ND_UC	12000
#define P_C12ND_UW	10000
#define P_C12ND_LW	0
#define P_C12ND_LC	0
#define P_C15ND_UC	13000
#define P_C15ND_UW	11000
#define P_C15ND_LW	0
#define P_C15ND_LC	0
#define P_C16ND_UC	16000
#define P_C16ND_UW	14000
#define P_C16ND_LW	0
#define P_C16ND_LC	0
#define P_C20ND_UC	16000
#define P_C20ND_UW	14000
#define P_C20ND_LW	0
#define P_C20ND_LC	0
#define P_C24ND_UC	24000
#define P_C24ND_UW	21000
#define P_C24ND_LW	0
#define P_C24ND_LC	0
#define P_C30ND_UC	24000
#define P_C30ND_UW	21000
#define P_C30ND_LW	0
#define P_C30ND_LC	0
#define P_C30JPND_UC	24000
#define P_C30JPND_UW	21000
#define P_C30JPND_LW	0
#define P_C30JPND_LC	0
#define P_C35ND_UC	28000
#define P_C35ND_UW	24000
#define P_C35ND_LW	0
#define P_C35ND_LC	0
#define P_C50ND_UC	40000
#define P_C50ND_UW	34000
#define P_C50ND_LW	0
#define P_C50ND_LC	0
#define P_C60ND_UC	48000
#define P_C60ND_UW	41000
#define P_C60ND_LW	0
#define P_C60ND_LC	0

#define P_C_RT		1000
#define P_C_CD		0
#define P_C_CT		0x0C

#define P_T_UC	0
#define P_T_UW	0
#define P_T_LW	0
#define P_T_LC	0
#define P_T_RT	0
#define P_T_CD	0
#define P_T_CT	0x0F

#define P_P_UC	0
#define P_P_UW	0
#define P_P_LW	0
#define P_P_LC	0
#define P_P_RT	0
#define P_P_CD	0
#define P_P_CT	0x0F

#define O_T_UC	0
#define O_T_UW	0
#define O_T_LW	0
#define O_T_LC	0
#define O_T_RT	0
#define O_T_CD	0
#define O_T_CT	0x0F
#define O_CUR10	10000
//#define O_CUR13	15000 //c13
//#define O_CUR16	20000 // c19

#define O_CUR13	10000 //c13
#define O_CUR16	16000 // c19

#define O_CURR20	20000
#define O_CURJP		15000

#define O_ACTMAX10	2600000
#define O_ACTMAX16	4160000
#define O_ACTMAXR20	2600000
#define O_ACTMAX13	3900000
#define O_ACTMAX19	5200000
#define O_ACTMAXJP	1950000

#define C_C63_UC	57000
#define C_C63_UW	45000
#define C_C63_LW	0
#define C_C63_LC	0
#define C_C32_UC	28000
#define C_C32_UW	22000
#define C_C32_LW	0
#define C_C32_LC	0
#define C_C20_UC	16000
#define C_C20_UW	14000
#define C_C20_LW	0
#define C_C20_LC	0
#define C_C16_UC	14000
#define C_C16_UW	11000
#define C_C16_LW	0
#define C_C16_LC	0
#define C_C_RT		1000
#define C_C_CD		0
#define C_C_CT		0x0C


#define UNITNUM			1


#define FUNC_DISABLE	0
#define FUNC_ENABLE		1

#define SCONTRAST_1		0
#define SCONTRAST_2		1
#define SCONTRAST_3		2
#define SCONTRAST_4		3
#define SCONTRAST_5		4

#define IP_DHCP			1
#define IP_STATIC		0

#define NETIFC_WIRED	1
#define NETIFC_WIRELESS	0

#define NETSPD_AUTO		1

#define NETDUP_AUTO		1

#define NET_AUTONEGO	0x80
#define NET_SPEEDAUTO	0x10
#define NET_SPEED10M	0x20
#define NET_SPEED100M	0x40
#define NET_DUPLEXAUTO	0x01
#define NET_DUPLEXFULL	0x02
#define NET_DUPLEXHALF	0x04

#define DEFAULT_IP			0x00000000
#define DEFAULT_STATICIP	0x0100A8C0
#define DEFAULT_NETMASK		0x00FFFFFF
#define DEFAULT_GATEWAY 	0x0100A8C0

#define TELNET_DEFAULTPORT	23
#define SSH_DEFAULTPORT 	22
#define HTTP_DEFAULTPORT	80
#define HTTPS_DEFAULTPORT	443
#define FTP_DEFAULTPORT		21
#define LDAP_DEFAULTPORT	389	
#define SYSLOG_DEFAULTPORT	514

#define FORCELOWERCASE		0x01
#define FORCEUPPERCASE		0x02
#define FORCENUMCASE		0x04
#define FORCESPECIAL		0x08
#define STRONGPWD_ENABLE	0x10

#define DEFAULTSNMPHOSTNAME	""
#define DEFAULTDNSINFO		""

#define DEFAULT_V1V2CCOMM	"public"
#define DEFAULT_V1V2CWRITE	"private"

#define DEFAULT_PWDINTERVAL	(0xFFFEAE80)
#define DEFAULT_MINIPWDLEN	8
#define DEFAULT_MAXIPWDLEN	32

#define DEFAULTLOGINNUM		3
#define DEFAULTBLOCKTIMEOUT	3
#define DEFAULTIDLETIMEOUT	10

#define SERVERREACHNAMELEN		64
#define SERVERREACH_MAX_NUM		8
#define DEFAULTSERVERREACHNUM	0

#define FMUPD_MAX_NUM			8
#define DEFAULTFMUPDNUM			0
#define DEFAULTFMUPDINDEX		0
#define DEFAULTFMUPDDATE		0

#define DEFAULTPDUMANUDATE		0

#define SMTPSSERVERNAMELEN		64
#define SMTPDEFAULTPORT			25
#define SMTPRETRY				3
#define SMTPINTERVAL			6
#define SMTPAUTHLEN				32
#define SMTPSUBJECTLEN			64


#define LDAPHOSTNAMELEN			64
#define SYSLOGNAMELEN			64


#define DEFAULT_ENERGYVALUE		0
#define DEFAULT_RESETENERGY		0
#define DEFAULT_PEAKPOWER		0
#define DEFAULT_CURRENT			0
#define DEFAULT_PEAKPOWERTIME	0

#define VER_LEN					8
#define VERTIME_LEN				32


#define DEFAULT_SYSUPDDONE		0
#define DEFAULT_SYSUPDINIT		1
#define DEFAULT_SYSUPDFAIL		2

#define DEFAULT_CONFUPDDONE		0
#define DEFAULT_CONFUPDINIT		1

#define DEFAULT_MULGLANGEN		0x656e
#define DEFAULT_MULGLANGDN		0x646e
#define DEFAULT_MULGLANGCN		0x636e

#define DAISY_MODE_QNA		0
#define DAISY_MODE_DNA		1

#define CPUID_LEN		12

#define MAXNUMCARDID	16


#pragma pack(1)

struct unit_alarm
{
	uint32_t	actpoweruppercritical;
	uint32_t	actpowerupperwarning;
	uint32_t	actpowerlowerwarning;
	uint32_t	actpowerlowercritical;
	uint32_t	actpowerresetthreshold;
	uint32_t	actpowerstatechangedelay;
	uint8_t		actpowerctrl;
};

struct phase_alarm
{
	uint32_t	voluppercritical;
	uint32_t	volupperwarning;
	uint32_t	vollowerwarning;
	uint32_t	vollowercritical;
	uint32_t	volresetthreshold;
	uint32_t	volstatechangedelay;
	uint8_t		volctrl;
	
	uint32_t	curuppercritical;
	uint32_t	curupperwarning;
	uint32_t	curlowerwarning;
	uint32_t	curlowercritical;
	uint32_t	curresetthreshold;
	uint32_t	curstatechangedelay;
	uint8_t 	curctrl;
	
	uint32_t	actpoweruppercritical;
	uint32_t	actpowerupperwarning;
	uint32_t	actpowerlowerwarning;
	uint32_t	actpowerlowercritical;
	uint32_t	actpowerresetthreshold;
	uint32_t	actpowerstatechangedelay;
	uint8_t		actpowerctrl;

	uint32_t	apppoweruppercritical;
	uint32_t	apppowerupperwarning;
	uint32_t	apppowerlowerwarning;
	uint32_t	apppowerlowercritical;
	uint32_t	apppowerresetthreshold;
	uint32_t	apppowerstatechangedelay;
	uint8_t		apppowerctrl;
};


struct outlet_alarm
{
	uint32_t	actpoweruppercritical;
	uint32_t	actpowerupperwarning;
	uint32_t	actpowerlowerwarning;
	uint32_t	actpowerlowercritical;
	uint32_t	actpowerresetthreshold;
	uint32_t	actpowerstatechangedelay;
	uint8_t		actpowerctrl;

	uint32_t	ratedcurrent;
};

struct cb_alarm
{
	uint32_t	curuppercritical;
	uint32_t	curupperwarning;
	uint32_t	curlowerwarning;
	uint32_t	curlowercritical;
	uint32_t	curresetthreshold;
	uint32_t	curstatechangedelay;
	uint8_t		curctrl;

	uint8_t 	cbtype;
	uint32_t 	ratedcurrent;
};

typedef struct sensor_alarm
{
	uint8_t		temhumuppercritical;
	uint8_t		temhumupperwarning;
	uint8_t		temhumlowerwarning;
	uint8_t		temhumlowercritical;
	uint8_t		temhumresetthreshold;
	uint8_t		temhumstatechangedelay;
	uint8_t		sensorctrl;
	uint8_t 	aisle;
}thsensor_alarm;

struct cb_config
{
	uint8_t		cbidx;
	uint64_t 	outlets;
};

struct phase_config
{
	uint8_t		phaseidx;
	uint64_t	outlets;
};

struct relay_config
{
	uint8_t		relayidx;
	uint8_t		outletnum;
	uint8_t 	cbnum;
};

struct outletmisc
{
 	char		name[MISC_LEN];
};

struct module_config_ext
{
	uint8_t		relay6618num;
	uint8_t		module_relay1outletnum;
	uint8_t		module_relay2outletnum;
};

struct pdu_feature_ext
{
	uint8_t 			sku[PREFIXSKU_LEN];
	struct module_config_ext moduleconf[RELAYNUM];
};

struct pdu_feature
{
	uint8_t 			sku[SKU_LEN];
	uint8_t				serial[SERIAL_LEN];
	uint8_t 			pdutype;
	uint8_t 			phasenum;
	uint8_t				phasetype;
	uint8_t 			cbnum;
	uint8_t 			outletnum;
	uint8_t				relaynum;
	uint32_t			inputcurrent;
	uint32_t			inputvoltage;
	uint32_t			minvoltage;
	uint32_t			maxvoltage;
	uint16_t			apppower;

	struct cb_config	cbconfig[CBNUM];
	struct phase_config	phaseconfig[PHASECONF];
	struct relay_config relayconfig[RELAYNUM];

	struct unit_alarm	unitalarm[UNITNUM];
	struct phase_alarm	phasealarm[THRWAY];
	struct outlet_alarm	outletalarm[OUTLETNUM];
	struct cb_alarm		cbalarm[CBNUM];	
};

struct pdu_config_feature
{
	uint8_t 			sku[SKU_LEN];
	uint8_t				serial[SERIAL_LEN]; 
	uint32_t 			pduconfigidx;

	struct unit_alarm	unitalarm[UNITNUM];
	struct phase_alarm	phasealarm[THRWAY];
	struct outlet_alarm	outletalarm[OUTLETNUM];
	struct cb_alarm		cbalarm[CBNUM];
};

struct pdu_config
{
	const struct pdu_feature pdu_m[Total_QTY];
};
 
struct pdu_hw_feature
{
	uint8_t  sys_hash[32];
	uint32_t sys_len;	 				
	uint32_t hash_len; 
	uint8_t  rsvr1;
	uint8_t  rsvr2;
	uint8_t  bootver;					
	uint8_t  sysupdinitflag;
	uint32_t sysdoneflag;
	uint8_t  pduupgrade;
	uint8_t  screenrotate180;
	uint8_t  macaddr[8];
};

struct serverreachable
{
	uint8_t  status;
	uint8_t  servername[SERVERREACHNAMELEN];
	uint8_t  pingenable;
	uint8_t  numofsucping;
	uint8_t  numofunsucping;
	uint32_t waittimebeforeresume;
};

struct fmupdhist
{
	uint8_t  timestamp[VERTIME_LEN];
	uint8_t  preversion[VER_LEN];
	uint8_t  updversion[VER_LEN];
	uint8_t  uptstatus[VER_LEN];
};

struct outlettimedelay	
{
	uint32_t powerondelay;
	uint32_t poweroffdelay;
	uint32_t rebootdelay;
};

struct event_rule
{
	uint32_t cala;
	uint32_t wala;
	uint32_t cbsc;
	uint32_t olsc;
	uint32_t essc;
	uint32_t pduc;
	uint32_t fmup;
	uint32_t ncrs;
	uint32_t cssc;
	uint32_t dcsc;
	uint32_t usbc;
	uint32_t spsc;
	uint32_t usra;
	uint32_t pswc;
	uint32_t rosc;
	uint32_t ussc;
};

struct smartrackcard
{
	uint32_t cardailse;
	uint32_t cardid;
	char	 carduser[USR_LEN];
	uint32_t cardcreatetime;
	char	 adapterserial[SENSORSERIALNUM_LEN];
};

struct pdu_misc_feature
{
	uint8_t  roleid;

	uint8_t  unitnum;
	uint8_t  network;
	uint8_t  ipsetting;
	uint8_t  networkinterface;
	uint8_t  networkspeed;
	uint8_t  networkduplex;
	uint32_t ipaddr;
	uint32_t netmask;
	uint32_t gateway;
	uint32_t dnssvripaddr1;
	uint32_t dnssvripaddr2;
	uint8_t  dnssuffix[MISC_LEN*2];
	uint8_t  dnshostname[MISC_LEN*2];
	uint8_t  dnsspecify;

	uint16_t httpport;
	uint16_t httpsport;
	uint16_t telnetport;
	uint16_t sshport;
	uint16_t ftpport;
	uint16_t snmptraphost1port;
	uint16_t snmptraphost2port;
	uint16_t snmptraphost3port;
	uint8_t  telnetenable;
	uint8_t  sshenable;
	uint8_t  forcehttpsenable;
	uint8_t  ftpenable;
	uint8_t  snmpv1v2cenable;
	uint8_t	 snmpv3enable;
	uint8_t  snmptrapenable;
	uint8_t  usbenable;
	uint8_t  recoverenable;
	uint8_t  screenalwayson;
	uint8_t  screencontrast;
	uint8_t  screentempunit;

	uint8_t  snmpreadcomm[MISC_LEN];
	uint8_t  snmpwritecomm[MISC_LEN];
	uint8_t	 snmphost1name[MISC_LEN];
	uint8_t  snmphost2name[MISC_LEN];
	uint8_t  snmphost3name[MISC_LEN];
	uint8_t	 snmphost1comm[MISC_LEN+IP_LEN];
	uint8_t  snmphost2comm[MISC_LEN+IP_LEN];
	uint8_t  snmphost3comm[MISC_LEN+IP_LEN];
	uint8_t  pduname[MISC_LEN];
	uint8_t  contactname[MISC_LEN];
	uint8_t  locationname[MISC_LEN];
	uint8_t  pdusystemname[MISC_LEN];
	uint8_t  pdusyslocation[MISC_LEN];	

	uint8_t  datalogging;
	uint32_t dataloginterval;
	uint32_t datalognewline;
	uint32_t datalogoldline;
	uint32_t eventlognewline;
	uint32_t eventlogoldline;

	uint8_t  loginblock;
	uint8_t  loginmaxnum;
	uint32_t blocktimeout;
	uint32_t idletimeout;

	uint8_t  pwdpolicy;
	uint32_t pwdaginginterval;
	uint8_t  strongminipwdlen;
	uint8_t  strongmaxipwdlen;

	uint32_t timezone;
	uint8_t  userorntp;
	uint32_t firstipserverip;
	uint32_t secondipserverip;

	struct 	 outletmisc	outletname[OUTLETNUM];
	uint32_t outletctrl;
	uint32_t outletctrlstartup;
	struct   outlettimedelay outletdelay[OUTLETNUM];
	uint8_t  outletstatectrl[OUTLETNUM];
	uint8_t  outletstatestartup[OUTLETNUM];
	uint16_t pducoldstart;
	uint8_t  pductrlstartup;

	uint32_t unitenergyclear;
	uint32_t unitenergy;
	uint32_t unitpeakpower;
	uint32_t unitpeakpowertimestamp;
	uint32_t unitpeakpowerstarttime;
	uint32_t phasepeakcurrent[THRWAY];
	uint8_t  resetpduenergy;
	uint8_t  resetoutletenergy;
	uint32_t pduenergystarttime;
	uint32_t resetpduenergyinfo;
	uint32_t resetoutletenergyinfo[OUTLETNUM];
	uint32_t outletenergy[OUTLETNUM];
	uint32_t outletenergyclear[OUTLETNUM];
	uint32_t outletpeakpower[OUTLETNUM];
	uint32_t outletenergystarttime;

	uint8_t  fmvercurrent[VER_LEN];
	struct   fmupdhist	fmupd[FMUPD_MAX_NUM];
	uint8_t  fmupdcount;
	uint8_t  fmupdoldestidex;
	uint32_t fmupddate;	
	uint32_t pdumanudate;

	struct   event_rule eventrule;
	struct   serverreachable  serverreach[SERVERREACH_MAX_NUM];
	uint8_t  serverreachcount;

	uint8_t  smtpservername[SMTPSSERVERNAMELEN];
	uint16_t smtpport;
	uint8_t  smtpsenderaddr[SMTPSSERVERNAMELEN];
	uint8_t  smtpretry;
	uint8_t  smtpinterval;
	uint8_t  smtpauth;
	uint8_t  smtpauthusername[SMTPAUTHLEN];
	uint8_t  smtpauthpassword[SMTPAUTHLEN];
	uint8_t  smtprecveraddr[SMTPSSERVERNAMELEN];

	uint8_t  ldaphostname[LDAPHOSTNAMELEN];	
	uint16_t ldapport;		  
	uint8_t  ldapenable;
	uint8_t  ldaptype;
	uint8_t  binddn[MISCINFO_LEN];	
	uint8_t  bindpwd[MISC_LEN];	   
	uint8_t  dnforsearch[MISC_LEN];	  
	uint8_t  loginnameattr[MISC_LEN];	
	uint8_t  userentryobjclass[MISC_LEN];  
	uint8_t  ldapauthusername[MISC_LEN];

	uint32_t outletpeakpowertimestamp[OUTLETNUM];
	uint32_t outletpeakpowerstarttime[OUTLETNUM];

	uint8_t  cboverloadstatus[CBNUM];
	uint8_t  inputphaseoverloadstatus[THRWAY];

	uint32_t pwdagingstarttime[USER_NUM];

	uint8_t  upgradeusername[USR_LEN];
	uint8_t  configuploadmode;

	uint8_t  addomainname[MISC_LEN];
	uint32_t ldsc;
	uint8_t  eventlogging;
	uint16_t multlangid;
	
	uint8_t  daisypduaddr[DAISY_UNIT_MAX];
	uint8_t  daisymode;
	
	uint8_t  cpuid[CPUID_LEN];
	uint8_t  sensorrecord[SENSORNUM];
	
	uint32_t unitpoweronenergy;
    
    uint32_t customercode;
	
	uint32_t energyaccum[POWER_CHIP_NUM][PHASE_NUM];
	uint32_t energyaccum_ext[POWER_CHIP_NUM][PHASE_NUM];
	
	uint32_t rackchangestatus;
	uint32_t rtctime;
	uint8_t  dnforsearch_ext[MISCINFO_LEN_EXT];
	uint8_t  binddn_ext[MISCINFO_LEN_EXT];
	uint32_t outletctrl_ext;
	uint32_t outletctrlstartup_ext;
	uint8_t  rack_reserve[84];
	
	uint8_t  sysloghostname[SYSLOGNAMELEN];	
	uint16_t syslogport;		  
	uint8_t  syslogenable;
	
	struct smartrackcard	rackcard[MAXNUMCARDID];
};

/*
typedef struct pdu_configure_file
{
	struct pdu_hw_feature 		hwfeature;
	struct pdu_config_feature	configfile; 	
	struct calibrate_parameter 	caliparam;
	struct user_role			userrole;
	struct pdu_misc_feature		miscfeature;
	uint8_t 					configsize;
}PDUSYSTEM;
*/
#pragma pack()

#define GETCONFSIZE(S, M)			(uint32_t)&(((S*)0x00)->M)

#define GETFREQOFFSET(S, C, P, M)	(uint32_t)&(((S*)0x00)->caliparam.freq_rate[C].freq_rate_phase[P].M)
#define GETVOLOFFSET(S, C, P, M)	(uint32_t)&(((S*)0x00)->caliparam.voltage_rate[C].voltage_rate_phase[P].M)
#define GETCUROFFSET(S, C, P, M)	(uint32_t)&(((S*)0x00)->caliparam.current_rate[C].current_rate_phase[P].M)
#define GETAPPOFFSET(S, C, P, M)	(uint32_t)&(((S*)0x00)->caliparam.app_rate[C].app_rate_phase[P].M)
#define GETACTOFFSET(S, C, P, M)	(uint32_t)&(((S*)0x00)->caliparam.act_rate[C].act_rate_phase[P].M)
#define GETENGOFFSET(S, C, P, M)	(uint32_t)&(((S*)0x00)->caliparam.energy_rate[C].energy_rate_phase[P].M)
#define GETTEMPEROFFSET(S, M)		(uint32_t)&(((S*)0x00)->caliparam.temper.M)

#define GETFREQOFFSET_EXT(S, C, P, M)	(uint32_t)&(((S*)0x00)->caliparam_ext.freq_rate[C].freq_rate_phase[P].M)
#define GETVOLOFFSET_EXT(S, C, P, M)	(uint32_t)&(((S*)0x00)->caliparam_ext.voltage_rate[C].voltage_rate_phase[P].M)
#define GETCUROFFSET_EXT(S, C, P, M)	(uint32_t)&(((S*)0x00)->caliparam_ext.current_rate[C].current_rate_phase[P].M)
#define GETAPPOFFSET_EXT(S, C, P, M)	(uint32_t)&(((S*)0x00)->caliparam_ext.app_rate[C].app_rate_phase[P].M)
#define GETACTOFFSET_EXT(S, C, P, M)	(uint32_t)&(((S*)0x00)->caliparam_ext.act_rate[C].act_rate_phase[P].M)
#define GETENGOFFSET_EXT(S, C, P, M)	(uint32_t)&(((S*)0x00)->caliparam_ext.energy_rate[C].energy_rate_phase[P].M)
#define GETTEMPEROFFSET_EXT(S, M)		(uint32_t)&(((S*)0x00)->caliparam_ext.temper.M)

#define GETSYSTEMOFFSET(S, M)	(uint32_t)&(((S*)0x00)->M)
#define GETCONFIGOFFSET(S, M)	(uint32_t)&(((S*)0x00)->configfile.M)
#define GETHWOFFSET(S, M)		(uint32_t)&(((S*)0x00)->hwfeature.M)			
#define GETMISCOFFSET(S, M)		(uint32_t)&(((S*)0x00)->miscfeature.M)
#define GETUSEROFFSET(S, M)		(uint32_t)&(((S*)0x00)->userrole.M)

/*
void setauthuserobj(authobject *buffer, uint8_t index, uint8_t count);
void getauthuserobj(authobject *buffer, uint8_t index, uint8_t count);
*/
void setusercount(uint8_t count);
void getusercount(uint8_t *count);
/*
void setroleobj(roleobject *buffer, uint8_t index, uint8_t count);
void getroleobj(roleobject *buffer, uint8_t index, uint8_t count);
*/
void setrolecount(uint8_t count);
void getrolecount(uint8_t *count);

void sethwfeature(uint8_t *buffer);
void gethwfeature(uint8_t *buffer);
void setconfigfile(uint8_t *buffer);
void getconfigfile(uint8_t *buffer);
void setcaliparam(uint8_t *buffer);
void getcaliparam(uint8_t *buffer);
void setmiscfeature(uint8_t *buffer);
void getmiscfeature(uint8_t *buffer);
void setuserrole(uint8_t *buffer);
void getuserrole(uint8_t *buffer);

void setfreqrate_a(uint8_t chip, uint8_t phase, double a);
void setfreqrate_b(uint8_t chip, uint8_t phase, double b);
void getfreqrate_a(uint8_t chip, uint8_t phase, double *a);
void getfreqrate_b(uint8_t chip, uint8_t phase, double *b);

void setvoltagerate_a(uint8_t chip, uint8_t phase, double a);
void setvoltagerate_b(uint8_t chip, uint8_t phase, double b);
void getvoltagerate_a(uint8_t chip, uint8_t phase, double *a);
void getvoltagerate_b(uint8_t chip, uint8_t phase, double *b);

void setcurrentrate_a(uint8_t chip, uint8_t phase, double a);
void setcurrentrate_b(uint8_t chip, uint8_t phase, double b);
void getcurrentrate_a(uint8_t chip, uint8_t phase, double *a);
void getcurrentrate_b(uint8_t chip, uint8_t phase, double *b);
void setcurrentreg_point(uint8_t chip, uint8_t phase, uint32_t val);
void getcurrentreg_point(uint8_t chip, uint8_t phase, uint32_t *val);
void setcurrentrate_a_plus(uint8_t chip, uint8_t phase, double a);
void setcurrentrate_b_plus(uint8_t chip, uint8_t phase, double b);
void getcurrentrate_a_plus(uint8_t chip, uint8_t phase, double *a);
void getcurrentrate_b_plus(uint8_t chip, uint8_t phase, double *b);

void setapparentpowerrate_a(uint8_t chip, uint8_t phase, double a);
void setapparentpowerrate_b(uint8_t chip, uint8_t phase, double b);
void getapparentpowerrate_a(uint8_t chip, uint8_t phase, double *a);
void getapparentpowerrate_b(uint8_t chip, uint8_t phase, double *b);
void setapparentpowerreg_point(uint8_t chip, uint8_t phase, uint32_t val);
void getapparentpowerreg_point(uint8_t chip, uint8_t phase, uint32_t *val);
void setapparentpowerrate_a_plus(uint8_t chip, uint8_t phase, double a);
void setapparentpowerrate_b_plus(uint8_t chip, uint8_t phase, double b);
void getapparentpowerrate_a_plus(uint8_t chip, uint8_t phase, double *a);
void getapparentpowerrate_b_plus(uint8_t chip, uint8_t phase, double *b);	 

void setenergyrate_a(uint8_t chip, uint8_t phase, double a);
void setenergyrate_b(uint8_t chip, uint8_t phase, double b);
void getenergyrate_a(uint8_t chip, uint8_t phase, double *a);
void getenergyrate_b(uint8_t chip, uint8_t phase, double *b);
void setenergyreg_point(uint8_t chip, uint8_t phase, uint32_t val);
void getenergyreg_point(uint8_t chip, uint8_t phase, uint32_t *val);
void setenergyrate_a_plus(uint8_t chip, uint8_t phase, double a);
void setenergyrate_b_plus(uint8_t chip, uint8_t phase, double b);
void getenergyrate_a_plus(uint8_t chip, uint8_t phase, double *a);
void getenergyrate_b_plus(uint8_t chip, uint8_t phase, double *b);	 

void setactivepowerrate_a(uint8_t chip, uint8_t phase, double a);
void setactivepowerrate_b(uint8_t chip, uint8_t phase, double b);
void getactivepowerrate_a(uint8_t chip, uint8_t phase, double *a);
void getactivepowerrate_b(uint8_t chip, uint8_t phase, double *b);
void setactivepowerreg_point(uint8_t chip, uint8_t phase, uint32_t val);
void getactivepowerreg_point(uint8_t chip, uint8_t phase, uint32_t *val);
void setactivepowerrate_a_plus(uint8_t chip, uint8_t phase, double a);
void setactivepowerrate_b_plus(uint8_t chip, uint8_t phase, double b);
void getactivepowerrate_a_plus(uint8_t chip, uint8_t phase, double *a);
void getactivepowerrate_b_plus(uint8_t chip, uint8_t phase, double *b);

void settemperreg(uint32_t val);
void gettemperreg(uint32_t *val);
void settempervalue(uint32_t val);
void gettempervalue(uint32_t *val);

void setsku(uint8_t *buffer);
void getsku(uint8_t *buffer);
void setserial(uint8_t *buffer);
void getserial(uint8_t *buffer);

void setunitalarm(uint8_t *buffer, uint8_t idx);
void getunitalarm(uint8_t *buffer, uint8_t idx);
void setphasealarm(uint8_t *buffer, uint8_t idx);
void getphasealarm(uint8_t *buffer, uint8_t idx);
void setoutletalarm(uint8_t *buffer, uint8_t idx);
void getoutletalarm(uint8_t *buffer, uint8_t idx);
void setcbalarm(uint8_t *buffer, uint8_t idx);
void getcbalarm(uint8_t *buffer, uint8_t idx);

void setpduname(uint8_t *buffer);
void getpduname(uint8_t *buffer);
void setcontactname(uint8_t *buffer);
void getcontactname(uint8_t *buffer);
void setlocationname(uint8_t *buffer);
void getlocationname(uint8_t *buffer);

void setpdusysname(uint8_t *buffer);
void getpdusysname(uint8_t *buffer);
void setpdusyslocation(uint8_t *buffer);
void getpdusyslocation(uint8_t *buffer);

void setsnmphost1name(uint8_t *buffer);
void getsnmphost1name(uint8_t *buffer);
void setsnmphost2name(uint8_t *buffer);
void getsnmphost2name(uint8_t *buffer);
void setsnmphost3name(uint8_t *buffer);
void getsnmphost3name(uint8_t *buffer);

void setunitnum(uint8_t cnt);
void getunitnum(uint8_t *cnt);

void setoutletname(uint8_t *buffer, uint8_t idx);
void getoutletname(uint8_t *buffer, uint8_t idx);


void setpduconfigidx(uint32_t idx);
void getpduconfigidx(uint32_t *idx);
void setpduupgrade(uint8_t flag);
void getpduupgrade(uint8_t *pduypgrade);
void setmacaddr(uint8_t *buffer);
void getmacaddr(uint8_t *buffer);
void setdataloginterval(uint32_t time);
void getdataloginterval(uint32_t *time);
void setdatalogging(uint8_t flag);
void getdatalogging(uint8_t *flag);
void seteventlogging(uint8_t flag);
void geteventlogging(uint8_t *flag);

void gethttpport(uint16_t *port);
void sethttpport(uint16_t port);
void gethttpsport(uint16_t *port);
void sethttpsport(uint16_t port);
void gettelnetport(uint16_t *port);
void settelnetport(uint16_t port);
void getsshport(uint16_t *port);
void setsshport(uint16_t port);
void getftpport(uint16_t *port);
void setftpport(uint16_t port);
void getforcehttpsflag(uint8_t *flag);
void setforcehttpsflag(uint8_t flag);

void getsnmptraphost1port(uint16_t *port);
void setsnmptraphost1port(uint16_t port);
void getsnmptraphost2port(uint16_t *port);
void setsnmptraphost2port(uint16_t port);
void getsnmptraphost3port(uint16_t *port);
void setsnmptraphost3port(uint16_t port);

void setsnmpreadcomm(uint8_t *buffer);
void getsnmpreadcomm(uint8_t *buffer);
void setsnmpwritecomm(uint8_t *buffer);
void getsnmpwritecomm(uint8_t *buffer);

void setsnmphost1comm(uint8_t *buffer);
void getsnmphost1comm(uint8_t *buffer);
void setsnmphost2comm(uint8_t *buffer);
void getsnmphost2comm(uint8_t *buffer);
void setsnmphost3comm(uint8_t *buffer);
void getsnmphost3comm(uint8_t *buffer);

void settelnetstatus(uint8_t flag);
void gettelnetstatus(uint8_t *flag);
void setsshstatus(uint8_t flag);
void getsshstatus(uint8_t *flag);
void setftpstatus(uint8_t flag);
void getftpstatus(uint8_t *flag);

void setsnmpv1v2cstatus(uint8_t flag);
void getsnmpv1v2cstatus(uint8_t *flag);
void setsnmpv3status(uint8_t flag);
void getsnmpv3status(uint8_t *flag);
void setsnmptrapstatus(uint8_t flag);
void getsnmptrapstatus(uint8_t *flag);

void setoutletdelay(struct outlettimedelay *delaytime, uint8_t index);
void getoutletdelay(struct outlettimedelay *delaytime, uint8_t index);

void setoutletstatectrl(uint8_t flag, uint8_t idx);
void getoutletstatectrl(uint8_t *flag, uint8_t idx);
void setoutletstatestartup(uint8_t flag, uint8_t idx);
void getoutletstatestartup(uint8_t *flag, uint8_t idx);
void setoutletctrl(uint64_t flag);
void getoutletctrl(uint64_t *flag);
void setoutletctrlstartup(uint64_t flag);
void getoutletctrlstartup(uint64_t *flag);
void setpductrlstartup(uint8_t flag);
void getpductrlstartup(uint8_t *flag);
void setpducoldstart(uint16_t val);
void getpducoldstart(uint16_t *val);

void setconfiguploadmode(uint8_t flag);
void getconfiguploadmode(uint8_t *flag);
void setusbstatus(uint8_t flag);
void getusbstatus(uint8_t *flag);
void setscreenstatus(uint8_t flag);
void getscreenstatus(uint8_t *flag);
void setscreenrotate180(uint8_t flag);
void getscreenrotate180(uint8_t *flag);
void setscreencontrast(uint8_t flag);
void getscreencontrast(uint8_t *flag);

void setscreentempunit(uint8_t flag);
void getscreentempunit(uint8_t *flag);
void setrecoverconfig(uint8_t flag);
void getrecoverconfig(uint8_t *flag);
void setipsetting(uint8_t flag);
void getipsetting(uint8_t *flag);
void setipaddr(uint32_t ipaddr);
void getipaddr(uint32_t *ipaddr);
void setnetmaskaddr(uint32_t netmask);
void getnetmaskaddr(uint32_t *netmask);
void setgwaddr(uint32_t gateway);
void getgwaddr(uint32_t *gateway);
void setnetwork(uint8_t flag);
void getnetwork(uint8_t *flag);
void setdnsipaddr1(uint32_t ipaddr);
void getdnsipaddr1(uint32_t *ipaddr);
void setdnsipaddr2(uint32_t ipaddr);
void getdnsipaddr2(uint32_t *ipaddr);
void setnetworkinterface(uint8_t flag);
void getnetworkinterface(uint8_t *flag);
void setnetworkspeed(uint8_t flag);
void getnetworkspeed(uint8_t *flag);
void setnetworkduplex(uint8_t flag);
void getnetworkduplex(uint8_t *flag);
void setdnssuffix(uint8_t *buffer);
void getdnssuffix(uint8_t *buffer);
void setdnshostname(uint8_t *buffer);
void getdnshostname(uint8_t *buffer);
void setdnsspecify(uint8_t val);
void getdnsspecify(uint8_t *val);

void setloginblock(uint8_t loginblock);
void getloginblock(uint8_t *loginblock);
void setloginmaxnum(uint8_t loginmaxnum);
void getloginmaxnum(uint8_t *loginmaxnum);
void setblocktimeout(uint32_t blocktimeout);
void getblocktimeout(uint32_t *blocktimeout);
void setidletimeout(uint32_t idletimeout);
void getidletimeout(uint32_t *idletimeout);

void setpwdpolicy(uint8_t value);
void getpwdpolicy(uint8_t *value);
void setpwdaginginterval(uint32_t interval);
void getpwdaginginterval(uint32_t *interval);
void setstrongminipwdlen(uint8_t len);
void getstrongminipwdlen(uint8_t *len);
void setstrongmaxipwdlen(uint8_t len);
void getstrongmaxipwdlen(uint8_t *len);

void setsysupdinitflag(uint8_t flag);
void getsysupdinitflag(uint8_t *flag);

void setsysbootupgradeflag(uint8_t flag);
void getsysbootupgradeflag(uint8_t *flag);

void getsysdatetime(uint32_t *val);
void setsysdatetime(uint32_t val);

void setbootver(uint8_t ver);
void getbootver(uint8_t *ver);

void settimezone(uint32_t zone);
void gettimezone(uint32_t *zone);
void setuserorntp(uint8_t userntp);
void getuserorntp(uint8_t *userntp);
void setfirstipserverip(uint32_t ip);
void getfirstipserverip(uint32_t *ip);
void setsecondipserverip(uint32_t ip);
void getsecondipserverip(uint32_t *ip);

void setserverreachcount(uint8_t count);
void getserverreachcount(uint8_t *count);
void setserverreach(struct serverreachable *buffer, uint8_t idx);
void getserverreach(struct serverreachable *buffer, uint8_t idx);

void setuserroleid(uint8_t id);
void getuserroleid(uint8_t *id);

void setresetpduenergy(uint8_t val);
void getresetpduenergy(uint8_t *val);

void setresetoutletenergy(uint8_t val);
void getresetoutletenergy(uint8_t *val);

void setpduenergystarttime(uint32_t val);
void getpduenergystarttime(uint32_t *val);
void setoutletenergystarttime(uint32_t val);
void getoutletenergystarttime(uint32_t *val);

void setunitpeakpowertimestamp(uint32_t val);
void getunitpeakpowertimestamp(uint32_t *val);
void setunitpeakpowerstarttime(uint32_t val);
void getunitpeakpowerstarttime(uint32_t *val);

void setunitenergyclear(uint32_t val);
void getunitenergyclear(uint32_t *val);
void setunitpeakpower(uint32_t val);
void getunitpeakpower(uint32_t *val);
void setphasepeakcurrent(uint32_t val, uint8_t phaseidx);
void getphasepeakcurrent(uint32_t *val, uint8_t phaseidx);
void setunitenergy(uint32_t val);
void getunitenergy(uint32_t *val);
void setoutletpeakpower(uint32_t val, uint8_t idx);
void getoutletpeakpower(uint32_t *val, uint8_t idx);
void setoutletenergyclear(uint32_t val, uint8_t idx);
void getoutletenergyclear(uint32_t *val, uint8_t idx);
void setoutletenergy(uint32_t val, uint8_t idx);
void getoutletenergy(uint32_t *val, uint8_t idx);
void setresetpduenergyinfo(uint32_t val);
void getresetpduenergyinfo(uint32_t *val);
void setresetoutletenergyinfo(uint32_t val, uint8_t idx);
void getresetoutletenergyinfo(uint32_t *val, uint8_t idx);
void setoutletpeakpowertimestamp(uint32_t val, uint8_t idx);
void getoutletpeakpowertimestamp(uint32_t *val, uint8_t idx);
void setoutletpeakpowerstarttime(uint32_t val, uint8_t idx);
void getoutletpeakpowerstarttime(uint32_t *val, uint8_t idx);

void setpwdagingstarttime(uint32_t val, uint8_t idx);
void getpwdagingstarttime(uint32_t *val, uint8_t idx);

void setfmupdhist(struct fmupdhist *buffer, uint8_t idx);
void getfmupdhist(struct fmupdhist *buffer, uint8_t idx);
void setfmupdcount(uint8_t count);
void getfmupdcount(uint8_t *count);
void setfmupdoldestidex(uint8_t idx);
void getfmupdoldestidex(uint8_t *idx);
void setfmvercurrent(uint8_t *ver);
void getfmvercurrent(uint8_t *ver);
void setfmuptdate(uint32_t date);
void getfmuptdate(uint32_t *date);
void setpdumanudate(uint32_t date);
void getpdumanudate(uint32_t *date);

void setsmtpservername(uint8_t *buffer);
void getsmtpservername(uint8_t *buffer);
void setsmtpport(uint16_t port);
void getsmtpport(uint16_t *port);
void setsmtpsenderaddr(uint8_t *buffer);
void getsmtpsenderaddr(uint8_t *buffer);
void setsmtpretry(uint8_t val);
void getsmtpretry(uint8_t *val);
void setsmtpinterval(uint8_t val);
void getsmtpinterval(uint8_t *val);
void setsmptrecvaddr(uint8_t *buffer);
void getsmtprecvaddr(uint8_t *buffer); 
void setsmtpauth(uint8_t val);
void getsmtpauth(uint8_t *val);
void setsmptauthusername(uint8_t *buffer);
void getsmtpauthusername(uint8_t *buffer); 
void setsmptauthpassword(uint8_t *buffer);
void getsmtpauthpassword(uint8_t *buffer); 

void setldaphostname(uint8_t *buffer);
void getldaphostname(uint8_t *buffer);
void setldapport(uint16_t port);
void getldapport(uint16_t *port);
void setldapenable(uint8_t val);
void getldapenable(uint8_t *val);
void setldaptype(uint8_t val);
void getldaptype(uint8_t *val);
void setbinddn(uint8_t *buffer);
void getbinddn(uint8_t *buffer);
void setbindpwd(uint8_t *buffer);
void getbindpwd(uint8_t *buffer);
void setdnforsearch(uint8_t *buffer);
void getdnforsearch(uint8_t *buffer);
void setloginnameattr(uint8_t *buffer);
void getloginnameattr(uint8_t *buffer);
void setuserentryobjclass(uint8_t *buffer);
void getuserentryobjclass(uint8_t *buffer);
void setldapauthusername(uint8_t *buffer);
void getldapauthusername(uint8_t *buffer);
void setaddomainname(uint8_t *buffer);
void getaddomainname(uint8_t *buffer);


void seteventcriticalalarm(uint32_t val);
void geteventcriticalalarm(uint32_t *val);
void seteventwarningalarm(uint32_t val);
void geteventwarningalarm(uint32_t *val);
void seteventcbstatus(uint32_t val);
void geteventcbstatus(uint32_t *val);
void seteventoutletstatus(uint32_t val);
void geteventoutletstatus(uint32_t *val);
void seteventsensorstatus(uint32_t val);
void geteventsensorstatus(uint32_t *val);
void seteventpduconfig(uint32_t val);
void geteventpduconfig(uint32_t *val);
void seteventfirmwareupdate(uint32_t val);
void geteventfirmwareupdate(uint32_t *val);
void seteventnetworkreset(uint32_t val);
void geteventnetworkreset(uint32_t *val);
void seteventcomstatus(uint32_t val);
void geteventcomstatus(uint32_t *val);
void seteventdaisystatus(uint32_t val);
void geteventdaisystatus(uint32_t *val);
void seteventusbstatus(uint32_t val);
void geteventusbstatus(uint32_t *val);
void seteventserverstatus(uint32_t val);
void geteventserverstatus(uint32_t *val);
void seteventuseractivity(uint32_t val);
void geteventuseractivity(uint32_t *val);
void seteventpwchange(uint32_t val);
void geteventpwchange(uint32_t *val);
void seteventrolestatus(uint32_t val);
void geteventrolestatus(uint32_t *val);
void seteventuserstatus(uint32_t val);
void geteventuserstatus(uint32_t *val);
void seteventldapstatus(uint32_t val);
void geteventldapstatus(uint32_t *val);


void setmultlangid(uint16_t val);
void getmultlangid(uint16_t *val);

void setupgradeusername(uint8_t *buffer);
void getupgradeusername(uint8_t *buffer);

void getcboverloadstatus(uint8_t *flag, uint8_t idx);
void setcboverloadstatus(uint8_t flag, uint8_t idx);
void getinputphaseoverloadstatus(uint8_t *flag, uint8_t idx);
void setinputphaseoverloadstatus(uint8_t flag, uint8_t idx);


void getdaisymode(uint8_t *mode);
void setdaisymode(uint8_t mode);

void getsensorrecord(uint8_t *type, uint8_t idx);
void setsensorrecord(uint8_t type, uint8_t idx);


void pduconfigselect(uint32_t *selectconfigidx, uint8_t *sku);
void pdu_config_init(void);

void recoverftconfig(void);
void setselectedconfigaddr(void);
void setdefaultconfigaddr(void);
void pdu_upgrade_init(void);

struct pdu_feature * getselectedpduconfigaddr(uint32_t idx);
struct pdu_feature *getselectedconfigaddr(void);

uint8_t issetsku(void);
uint8_t isskuexist(uint32_t selectconfigidx);

uint8_t getpduremapoutlet(uint8_t outletidx);
uint8_t getpduoutletnum(void);
uint8_t getprerelaystotaloutletnum(uint8_t relayaddr);
uint8_t getpduoutletnumperrelay(uint8_t relayaddr);
uint8_t getpdurelaynum(void);

void pdu_default_hwfeature_config_init(void);
void pdu_default_caliparam_config_init(void);
void pdu_default_misc_config_init(void);
void pdu_default_user_config_init(void);
void pdu_default_role_config_init(void);
void pdu_default_mib_config_init(void);

#endif
/**********************************************************
         6 CB
B1 -> CT1 -> J1 (chip1 phase 1)
B2 -> CT2 -> J2 (chip1 phase 2)
B3 -> CT3 -> J5 (chip2 phase 2)
B4 -> CT4 -> J3 (chip1 phase 3)
B5 -> CT5 -> J6 (chip2 phase 3)
B6 -> CT6 -> J4 (chip2 phase 1)

L1 = B1 + B6
L2 = B2 + B3
L3 = B4 + B5

		2 CB
B1 -> CT1 -> J1 (chip1 phase 1)
B2 -> CT2 -> J2 (chip1 phase 2)

		0CB
L1 -> CT1 -> J1 (chip1 phase1)
L2 -> CT2 -> J2 (chip1 phase2)
L3 -> CT3 -> J3 (chip1 phase3)



***********************************************************/
