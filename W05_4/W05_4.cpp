#include <stdio.h>

int main() {
	int n;

	printf("몇단?:");
	scanf_s("%d", &n);

	for (int i=1; i <= 9; i++) {//뒷자리
		for (int j=2; j <= n; j++) {//앞자리
			printf("%d*%d=%d\t", j, i, j*i);
		}
		printf("\n");
	}
}