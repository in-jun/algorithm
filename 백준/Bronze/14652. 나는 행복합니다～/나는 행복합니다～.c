#include <stdio.h>

int main()
{
	int a, b, c, d = 0;
	scanf("%d %d %d", &a, &b, &c);

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (d == c)
			{
				printf("%d %d", i, j);
			}
			d++;
		}
	}

	return 0;
}