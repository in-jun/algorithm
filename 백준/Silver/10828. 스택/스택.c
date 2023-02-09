#include <stdio.h>
#include <string.h>


int stack[10010] = { 0, };
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

	int count = 0;
	char input[6] = { 0, };

	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		scanf("%s", input);
		if (!strcmp(input, "push"))
		{
			int data;
			scanf("%d", &data);
			push(data);

		}
		else if (!strcmp(input, "pop"))
		{
			printf("%d\n", pop());
		}
		else if (!strcmp(input, "size"))
		{
			printf("%d\n", sp_size());
		}
		else if (!strcmp(input, "empty"))
		{
			printf("%d\n", empty());
		}
		else if (!strcmp(input, "top"))
		{
			printf("%d\n", top());
		}
	}


	return 0;
}