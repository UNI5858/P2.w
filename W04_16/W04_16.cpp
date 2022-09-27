#include <stdio.h>

int main() {
	int n,i,h;
	h = 1;
	i = 1;
	printf("자연수 입력:");
	scanf_s("%d", &n);
	while (h <= n) {
		i = 1;
		while (i <= (h * 2) - 1) {
			printf("%d ",i);
			i++;
		}
		printf("\n");
		h++;
	}
}