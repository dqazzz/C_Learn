#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main06()
{
	int a, a1, max, min;
	int i, d;
	scanf("%d %d", &a, &a1);
	max = a1;
	min = a1;
	for ( i = 2; i <=a ; i++)
	{
		scanf("%d", &d);
		if (d>max)
		{
			max = d;
		}
		else if (d < min)
		{
			min = d;
		}
	}
	printf("%d", max - min);
	return 0;
}