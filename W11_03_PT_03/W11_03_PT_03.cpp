#include <stdio.h>

int pac(int x) {
	if (x == 1) {
		return 1;
	}
	return x * pac(x - 1);
}
int fib(int x) {
	if (x == 0) {
		return 0;
	}
	if (x == 1) {
		return 1;
	}
	return fib(x - 1) + fib(x - 2);
}
#define FOR(A,B) for(int i =A; i <= B; i++)

int main() {
	int x = 5;

	printf("%d!은 %d이다\n", x, pac(x));
	FOR(1, 10) {
		printf("%d ", fib(i));
	}
}