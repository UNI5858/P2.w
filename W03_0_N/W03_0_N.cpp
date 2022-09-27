#include <stdio.h>

int main() {
	int n;

	printf("숫자입력:");
	scanf_s("%d", &n);

	if (n % 2 == 0) {
		printf("n은 짝수 입니다.\n");
	}
}