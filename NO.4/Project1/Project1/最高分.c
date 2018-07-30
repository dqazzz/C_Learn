#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main05()
{
	int n,i;
	int a,max;
	scanf("%d %d", &n,&a);
	max= a;
	for ( i = 2; i <=n; i++)
	{
		scanf("%d", &a);
		if (max<= a)
		{
			max = a;
		}
	}
	printf("%d", max);
	return 0;
}