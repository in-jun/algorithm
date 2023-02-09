#include <stdio.h>

int main(){
	int in;

	scanf("%d",&in);

	for(int i=1;i<=in;i++)
    {

		for(int inn=0;inn<in;inn++)
        {

            if(inn<in-i) 
            {
                printf(" ");
            }
            
			else
            {
                printf("*");
            } 

		}

		printf("\n");

	}
	return 0;
}