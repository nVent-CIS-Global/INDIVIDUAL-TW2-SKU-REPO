
#include "pduconftw2.h"
#define BUFFSIZE 384*1024

static char buff[BUFFSIZE] = {0}; 
static const struct pdu_config pduconfig = 
{
	/***************************************ALL TYPE add at the end***************************/
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
	{0} },




	
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


