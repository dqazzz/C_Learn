#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main6()
{
	int a,f=0;
	
	char b;
	scanf("%d %c", &a,&b);
	if (b == 'y') 
	{
		if (a <= 1000)
		{
			printf("13");
		}
		else
		{
			int x = a - 1000;
			while (x>0)
			{
				x -= 500; f += 4;
			}
			int d = f + 13;
			printf("%d", d);
		}
	}
	else if(b=='n')
	{
		if (a <= 1000)
		{
			printf("8");
		}
		else
		{
			int x = a - 1000;
			while (x>0)
			{
				x-= 500; f += 4;
			}
			int c = f + 8;
			printf("%d", c);
		}
	}
	return 0;
}


/*#include<stdio.h>
int main()
{
    int h,f=0;
    char z;
    scanf("%d %c",&h,&z);
    h=h-1000;f=8;
    while(h>0)
    {
        h-=500;f+=4;
    }
    if(z=='y')f+=5;
    printf("%d\n",f);
    return 0;
}*/