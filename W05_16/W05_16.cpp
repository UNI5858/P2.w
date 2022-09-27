#include <stdio.h>

int main() {
	int n;
	int pac = 1;
	printf("n:");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		pac *= i;
	}
	printf("%d!=%d",n, pac);
}