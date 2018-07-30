#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main21()
{
	long long b;
	scanf("%lld", &b);
	while(b!=1)
	{
		if (b % 2 == 1)
		{
			b = b * 3 + 1;
			printf("%lld*3+1=%lld\n",(b-1)/3,b);
		}
		
		else
		{
			b /= 2;
			printf("%lld/2=%lld\n", b * 2, b);
		}
	}
	
		printf("End"); 

	return 0;
}