#include <stdio.h>

int main() {
	int a = 10;
	int *pa = &a;
	int **ppa = &pa;

	printf("1. a=%d\n", a);
	printf("2. &a=%d\n", &a);
	printf("3. pa=%d\n", pa);
	printf("4. &pa=%d\n", &pa);
	printf("5. ppa=%d\n", ppa);
	printf("6. *ppa=%d\n", *ppa);
	printf("7. **ppa=%d\n", **ppa);
}