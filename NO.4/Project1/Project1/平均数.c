#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main03()
{
	int n;
	scanf("%d", &n);
	float a;
	float c = 0;
	for (int i = 1; i <= n; i++)
	{
		scanf("%f",&a);
		c += a;
	}
	
	
	printf("%0.4lf\n", c/n);
	return 0;
}

/*#include<stdio.h>
int main()
{
    int n,i;
    float a,num=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f",&a);
        num+=a;
    }
    printf("%.4f\n",num/n);
    return 0;
}*/