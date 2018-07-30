#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main13()
{
	int a, b,c;
	scanf("%d%d", &a, &b);
	c = a;
	for(int i=0;i<b-1;i++)
	{
		a *= c;
	}
	printf("%d", a);
	return 0;
}