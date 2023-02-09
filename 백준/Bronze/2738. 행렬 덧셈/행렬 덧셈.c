#include <stdio.h>

int main()
{
	int a;
	int b;
	int c[100][100] = { 0, };
	int d[100][100] = { 0, };

	scanf("%d %d", &a, &b);

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			scanf("%d", &c[i][j]);
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			scanf("%d", &d[i][j]);
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			printf("%d ", c[i][j] + d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
