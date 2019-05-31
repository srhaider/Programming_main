#include<stdio.h>
#include<stdlib.h>
struct Str
{
float aab;
int a;
char b[12];
};



int main()
{

struct Str aaa;
struct Str *ptr=(struct Str *)malloc (sizeof(struct Str	)*2);
//ptr=0x0;

//ptr++;


printf ("Size of Structure=%ld \n", &ptr);
++ptr;

printf ("Size of Structure=%ld \n", sizeof(ptr));

return 0;
}
