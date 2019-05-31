#include<stdio.h>
#include<stdlib.h>
#define BUFFERSIZE 1000

static char AllocatedBuffer[BUFFERSIZE];
static char *allocSize=AllocatedBuffer;

	void occupieSize(int a)
	{

		if(AllocatedBuffer+BUFFERSIZE - allocSize>=a)
		printf("allocation under size\n");
		else
		printf("Invalid size\n");
	}


int main()
{

	occupieSize(14);
	free(AllocatedBuffer);

	return 0;
}
