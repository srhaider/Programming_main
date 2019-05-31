#include<stdio.h>


#pragma pack(1)
struct structure1 
{
       int id1;
       int id2;
       char name;
       char c;
       float percentage;
};


struct structure2 
{
       int id1;
       char name;
       int id2;
       char c;
       float percentage;                      
};

int main()
{

struct structure1 ab;
struct structure2 bc;


printf ("Size of Structure1 =%ld\n ",sizeof(ab));
printf ("Size of Structure2 =%ld\n ",sizeof(bc));



return 0;
}

