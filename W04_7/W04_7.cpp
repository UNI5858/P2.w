#include <stdio.h>

int main() {
	int i = 1;
	int n;
	printf("별을 몇개 그려드릴까요?\n");
	scanf_s("%d", &n);
	while (i <= n) {
		printf("*");
		i++;
	}
}
