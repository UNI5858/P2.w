#include <stdio.h>

//시험에 꼭 나옴
int pac(int n) {
	if (n == 1) {
		return 1;
	}
	return n * pac(n-1);
}

int main() {
	int n;
	int ipac = 1;
	printf("숫자를 입력하시오:");
	scanf_s("%d", &n);
	for (int i = n; i >= 1; i--) {
		ipac *= i;
	}
	printf("%d!\n", n);
	printf("재귀함수: %d\n", pac(n));
	printf("반복문: %d\n", ipac);
}