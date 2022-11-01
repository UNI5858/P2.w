#include <stdio.h>

// const - 상수 지정 값을 바꿀 수 없음 <-> 변수와 차이
// #define - 정의하다. 뒤에 ; 를 붙이지 않는다.
// enum - 열거, 나열 

#define SQUARE(X) X * X
const double PI = 3.14159265358979;
#define CNT 3

double getArea(double a) {
	return PI * a*a;
}

int main() {
	int a = 5;
	int p[CNT];
	for (int i = 0; i < CNT; i++) {
		scanf_s("%d", &p[i]);
	}
	for (int i = 0; i < CNT; i++) {
		printf("%d\n", p[i]);
	}
	printf("%lf\n", getArea(a));

	printf("%d\n",SQUARE(a));
	printf("%d\n", SQUARE((a+1)));
	printf("%d\n", 100 / (SQUARE(a)));
}