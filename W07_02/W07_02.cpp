#include <stdio.h>

int main() {
	int a = 10;
	int *ptr_a;	//포인터는 주소를 저장하는 변수
	ptr_a = &a;

	printf("a의 값: %d\n", a);
	printf("a의 주소값: %d\n", &a);
	printf("ptr_a의 값: %d\n", ptr_a);
	// &: 변수-변수가 저장된 주소 
	// *: 포인터-포인터가 가르키는 변수의 저장된 값
	*ptr_a = 20;
	printf("a=%d\n", a);
	printf("*ptr_a=%d\n", *ptr_a);
}