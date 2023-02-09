#include <stdio.h>
int main()
{
	int N;
	char input[80] = {0,};
	int sum = 0;
	int output = 0;


	scanf("%d",&N);
	for (int i = 0; i < N; i++)
	{
		output = 0;
		sum = 0;
		
		scanf("%s",input);

		for (int j = 0; j < strlen(input); j++)
		{

			if (input[j]=='O')
			{
				output++;
				sum += output;
			}
			else
			{
				output=0;
			}

		}

		printf("%d\n",sum);

	}
	return 0;
}

