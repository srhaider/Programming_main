#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int reverse(int s)
{
	if (s==0)
	return 0;
	else
	reverse(s-1);
	printf(" %d- ", s);

}

int main()
{
	int str=5;
	reverse(str);

return 0;
}


