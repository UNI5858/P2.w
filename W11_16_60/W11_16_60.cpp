#include <iostream>
using namespace std;


//틀리기 쉬움

int main() {  // 0 -> 8진수 0x -> 16진수
	int x;
	cout << "숫자를 입력 하시오: ";
	cin >> x;
	int a = x & 0x0004;
	if (a == 0x0004) {   // & < == 우선순위 기억
		cout << "3번째 비트는 1입니다.";
	}
	else if (a != 0x0004) {
		cout << "3번째 비트는 0입니다.";
	}
	else {
		cout << "오류입니다." << endl;
		main();
	}
}