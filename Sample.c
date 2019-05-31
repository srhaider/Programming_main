#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h> 
#include<stdint.h>



int main()
{		int i=0, j=0;
		char *str=malloc((sizeof(char)*20));
		char ch;
		int no=0,abs=0;
		int arr[10], num=0;
		int spaces=0;
		
		while((ch=getchar())!='\n')
		{
			if(spaces==5)
				break;
			if(ch==' ')
			{
				arr[j]=num;
				j++;
				num=0;
				spaces++;
			}
			else
			{
				str[i++]=ch;
				num=(num*10)+(ch - 48);
			}
		}
			
				str[i]='\0';

		printf("Final array\n");
		for(i=0;i<spaces;i++)
		{
			printf("%d ", arr[i]);
		}

	/*
for (i=0;i<1;i++)
{
	scanf("%c", &arr[i]);
}
arr[i]='\0';
*/
//printf("string is =%s",str);
return 0;
}

