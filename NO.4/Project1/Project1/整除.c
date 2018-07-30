#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main11()
{
	int a,b,c=0,d=0,e=0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		if (b - 1 == 0)
		{
			c += b;
		}
		else if (b-5==0)
		{
			d = d + (b / 5);
		}
		else if(b-10==0)
		{
			e = e + (b / 10);
		}
	}
	printf("%d\n%d\n%d\n", c, d, e);

	return 0;
}