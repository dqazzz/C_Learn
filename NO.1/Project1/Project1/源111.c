#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main00()
{
	int i;
	printf("������һ��50Ԫ��һ��100Ԫ������ĸ���������1����2,1����50Ԫ��2����100Ԫ��\n");
	scanf("%d", &i);
	switch (i)
	{
	case 1:printf("��ɵ�ϣ�Ϊʲô����100����\n"); break;
	case 2:printf("Сɵ�ϣ�Ϊʲô��ȫ����\n"); break;
	case 12:printf("��̰�����ᣬ������Ӧ�ý�����������\n"); break;
	case 21:printf("��̰�����ᣬ������Ӧ�ý�����������\n"); break;
		// zheshiyitiaozhushi
	}
	system("pause");
	return 0;
}
