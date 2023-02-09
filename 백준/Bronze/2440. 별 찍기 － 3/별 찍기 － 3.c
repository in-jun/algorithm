#include<stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	for (int i = N; i > 0; i--) {
		for (int j = 0; j < i; j++)printf("*");
		printf("\n");
	}
	return 0;
}