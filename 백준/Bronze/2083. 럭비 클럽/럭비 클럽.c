#include<stdio.h>
int main()
{
	char a[10];
	int b,c;

	while (1)
	{
		scanf("%s %d %d",a,&b,&c);
		if (a[0]=='#')
		{
			if (b==0)
			{
				if (c==0)
				{
					break;
				}
			}
		}


		if (b>17)
		{
			printf("%s Senior\n",a);
		}
		else if(c>=80)
		{
			printf("%s Senior\n",a);
		}
		else
		{
			printf("%s Junior\n",a);
		}
		
		
	}
	
	return 0;
}