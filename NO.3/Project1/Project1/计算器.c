#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b,x;
	char c;
	scanf("%d %c %d", &a,  &c,&b);
	switch(b){
	case 0: printf("Divided by zero!"); break;
	default:	switch (c)
		{
		case'+': x = a + b; printf("%d", x); break;
		case'-': x = a - b; printf("%d", x); break;
		case'*': x = a * b; printf("%d", x); break;
		case'/':x = a / b; printf("%d", x); break;
		default:printf("Invalid operator!"); break;
		}break;
	}; 
	return 0;
}

/*#include<stdio.h>
int main()
{
	int a, b,x;
	char c;
	scanf("%d %d %c", &a, &b, &c);
	if (b ==0) {
		switch (c)
		{
		case'+': x = a + b; printf("%d", x); break;
		case'-': x = a - b; printf("%d", x); break;
		case'*': x = a * b; printf("%d", x); break;
		case'/':x = a / b; printf("Divided by zero!"); break;

		default:printf("Invalid operator!"); break;
		}
	}
	else
	{
		switch (c)
		{
		case'+': x = a + b; printf("%d", x); break;
		case'-': x = a - b; printf("%d", x); break;
		case'*': x = a * b; printf("%d", x); break;
		case'/':x = a / b; printf("%d", x); break;

		default:printf("Invalid operator!"); break;
		}
	}
	return 0;
}*/