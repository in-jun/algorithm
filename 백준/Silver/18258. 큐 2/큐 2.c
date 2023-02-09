#include <stdio.h>
#include <string.h>

int queue[2000010] = { 0, };
int rp = 0;
int wp = 0;

int empty()
{
	return (rp == wp);
}

void push(int n)
{
	queue[wp++] = n;
}

int pop()
{
	return empty() ? -1 : queue[rp++];
}

int qu_size()
{
	return wp - rp;
}

int front()
{
	return empty() ? -1 : queue[rp];
}

int back()
{
	return empty() ? -1 : queue[wp - 1];
}


int main()
{
	int count;
	char input[6];

	scanf("%d", &count);

	for (int i = 0; i < count; i++)
	{
		scanf("%s", input);

		if (!strcmp(input, "push"))
		{
			int n = 0;
			scanf("%d", &n);
			push(n);
		}
		else if (!strcmp(input, "pop"))
		{
			printf("%d\n", pop());
		}
		else if (!strcmp(input, "size"))
		{
			printf("%d\n", qu_size());
		}
		else if (!strcmp(input, "empty"))
		{
			printf("%d\n", empty());
		}
		else if (!strcmp(input, "front"))
		{
			printf("%d\n", front());
		}
		else if (!strcmp(input, "back"))
		{
			printf("%d\n", back());
		}
	}
	return 0;
}