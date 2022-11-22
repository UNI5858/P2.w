#include <stdio.h>
#include <stdlib.h>
int main() {
	int *a;
	int n;
	printf("몇개의 데이터: ");
	scanf_s("%d", &n);

	a = (int *)malloc(n * sizeof(int)); // 배열 동적 할당 in C

	for (int i = 0; i < n; i++) {
		printf("숫자 입력: ");
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	free a; // ?????
}