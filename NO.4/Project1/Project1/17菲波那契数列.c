#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main17()
{
	int n, i, a, b, c;
	scanf("%d", &n);
	a = 1; b = 1;
	if (n >= 3)
		for (i = 3; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
	printf("%d\n", b);
	return 0;
}