#include <stdio.h>

int main() {
	int h;
	int a;
	int i = 1;
	printf("몇층?\n");
	scanf_s("%d", &h);
	while (i <= h) {
		a = 1;
		while (a <= i) {
			printf("o");
			a++;
		}
		printf("\n");
		i++;
	}
}