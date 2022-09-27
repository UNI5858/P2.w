#include <stdio.h>

int main() {
	int i, n,sum,e_sum,o_sum;
	i = 1;
	sum = 0;
	e_sum = 0;
	o_sum = 0;
	printf("자연수 입력:");
	scanf_s("%d", &n);
	while (i <= n) {
		sum += i;
		if (i % 2 == 0)
			e_sum += i;
		else
			o_sum += i;
		i++;
	}
	printf("숫자의 합:%d 홀수의 합:%d 짝수의 합:%d", sum, o_sum, e_sum);
}