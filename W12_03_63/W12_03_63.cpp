#include <iostream>
#include <string>
using namespace std;

int main() {
	int no;
	string name;
	cout << "학번: ";
	cin >> no;
	cout << "이름: ";
	cin >> name;
	cout << "당신의 학번은 " << no << ", 이름은 " << name << "입니다." << endl;
}