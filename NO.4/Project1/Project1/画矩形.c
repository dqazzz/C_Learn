#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	char d;
	scanf("%d %d ", &a,&b);
	scanf("%c %d",&d,&c);
	if (c == 0)
	{
		for (int i = 1; i <=a; i++)
		{
			for (int j = 1; j <=b; j++)
			{
				if (j==1||j==b)
				{
				 if (j == b)
				{
					printf("%c\n", d);
				}
					else printf("%c", d);
				}
				else
				{
					if (i == 1 ||i==a )
					{
						printf("%c", d);
					}
					
					else 
					{
						printf(" ");
					}
				}
			}
		}
	}
	else if(c==1)
	{
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <=b; j++)
			{
				if (j==b)
				{
					printf("%c\n", d);
				}
				else printf("%c", d);
			}
		}
	}

	return 0;
}