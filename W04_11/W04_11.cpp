#include <stdio.h>

int main() {
	int i = 1;
	int n;
	int sum = 0;
	scanf_s("%d", &n);
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("%d", sum);
}