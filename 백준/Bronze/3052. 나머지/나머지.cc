#include <stdio.h>

int main(){
	
    int count[10];
    int input;
    int output = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &count[i]);
    }

    for (int i = 0; i < 10; i++)
    {
       count[i] = (count[i]%42);
    }

    for (int i = 0; i < 10; i++)
    {
        input = 0;
        for (int in = 0; in < i; in++)
        {
            if(count[i]==count[in]) 
            {
                input++;
            }
        }
        if(input==0)
        {
            output++;
        }
    }
    printf("%d", output);
	return 0;
}