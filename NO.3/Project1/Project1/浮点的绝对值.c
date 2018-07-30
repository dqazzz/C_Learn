#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main2()
{
	float a;
	scanf("%f", &a);
	if (a >= 0)
	{
		printf("%0.2f", a);
	}
	else
	{
		float b = 0 - a;
		printf("%0.2f", b);
	}


	return 0;
}