#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;
	int *p;
	
	p = &a;
	printf("p가 가리키는 변수의 값:%d\n", *p);

	p = &b;
	printf("p가 가리키는 변수의 값:%d\n", *p);
}