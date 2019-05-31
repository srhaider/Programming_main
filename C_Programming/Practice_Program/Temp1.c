#include<stdio.h>

#define TAG (newline='\n', WideSpace='\t');
#define enum TAG	{newline='\n',WideSpace='\t' };
int main(int argc, char *argv[])
{
int a=1;

printf ("ARGC=%d",argc);
//for (a=0;a<argc; a++)
//printf("%s - ",argv[a]);
//printf((argc > 1) ? "%s " : "%s", *++argv);
printf((2 < 1 ) ? "%s " : "%s ","Ram");
/*
if (0&&1)
printf("And Got executed\n");
else

printf("And Not executed\n");

*/

/*int c[]={2,3,4,5,6,7,8,9};
int *p=c;
int j=0;

for (;j<5;j++)
{
printf("%d",*p);
p++;
}*/




//printf("integer value of character 'A' =%c\t\n",a);
//printf("integer value of a =%d\t\n",a);
//printf("integer value of c =%c\t\n",c);
return 0;
}
