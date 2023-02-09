#include <stdio.h>


int main(){

    int out = 0;
    int out2 = 0;
	int a[9];

    for (int i = 1; i <= 9; i++)
    {
        scanf("%d", &a[i]);


        
    }

    for (int i = 1; i <= 9; i++)
    {


        if (out2<a[i])
        {
            out2 = a[i];
            out = i;
        }
        
    }
    
  printf("%d\n%d", out2, out);
  return 0;
}