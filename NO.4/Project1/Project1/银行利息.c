#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main15()
{

	int b, a;
	double c,e, d;
	
	scanf("%lf %d %d",&d, &a, &b);
	e = 1 + d / 100;
	
	c = (double)a;
	for (int i = 0; i < b; i++)
	{
		c =c* e;
	}
	printf("%d",(int)c);
	return 0;
}
