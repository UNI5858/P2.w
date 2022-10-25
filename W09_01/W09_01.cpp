#include <stdio.h>

//Call-by-value - 값에 의한 호출
//호출할 때 값만 복사해서 넘겨준다.
//Call-by-address
//Call-by-reference - C++

void swap(int x, int y) {
	int tmp = x;
	x = y;
	y = tmp;
	printf("in swap: %d,%d\n", x, y);
}

int main() {
	int a, b;

	scanf_s("%d%d", &a, &b);

	swap(a, b);

	printf("in main: %d,%d", a, b);
}