#include<stdio.h>
enum ColorList{Red, Green, Blue};

enum ColorList myFav, yourFav;

int main()
{

if(myFav==Red)
printf("Color Found\n");
else
printf("Color not Found\n");
int x=Blue;
printf("Red Index=%d \n", x);



return 0;
}
