#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * reverse(char *p)
{
if (*p=='\0')
	return p;

return reverse (p+1);


}

int main()
{
char str[20]="Rizwan Haider";


//printf("string = %s\n",str);
printf("string length is= %ld\n",strlen(str));
printf("%s", reverse(str));




return 0;}


