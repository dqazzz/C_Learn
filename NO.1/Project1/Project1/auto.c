#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	int i, k;
	srand(time(NULL));
	k = rand() % 100;
	printf("��������µ���\n");
	while (1) {
		scanf("%d", &i);
		if (i > k) { printf("��´���\n"); }
		else if (i < k)printf("���С��\n");
		else printf("��¶��ˣ�����Ϊ%d\n", i);
	}

	return 0;


}