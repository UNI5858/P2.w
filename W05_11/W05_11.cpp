#include <stdio.h>

int main() {
	int n, i;
	printf("자연수 입력:");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i*2-1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i=n-1; i >= 1; i--) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}