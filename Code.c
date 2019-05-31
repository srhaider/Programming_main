#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<inttypes.h>

#define TESTCASE_MAX 10
#define TESTCASE_MIN 1
#define VILLIAN_PLAYER_MIN 1
#define VILLIAN_PLAYER_MAX 1000
#define ENERGY_STRENGTH_MIN 1
#define ENERGY_STRENGTH_MAX 100000
#define VILLIAN_PLAYER_SEPRATION 
typedef  uint8_t TEST_CASE;
typedef uint8_t VIL_PLR;
typedef uint32_t VILIAN_STRENGTH;
typedef uint32_t Player_Energy;



void getEnergy_Strength(uint8_t *Capacity)
{
	
	
}

int main()
{
	uint8_t i,j,ch;
	TEST_CASE T=1;	//Test Case No
	VIL_PLR N=1;	//No of Player and Villian
	VILIAN_STRENGTH *vs=0x0;
	
	uint8_t MSG[]="Please Enter Test Case";	
	uint16_t abc;
	uint16_t arr[10];

	scanf("%" SCNu8 , &T);
	scanf("%" SCNu8 , &N);
	
	vs=malloc(sizeof(uint16_t)*N);
	
	
	
	
//	printf("%" PRIu16 "\n", T);
	
		
	//for (; str[i-1]!='\n';i++)
	//{	
	
	/*	no=0;
	for(i=0;str[i]!='\n';i++)
	{
		if(str[i]!=' ')
		no=(no*10)+str[i];		
		else
		{
			arr[j]=no;
			no=0;
			j++;
			printf("%d = No coppied", j );
		}
	}
printf("\nResult");
for (i=0;i<5;i++)
		{
			printf("%d", arr[i]);
		}

*/
	//	spc++;

	//	if (spc==5);
	//	break;
	//}

//VILIAN_STRENGTH=malloc((sizeof (uint32_t)*VIL_PLR));
/*
	for (;str[i]!='\0'; i++)
	{
			if (str[i]==' ')
			printf("\n ");
			else
			printf("%c", str[i]);

	}
	*/
//printf("While Executed \n");



return 0;
}
