#include <iostream>
using namespace std;

class Complex {
public:
	Complex() {      // 생성자 함수 아는 법!
		real = 0;    // return이 없고 이름이 클래스와 같음
		imag = 0;    // 정적 멤버 313pg C++ 변수 초기화 방법 static
	}
	Complex(double real_, double imag_) {
		real = real_;
		imag = imag_;
	}

	double GetReal() {
		return real;
	}
	void SetReal(double real_) {
		real = real_;
	}
	double GetImag() {
		return imag;
	}
	void SetImag(double imag_) {
		imag = imag_;
	}

private:
	double real;
	double imag;
};

int main() {
	Complex c1;
	Complex c2 = Complex(2, 3);
	Complex c3(2, 3);

	cout << "c1=" << c1.GetReal() << "," << c1.GetImag() << endl;
	cout << "c2=" << c2.GetReal() << "," << c2.GetImag() << endl;
	cout << "c3=" << c3.GetReal() << "," << c3.GetImag() << endl;

}