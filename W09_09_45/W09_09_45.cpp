#include <stdio.h>

void cycle(int *ap, int *bp, int *cp) {
	int n = *ap;
	*ap = *bp;
	*bp = *cp;
	*cp = n;
}

int main() {
	int a, b, c;
	printf("숫자 세개를 입력하시오:");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("a=%d, b=%d, c=%d\n", a, b, c);
	cycle(&a, &b, &c);
	printf("a=%d, b=%d, c=%d\n", a, b, c);
}