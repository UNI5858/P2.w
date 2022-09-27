#include <stdio.h>

int main() {
	int i,n,h,a;
	h = 1;
	printf("자연수 입력:");
	scanf_s("%d", &n);
	a = n;
	while (h <= n) {
		i = a;
		while (i >= 1) {
			printf("%d ", i);
			i--;
		}
		printf("\n");
		h++;
		a--;
	}
}