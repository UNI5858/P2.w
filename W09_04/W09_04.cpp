#include <stdio.h>

void rec(int n);

int main() {
	rec(1);
}

void rec(int n) {
	printf("n = %d\n", n);
	rec(n + 1);
}