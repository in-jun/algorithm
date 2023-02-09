#include <stdio.h>


int main(){
    int n = 0;
    int out = 10000000;
    int out2 = -10000000;
    
    scanf("%d", &n);
	int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (out>a[i])
        {
            out = a[i];
        }

        if (out2<a[i])
        {
            out2 = a[i];
        }
        
    }
    
  printf("%d %d", out, out2);
}