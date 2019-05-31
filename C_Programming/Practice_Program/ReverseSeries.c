#include<stdio.h>

int printReverse(int a)
{
	if (a==0)
		return 0;
	else
		return printReverse(a-1);
}

int main()
{

	int x=19;

printf ("%d",printReverse(x));



return 0;
}
