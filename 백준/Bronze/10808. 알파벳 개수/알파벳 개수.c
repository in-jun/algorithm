#include <stdio.h>
#include <string.h>

int main()
{
	int a[26] = { 0, };
	char str[101];
	
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++)
	{
		a[str[i] - 97]++;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}