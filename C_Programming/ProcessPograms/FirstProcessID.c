#include<stdio.h>
#include<unistd.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdlib.h>


int main()
{
	uint32_t Process_ID=0;

	
	if(fork()==0)
	{
		printf("Child Pocess Id=%"PRIu32 "\n", Process_ID = getpid()) ;
	}
	else
	{
		printf("Parent Process Id=%"PRIu32 "\n", Process_ID = getpid());
	}

	return 0;

}
