#include <stdio.h>

int count[10];

int main(){
	int a;
    int b;
    int c;

	int num;
	
	scanf("%d %d %d",&a,&b,&c);
	
	num = a*b*c;
	
	for(int i=num;i>0;i/=10)
		count[i%10]++;
	
	for(int i=0;i<10;i++)
		printf("%d\n",count[i]);
	
	return 0;
}