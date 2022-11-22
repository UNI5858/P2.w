#include <iostream>
using namespace std;

int main() {
	int no[10];
	cout << "10개의 숫자를 입력하세요: " << endl;
	for (int &i : no) {
		int a;
		cin >> a;
		i = a;
	}
	int min = no[0];
	int max = no[0];
	int sum = 0;
	for (int i : no) {
		if (i < min) {
			min = i;
		}
		if (i > max) {
			max = i;
		}
		sum += i;
	}
	cout << "최소값 = " << min << endl;
	cout << "최대값 = " << max << endl;
	cout << "평균 = " << float (sum / 10) << endl;
}