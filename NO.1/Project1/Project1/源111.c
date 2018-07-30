#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main00()
{
	int i;
	printf("地上有一张50元有一张100元，你捡哪个，请输入1或者2,1代表50元，2代表100元：\n");
	scanf("%d", &i);
	switch (i)
	{
	case 1:printf("大傻瓜，为什么不捡100的呢\n"); break;
	case 2:printf("小傻瓜，为什么不全捡呢\n"); break;
	case 12:printf("你贪得无厌，这种事应该交给警察叔叔\n"); break;
	case 21:printf("你贪得无厌，这种事应该交给警察叔叔\n"); break;
		// zheshiyitiaozhushi
	}
	system("pause");
	return 0;
}
