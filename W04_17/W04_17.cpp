#include <stdio.h>

int main() {
	int i, n;
	i = 1;
	printf("자연수 입력:");
	scanf_s("%d", &n);
	while (i <= n) {
		if (n%i == 0) {
			printf("%d ", i);
		}
		i++;
	}
}