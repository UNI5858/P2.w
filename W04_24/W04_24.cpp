#include <stdio.h>

int main() {
	int i, n;
	printf("자연수 입력:");
	scanf_s("%d", &n);
	while (n >= 1) {
		i = n;
		while (i >= 1) {
			printf("%d ", i);
			i--;
		}
		printf("\n");
		n--;
	}
}