#include <stdio.h>

int main() {
	int i = 1;
	int n;
	int o_sum = 0;
	int e_sum = 0;
	scanf_s("%d", &n);
	while (i <= n) {
		if (i % 2 == 0)
			e_sum += i;
		else
			o_sum += i;
		i++;
	}
	printf("홀수 합:%d 짝수 합;%d", o_sum, e_sum);
}