#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main04()
{
	int a;
	scanf("%d", &a);
	int b;
	int c = 0;
	for (int i = 1; i <= a; i++)
	{
		scanf("%d", &b);

		c += b;
	}
	printf("%d %.5lf\n", c, (double)c / a);
	return 0;
}