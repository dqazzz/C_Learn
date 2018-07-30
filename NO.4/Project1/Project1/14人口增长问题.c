#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main14()
{
	
	int b,a;
	double c;
	scanf("%d %d", &a, &b);
	c = (double)a;
	for (int i = 0; i < b; i++)
	{
		c*= 1.001;
	}
	printf("%.4lf", c);
	return 0;
}


