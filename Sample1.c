#include<stdio.h>
#include<inttypes.h>
#include<stdlib.h> 
#include<stdint.h>

int main()
{		int i=0, j=0;
		uint8_t *str=malloc((sizeof(uint8_t)*50));
		char ch;
		int no=0,abs=0;
		uint32_t arr[10], num=0;
		int spaces=0,lim=10;
		
		while((ch=getchar())!='\n')
		{
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
			if(spaces==lim)
			break;
		}
		str[i]='\0';

		printf("Final array\n");
		for(i=0;i<spaces;i++)
		{
			printf("%d ", arr[i]);
		}

		return 0;
}
