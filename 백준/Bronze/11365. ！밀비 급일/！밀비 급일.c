#include <stdio.h>
#include <string.h>
int main()
{
	char a[501];

	while (1)
	{
		scanf("%[^\n]s", a);

		if (a[0] == 'E' && a[1] == 'N' && a[2] == 'D')
		{
			break;
		}

		for (int j = strlen(a) - 1; j >= 0; j--)
		{
			printf("%c", a[j]);
		}
		printf("\n");
		getchar();
	}

	return 0;
}
