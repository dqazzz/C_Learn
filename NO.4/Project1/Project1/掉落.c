#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main20()
{
	int a,b;
	double c, f,d=0;
	scanf("%d", &a);
	c = (double)a;
	for (int i = 0; i < 10; i++)
	{
		c /=2;
		d += 1.5*c;
		f = d +(double)1.5*a-2.5*c;
	}
	printf("%g\n%g\n", f, c);


	return 0;
}