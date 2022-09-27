#include <stdio.h>

int main() {
	int n;

	printf("자연수 입력:");
	scanf_s("%d", &n);
	//for (int i; i <= n; i++) 
	//	printf("%d", i);
	//printf("%d", i);
	//i가 지역변수이기 때문에 오류
	int i;
	for (i=1; i <= n; i++) 
		printf("%d", i);
	printf("%d", i);
}