#include <stdio.h>
#include <string.h>

int main()
{
	char input[256];
	int a = 0;
	for (int i = 0; 1; i++)
	{
		scanf("%[^\n]s", input);
		getchar();

		for (int j = 0; j < strlen(input); j++)
		{
			if (input[j] == 'a' || input[j] == 'e' || input[j] == 'i' || input[j] == 'o' || input[j] == 'u')
			{
				a++;
			}
			if (input[j] == 'A' || input[j] == 'E' || input[j] == 'I' || input[j] == 'O' || input[j] == 'U')
			{
				a++;
			}
		}

		if (input[0] == '#')
		{
			break;
		}

		printf("%d\n", a);
		a = 0;
	}

	return 0;
}