#include <stdio.h>

int main() {
	float c=100;
	float change;
	printf("  화씨 \t 섭씨\n");
	printf("       \t     \n");
	while (c >= 10) {
		change = 5.0/9*(c - 32.0);
		printf("  %.1f\t%.1f \n", c, change);
		c -= 10;
	}
}