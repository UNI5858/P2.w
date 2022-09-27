#include <stdio.h>

int main() {
	int x, y;
	
	printf("두수를 입력:");
	scanf_s("%d%d", &x, &y);
	
	int pow = 1;
	
	for (int i = 1; i <= y; i++) {
		pow *= x;
		printf("%d의 %d제곱은 %d\n", x, i, pow);
	}
}