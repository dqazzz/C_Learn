#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main01()
{
	int a;
	scanf("%d", &a);
	int b[100];
	int c = 0;
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < a; i++)
	{
		c += b[i];
	}
	printf("%.2lf\n", (double)c / a);
	return 0;
}


/*100.00
489.12
12454.12
1234.10
823.05
109.20
5.27
1542.25
839.18
83.99
1295.01
1.75*/


