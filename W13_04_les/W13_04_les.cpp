#include <iostream>
using namespace std;
//교과서 400pg에 문제가 있다. ppt에 X
//교과서 402pg 손자 클래스
class Base {
public:
	void bFun() {
		cout << "Hello from Base!" << endl;
	}
	int bNum;
};

class Derived : public Base { // 상속
public:
	void dFun() {
		cout << "Hello from Derived!" << endl;
	}
	int dNum;
};

class Cbaby : public Derived {
	public:
		void cFun() {
			cout << "Hello from Cbaby!" << endl;
		}
		int cNum;
	};

};

int main() {
	Base b;
	Derived d;

	b.bFun();
	b.bNum = 1;

	d.dFun();
	d.dNum = 1;

	d.bFun();
	d.bNum = 2;

	cout << "Base:bNum = " << b.bNum << endl;
	cout << "Derived:bNum = " << d.bNum << endl;
}