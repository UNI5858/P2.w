#include <stdio.h>

double plus(double x, double y) {
	return x + y;
}

double minus(double x, double y){
	return x - y;
}

double multiply(double x, double y) {
	return x * y;
}

double divide(double x, double y) {
	return x / y;
}

int main() {
	double a, b;
	printf("숫자 두개를 입력하시오:");
	scanf_s("%lf %lf", &a, &b);
	printf("더하기=%.2f", plus(a, b));
	printf("빼기=%.2f", minus(a, b));
	printf("곱하기=%.2f", multiply(a, b));
	printf("나누기=%.2f", divide(a, b));
}