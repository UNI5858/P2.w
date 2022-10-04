#include <stdio.h>

int main() {
	int a[10][10];
	int x, y;
	printf("x와 y값을 정해 주세요:");
	scanf_s("%d %d", &x, &y);
	int 2sum[10] = { 0 };
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			scanf_s("%d", &a[i][j]);
			sum[i] += a[i][j];
		}
	}

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < x; i++) {
		printf("%d", sum[i]);
		printf("\n");
	}
}