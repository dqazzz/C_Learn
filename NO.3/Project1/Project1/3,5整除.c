#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main5()
{
	int b;
	scanf("%d", &b);
	if (b % 3 == 0 && b % 5 == 0)
	{
		printf("YES");
	}
	else {
		printf("NO");
	}
	return 0;

}