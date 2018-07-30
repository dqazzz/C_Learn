#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main1()
{
	int n;
	scanf("%d", &n);
	if (n == 0)
	{
		printf("zero");
	}
	else if (n > 0)
	{
		printf("positive");
	}
	else
	{
		printf("negative");
	}
	return 0;
}