#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main7()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		b = a;
		if (b > c)
		{
			c = b;
		}
		else b = c;
		printf("%d", c);
	}
	else
	{
		a = b;
		if (b > c)
		{
			c = b;
		}
		else b = c;
		printf("%d", c);
	}
	return 0;
}