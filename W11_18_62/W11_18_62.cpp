#include <iostream>
using namespace std;

int main() {
	int a;
	int n = 1;
	cout << "숫자를 입력하시오:";
	cin >> a;
	for (int i = 1; i <= 4; i++) {
		n *= 2;
		cout << a << "의 "<< n << "배는 " << (a << i) << "입니다" << endl;
	}

}