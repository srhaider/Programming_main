#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#ifdef DBGPRT
printf("Helo\n");
#endif
#define size(x) (char *)(x+1)-(char *)x

struct alpha
{
int asd;
float sadf;
char fs;

}*asd;


char *fun()
{
    static char arr[1024];
    return arr;
}
 
int main()
{


//long double p;
long int p;
	long double *q;


char *str = "geeksforgeeks";
    strcpy(fun(), str);
    str = fun();
struct alpha *asd=(struct alpha*)malloc ((sizeof (struct alpha)*2));
	printf("str= %s \n", str);
	printf("size of Long int p= %ld \n", sizeof(p));
	printf("size of structure= %ld \n", size(asd));


    strcpy(str, "Rizwan Haider");


    return 0;
}
