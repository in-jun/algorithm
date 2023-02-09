#include <stdio.h>
#include <string.h>
int main()
{
	char a[101];
	scanf("%s", a);
	for (int i = 97; i <= 122; i++)
	{
		for (int j = 0; j < strlen(a); j++)
		{
			if (a[j] == i)
			{
				printf("%d ", j);
				break;
			}
			else
			{
				if (j == strlen(a) - 1)
				{
					printf("-1 ");
				}
			}
		}
	}
	return 0;
}