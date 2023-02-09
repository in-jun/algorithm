#include <stdio.h>
#include <string.h>

int main()
{
	int a;
	char b[1001];
	scanf("%d",&a);

	for (int i = 0; i < a;i++)
	{
		getchar();
		scanf("%s",b);
		printf("%c%c\n",b[0],b[strlen(b)-1]);	
	}
	return 0;
}
