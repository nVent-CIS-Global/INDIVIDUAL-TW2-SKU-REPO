
#include "pduconftw2.h"
#define BUFFSIZE 384*1024

static char buff[BUFFSIZE] = {0}; 
static const struct pdu_config pduconfig = 
{
	/***************************************ALL TYPE add at the end***************************/
	{
	/****************************************************APDU104HPME M************************************************************************/
	{ "APDU104HPME", "AAAA0000", M_TYPE, THRWAY, YWAY, 0, 36, 0, INPUT_CUR80, INPUT_VOL240,INPUT_VOL346,INPUT_VOL415,576,
	// bank config
		{0},
	// phase config
		{0},
	// relay config
		{0},
	// unit alarm
		{ U_T_UC, U_T_UW, U_T_LW, U_T_LC, U_T_RT, U_T_CD, U_T_CT},
	// phase alarm
		{{P_230V_UC, P_230V_UW, P_230V_LW, P_230V_LC, P_V_RT, P_V_CD, P_V_CT,
		P_C80D_UC, P_C80D_UW, P_C80D_LW, P_C80D_LC, P_C_RT, P_C_CD, P_C_CT,
		P_T_UC, P_T_UW, P_T_LW, P_T_LC, P_T_RT, P_T_CD, P_T_CT,
		P_P_UC, P_P_UW, P_P_LW, P_P_LC, P_P_RT, P_P_CD, P_P_CT},
		{P_230V_UC, P_230V_UW, P_230V_LW, P_230V_LC, P_V_RT, P_V_CD, P_V_CT,
		P_C80D_UC, P_C80D_UW, P_C80D_LW, P_C80D_LC, P_C_RT, P_C_CD, P_C_CT,
		P_T_UC, P_T_UW, P_T_LW, P_T_LC, P_T_RT, P_T_CD, P_T_CT,
		P_P_UC, P_P_UW, P_P_LW, P_P_LC, P_P_RT, P_P_CD, P_P_CT},
		{P_230V_UC, P_230V_UW, P_230V_LW, P_230V_LC, P_V_RT, P_V_CD, P_V_CT,
		P_C80D_UC, P_C80D_UW, P_C80D_LW, P_C80D_LC, P_C_RT, P_C_CD, P_C_CT,
		P_T_UC, P_T_UW, P_T_LW, P_T_LC, P_T_RT, P_T_CD, P_T_CT,
		P_P_UC, P_P_UW, P_P_LW, P_P_LC, P_P_RT, P_P_CD, P_P_CT}},
	// outlet alarm
		{0},
	// cb alarm
		{0}
	},
/****************************************APDU10150MO 2************************************************/
	{"APDU10150MO","AAAA0000",MPLUS_TYPE,ONEWAY,LNWAY,2,40,5,INPUT_CUR32,INPUT_VOL230,INPUT_VOL200,INPUT_VOL240,74,
	//cb config
	{ {1,0xF0F0F0F0F}, {2,0xF0F0F0F0F0}},
	//phase config
	{ {1,0xFFFFFFFFFF} },
	//relay config
	{ {1,8,2}, {2,8,2}, {3,8,2} ,{4,8,2}, {5,8,2} },
	//unit alarm
	{  U_T_UC, U_T_UW, U_T_LW, U_T_LC, U_T_RT, U_T_CD, U_T_CT  },
	//phase alarm
	{ {P_230V_UC, P_230V_UW, P_230V_LW, P_230V_LC, P_V_RT, P_V_CD, P_V_CT,
	P_C32_UC, P_C32_UW, P_C32_LW, P_C32_LC, P_C_RT, P_C_CD, P_C_CT,
	P_T_UC, P_T_UW, P_T_LW, P_T_LC, P_T_RT, P_T_CD, P_T_CT,
	P_P_UC, P_P_UW, P_P_LW, P_P_LC, P_P_RT, P_P_CD, P_P_CT} },
	//outlet alarm
	{ {O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR13},
	{O_T_UC, O_T_UW, O_T_LW, O_T_LC, O_T_RT, O_T_CD, O_T_CT, O_CUR16}},
	//cb alarm
	{ {C_C20_UC, C_C20_UW, C_C20_LW, C_C20_LC, C_C_RT, C_C_CD, C_C_CT, CB_POLE1, CB_CUR20},
	{C_C20_UC, C_C20_UW, C_C20_LW, C_C20_LC, C_C_RT, C_C_CD, C_C_CT, CB_POLE1, CB_CUR20} }},
	},

};


int main()
{
	FILE *fd;
	int fw = 0;
	char buffer[1] = {0xff};
	struct stat buf;
	int i = 0;
	char skufilename[SKU_LEN + 4] = { 0 };
	char skufolder[] = "skubin\\";

	mkdir(skufolder);
	for (i = 0; i < Total_QTY; i++) {
		memset(buff, 0, sizeof(buff));
		memcpy(buff, &pduconfig.pdu_m[i], sizeof(pduconfig.pdu_m[i]));
		memset(skufilename, 0, sizeof(skufilename));
		strcpy(skufilename, skufolder);
		strcat(skufilename, &pduconfig.pdu_m[i].sku);
		strcat(skufilename, ".bin");
		/*generate the file*/
		fd = fopen(skufilename, "wb+");
		if (fd == NULL) {
			return 1;
		}

		fw = fwrite(buff, 1, sizeof(pduconfig.pdu_m[i]), fd);
		//	printf("%d, \n", fw);
		fclose(fd);
	}
	return 0;
}


