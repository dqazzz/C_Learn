#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main02()
{
	
	float b;
	float c = 0;
	for (int i = 1; i <=12; i++)
	{
		scanf("%f", &b);
		c += b;
	}
	printf("$%0.2lf", c / 12);
	return 0;
}