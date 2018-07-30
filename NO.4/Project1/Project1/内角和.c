#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main08()
{
	int n,c=0;
	int a;
	scanf("%d", &n);
	for (int i = 0; i < n-1; i++)
	{
		scanf("%d", &a);
		c += a;
	}
	printf("%d", (n - 2) * 180 - c);
	return 0;
}