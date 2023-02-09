#include <stdio.h>

int main()
{
	int t, a, b, c;
	int add = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d%d%d", &a, &b, &c);
		for (int x = 1; x <= a; x++)
		{
			for (int y = 1; y <= b; y++)
			{
				for (int z = 1; z <= c; z++)
				{
					if (x == y && y == z)
					{
						add++;
					}

				}
			}
		}
		printf("%d\n", add);
		add = 0;
	}

	return 0;
}