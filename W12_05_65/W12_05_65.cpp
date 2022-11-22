#include <iostream>
using namespace std;

void cycle(int &a, int &b, int &c) {
	int tmp = a;
	a = b;
	b = c;
	c = tmp;
}

int main() {
	int a, b, c;
	cout << "3개의 숫자를 입력하세요:";
	cin >> a >> b >> c;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	cycle(a, b, c);
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
}