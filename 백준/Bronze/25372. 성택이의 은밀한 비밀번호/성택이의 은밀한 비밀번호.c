#include <stdio.h>
#include <string.h>

int main()
{
	char a[1001];
	int b;
	scanf("%d", &b);

	for (int i = 0; i < b; i++)
	{
		getchar();
		scanf("%s", a);
		if (strlen(a) >= 6 && strlen(a) <= 9)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}

	}

	return 0;
}


