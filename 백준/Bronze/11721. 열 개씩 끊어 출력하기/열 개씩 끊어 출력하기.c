#include <stdio.h>
#include <string.h>

int main()
{
	char b[101];

	scanf("%s",b);
	for (int i = 0; i < strlen(b);i++)
	{
		if (i!=0&&i%10==0)
		{
			printf("\n");
		}

		printf("%c",b[i]);	
	}
	return 0;
}

