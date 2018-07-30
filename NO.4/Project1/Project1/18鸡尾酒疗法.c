#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main18()
{
	int a,b,c,x,y;
	double e,f;
	scanf("%d", &a);
	scanf("%d %d", &x,&y);
	e = (double)y / x;
	for (int i = 2; i <=a; i++)
	{
		scanf("%d %d", &b, &c);
		f = (double)c / b;
		if (e-f>0.05)
		{
			printf("worse\n");
		}
		else if (f-e>0.05)
		{
			printf("better\n");
		}
		else
		{
			printf("same\n");
		}
	}
	return 0;
}