#include <iostream>
using namespace std;
// C++ = *Object-Oriented Language* 객체지향언어
// Class *객체 지향 언어*의 가장 큰 특징
// 클래스 | 객체
// C구조체 멤버 면수만 있다 -> 클래스(멤버 함수도 있다).
// C++ 구조체(기본 public) == C++ 클래스 (기본 private)
// 구조체보다는 *클래스*를 쓴다.
// 클래스 - *변수는 private, 함수는 public*으로 만든다.
// 캡슐화(Encapsulation) 
class MyClass {
public:
	void PrintThis() {
		cout << "나의 주소는 " << this << endl; // this 자신을 가리키는 포인터
	}

	int x;
};

int main()
{
	MyClass a, b;

	cout << "객체 a의 주소는 " << &a << endl;
	cout << " 객체 b의 주소는 " << &b << endl;

	a.PrintThis();
	b.PrintThis();
}
