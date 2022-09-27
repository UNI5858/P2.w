#include <stdio.h>

int main() {
	int n;
	int sum=0,e_sum=0,o_sum=0;
	printf("n:");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum += i;
		if (i % 2 == 0) {
			e_sum += i;
		}
		else {
			o_sum += i;
		}
	}
		printf("숫자의 합: %d, 짝수의 합: %d, 홀수의 합: %d", sum, e_sum, o_sum);

}