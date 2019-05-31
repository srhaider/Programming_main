#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h>
#include<stdint.h>


int main()
{
	uint16_t *abc=0x0;
int i=0;
	uint16_t ch;
uint16_t no=0;

	abc=malloc((sizeof(uint16_t)*8));

	scanf("%" SCNu16, abc);

/*
	
	for (i=0;i<8;i++)
	{ 
	printf  ("%" SCNd8, abc[i]);
	}

*/
for (;abc[i]!='\n';i++)
printf("%" PRIu16 ,abc[i] );


return 0;
}

