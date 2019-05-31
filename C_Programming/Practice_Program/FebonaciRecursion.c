#include<stdio.h>

int febonaci(int c)
{

	if (c==1)
		return 1;
	else
		return c * febonaci(c-1);
}

int main()
{
int a=5;
	printf ("%d=%d",a,febonaci(5));

	

return 0;
}

