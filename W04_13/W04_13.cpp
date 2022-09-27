#include <stdio.h>

int main() {
	int a, b, c;
	int i;
	int sum;
	scanf_s("%d%d%d", &a, &b, &c);
	i = a;
	sum = 0;
	while (i <= b) {
		if (i%c == 0) {
			printf("%d ", i);
			sum += i;
		}
		i++;
	}
	printf("\n");
	printf("배수의 합%d", sum);
	
}