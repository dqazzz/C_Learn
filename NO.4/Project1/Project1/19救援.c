#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main19()
{
	int a,d,t;
	scanf("%d", &a);
	float b, c,e,f,g=0;

	for (int i = 0; i < a; i++)
	{
		scanf("%f %f %d", &b, &c, &d);
		float f= (b*b+c*c),r;
		r = sqrt(f);
		
		e = (float)1.5*d + 2 * r / 50;
		g += e;
	}
	t = g;
	if (g - t > 0)
	{
		t+=1;
	}
	printf("%d", t);
	return 0;
}