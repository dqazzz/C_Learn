#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main07()
{
	int a,c=0,d=0,e=0;
	scanf("%d", &a);
	int b1,b2,b3;
	for (int i = 0; i < a; i++)
	{
		scanf("%d %d %d", &b1, &b2, &b3);
		c += b1;
		d += b2;
		e += b3;
	}
	printf("%d %d %d %d", c, d, e, c + d + e);

	return 0;
}