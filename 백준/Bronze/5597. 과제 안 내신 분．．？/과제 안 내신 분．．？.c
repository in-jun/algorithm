#include <stdio.h>
int main()
{
	int s[31] = { 0, };
	int a;

	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &a);
		s[a] = 1;
	}

	for (int i = 1; i < 31; i++)
	{
		if (s[i] == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}