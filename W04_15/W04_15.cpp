#include <stdio.h>

int main() {
	int i,n;
	i = 1;
	while (i <= 9) {
		n = 2;
		while (n <= 5) {
			printf("%d X %d = %d \t", n, i, n*i);
			n++;
		}
		printf("\n");
		i++;
	}
	i = 1;
	while (i <= 9) {
		n = 6;
		while (n <= 9) {
			printf("%d X %d = %d \t", n, i, n*i);
			n++;
		}
		printf("\n");
		i++;
	}
}