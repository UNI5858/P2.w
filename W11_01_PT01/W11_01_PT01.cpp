#include <stdio.h>

void swap(int *px, int *py) {
	int pt = *px;
	*px = *py;
	*py = pt;
}

int main() {
	int x = 3;
	int y = 5;
	printf("%d %d\n", x, y);
	swap(&x, &y);
	printf("%d %d\n", x, y);
}