#include<stdio.h>

int main()
{
	int x=191;
	#ifdef DEBUG
		printf("Variable x=%d \n  __LINE__ = %d \n", x, __LINE__);
	#endif

return 0;
}
