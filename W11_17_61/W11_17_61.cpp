#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "숫자를 입력하시오: ";
	cin >> a;
	int Ma = a & 0xf;
	printf("%d\n", Ma >> 0);
	for (int i = 3; i >= 0; i--) {
		int x = (Ma >> i) & 1;
		if (x == 1) {
			cout << 1;
		}
		if (x == 0) {
			cout << 0;
		}
	}
}