#include <stdio.h>
int min(int a[], int cont)
{
	int min = 2000;
	for (int i = 0; i < cont; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}
int main()
{
	int a[3], b[2];

	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &b[0], &b[1]);
	printf("%d", min(a, 3) + min(b, 2) - 50);
	return 0;
}