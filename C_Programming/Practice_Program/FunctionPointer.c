#include<stdio.h>


int sum(int a, int b)
{
int bb=a+b;
printf ("Sum=%d \n ",bb);
return 0;
}

int main()
{
	int(*FunPtr)(int)=sum;

//(*FunPtr)(10);
FunPtr(10);


return 0;
}

