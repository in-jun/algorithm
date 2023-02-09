#include <stdio.h>
int main()
{
	int a;
	char b[51];

	scanf("%d",&a);

	for (int i = 1; i <= a; i++)
	{
        getchar(); 
		scanf("%[^\n]s", b); 
		printf("%d. %s\n",i,b);
	}
    return 0; 
}