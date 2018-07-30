#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main09()
{
	int a, b,c=0;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 1)
		{
			c += i;
		}
	}
	printf("%d", c);

	return 0;
}