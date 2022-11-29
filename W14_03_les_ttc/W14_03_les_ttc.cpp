#include <iostream>
using namespace std;

int fact(int n) {
	if (n == 1) { return n; }
	return n * fact(n - 1);
}

int main()
{
	int n;
	//cout << "자연수를 입력하세요: ";
	//cin >> n;

	try {
		cout << "자연수를 입력 : ";
		cin >> n;
		if (n <= 0)
			throw n; // 아닐 때를 이용!
		cout << n << "! = " << fact(n) << endl;
	}
	catch (int e) {
		cout << n << ": 자연수가 아닙니다. 다시 입력하세요." << endl;
		main();
	}
	//if (n >= 1) { cout << n << "! = " << fact(n) << endl; }
	//else {
	//	cout << n << ": 자연수가 아닙니다. 다시 입력하세요." << endl;
	//	main();
	//}
}


// try - throw - catch 오류 처리 외우자!
// 시도 - 던지고 - 받는다.