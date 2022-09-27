#include <stdio.h>

int main() {
	int i = 1;
	int sum = 0;
	int n;
	printf("몇까지?:");
	scanf_s("%d", &n);
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("총합은 %d", sum);
}