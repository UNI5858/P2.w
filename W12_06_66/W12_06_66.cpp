#include <iostream>
using namespace std;

void clac(int a, int b) {
	cout << "더하기: " << a + b << endl;
	cout << "빼기: " << a - b << endl;
	cout << "곱하기: " << a * b << endl;
	if (a > b) {
		cout << "나누기: " << a / b << endl;
	}
	if (a < b) {
		cout << "나누기: " << b / a << endl;
	}
}
void clac(double a, double b) {
	cout << "더하기: " << a + b << endl;
	cout << "빼기: " << a - b << endl;
	cout << "곱하기: " << a * b << endl;
	if (a > b) {
		cout << "나누기: " << a / b << endl;
	}
	if (a < b) {
		cout << "나누기: " << b / a << endl;
	}
}

int main() {
	int a, b;
	float fa, fb;
	cout << "두 정수를 입력: ";
	cin >> a >> b;
	clac(a, b);
	cout << "두 실수를 입력: ";
	cin >> fa >> fb;
	clac(fa, fb);

}