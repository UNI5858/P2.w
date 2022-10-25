#include <stdio.h>

//기말에 나옴*****************************

void swap(int *px, int *py) {
	int tmp = *px;
	*px = *py;
	*py = tmp;
	printf("in swap: %d,%d\n", px, py);
}

int main() {
	int a, b;

	scanf_s("%d%d", &a, &b);

	swap(&a, &b);//포인터를 사용하기 때문에 &을 사용하여 주소로
	             //매개변수를 입력하여 준다.

	printf("in main: %d,%d", a, b);
}