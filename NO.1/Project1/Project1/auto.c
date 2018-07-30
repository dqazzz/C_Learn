#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	int i, k;
	srand(time(NULL));
	k = rand() % 100;
	printf("请输入你猜的数\n");
	while (1) {
		scanf("%d", &i);
		if (i > k) { printf("你猜大了\n"); }
		else if (i < k)printf("你猜小了\n");
		else printf("你猜对了，此数为%d\n", i);
	}

	return 0;


}