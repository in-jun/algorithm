#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		for (int i = 0; i < b; i++)
		{
			printf("=");
		}
		printf("\n");
	}

	return 0;
}