#include <stdio.h>

//재귀함수는 반드시 끝나는 조건이 있어야 한다.

void rec(int n);

int main() {
	rec(1);
}

void rec(int n) {
	if (n > 10) {
		return;
	}
	printf("n = %d\n", n);
	rec(n + 1);
}