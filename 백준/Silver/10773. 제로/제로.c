#include <stdio.h>
#include <string.h>

int stack[100010] = { 0, };
int sp = 0;

void push(int i)
{
	stack[sp++] = i;
}

int pop()
{
	return  sp ? stack[--sp] : -1;
}

int sp_size()
{
	return sp;
}

int empty()
{
	return (!sp);
}

int top()
{
	return  sp ? stack[sp - 1] : -1;
}

int main()
{
	int output = 0;
	int count = 0;
	int input;

	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &input);

		if (input)
		{
			push(input);
		}
		else
		{
			pop();
		}

	}

	while (!empty())
	{
		output += pop();
	}

	printf("%d", output);
	return 0;
}