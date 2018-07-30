#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main12()
{
	int a, b, c,d=0;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &c);
		if (c%b==0)
		{
			d+=1;
		}
	}
	printf("%d", d);

	return 0;
}