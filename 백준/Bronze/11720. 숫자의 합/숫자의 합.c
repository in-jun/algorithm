#include <stdio.h>

int main()
{
	int N;
	int output=0;
	scanf("%d",&N);

	char input[N];

	scanf("%s",input);

	for (int i = 0; i < N; i++)
	{
		output+=(input[i]-'0');
	}

	printf("%d",output);

	return 0;
}

