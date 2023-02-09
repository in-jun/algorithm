#include<stdio.h>
#include <string.h>
char a[1000];
char b[1000];
int main()
{
	scanf("%s %s",a,b);
	if (strlen(a) >= strlen(b))
	{
		printf("go");
	}
	else
	{
		printf("no");
	}
	return 0;
}