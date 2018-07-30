#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main16()
{
	int a,e,d=200;
	double c,b,t;
	scanf("%d%lf", &a, &b);
	c = (double)d;
	e = a;
	t = 1 + b / 100;
	
	for (int i = 1; i <= 20&&a<=c; i++)
	{
		a += e;
		c *= t;
	}
	if (a / e <= 20)
	{
		printf("%d", a / e);
	}
	else if (a / e>20)
	{
		printf("Impossible"); 
	}
	return 0;
}