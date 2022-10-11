#include <stdio.h>

int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		printf("a의[%d]의 주소: %d\n", i, &a[i]);
	}

	printf("a의 값:%d\n", a);
	printf("&a[0]의 값:%d\n", &a[0]);
}