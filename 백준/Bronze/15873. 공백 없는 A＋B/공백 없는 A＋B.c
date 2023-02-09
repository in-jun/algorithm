#include<stdio.h>
int main()
{
	int input;
	int a;
	int b;

	scanf("%d", &input);

	if((input%100)==10)
	{
		a = input/100;
		b = 10;
	}
	else 
	{
		a = input/10;
		b = input%10;
	}

	printf("%d",a+b);
	
	return 0;
}