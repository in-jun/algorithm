#include <stdio.h>
#include <string.h>
int main()
{
	char s[101];
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++)
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		else
		{
			s[i] += 32;
		}

	}
	printf("%s", s);
	return 0;
}