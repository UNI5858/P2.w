#include <stdio.h>

int main() {
	//포인터와 배열이 연결되면
	//포인터 표현과 배열 표현은 같다.
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *p = a;

	printf("&a[3]의 값:%d\n", &a[3]);
	printf("a+3의 값:%d\n", a+3);
	printf("p+3의 값:%d\n", p+3);
	printf("&p[3]의 값:%d\n", &p[3]);

	printf("a[3]의 값:%d\n", a[3]);
	printf("*(a+3)의 값:%d\n", *(a + 3));
	printf("*(p+3)의 값:%d\n", *(p + 3));
	printf("p[3]의 값:%d\n", p[3]);
}