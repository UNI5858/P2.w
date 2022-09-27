#include <stdio.h>

int main() {//if else이용 반복문 하나로 작동 (어려움)
	int n, i;
	printf("자연수 입력:");
	scanf_s("%d", &n);

	for (i = 1; i <= n*2-1; i++) {
		if (i <= n) {
			for (int j = 1; j <= n - i; j++) {
				printf(" ");
			}
			for (int j = 1; j <= i * 2 - 1; j++) {
				printf("*");
			}
			printf("\n");
		}
		else {
			for (int j = 1; j <= i - n; j++) {
				printf(" ");
			}
			for (int j = 1; j <= (2*n-i) * 2 - 1; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
}