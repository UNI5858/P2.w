#include <stdio.h>

int Fibonacci(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return Fibonacci(n-1) + Fibonacci(n - 2);
}

int main() {
	
	for (int i = 1; i <= 20; i++){
		printf("Fibonacci(%d) = %d\n", i, Fibonacci(i));
	}
}