// 동적할당 = 배열 동적 할당
#include <iostream>
using namespace std;

int main() {
	int *arr = new int[10];

	int *a = new int[5]{ 1, 2, 3, 4, 5 };
	int n;
	cout << "몇개의 데이터 입력?: ";
	cin >> n;

	int *b = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "데이터 입력: ";
		cin >> b[i];
	}

	for (int i = 0; i < n; i++) {
		cout << b[i] << endl;
	}

	delete[] b;

	for (int i = 0; i < n; i++) {
		cout << b[i] << endl;
	}
}