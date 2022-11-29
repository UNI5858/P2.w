#include <iostream>
using namespace std;

class Animal {
public:
	void Bre() { cout << "숨을 쉰다" << endl; }
	int age;
};

class Dog : public Animal {
public:
	void Walk() { cout << "걷는다." << endl; }
};

class Sparrow : public Animal {
public:
	void Fly() { cout << "난다." << endl; }
};

int main() {
	Dog d;
	d.age = 7;
	d.Bre();
	d.Walk();
	cout << d.age << endl;
	Sparrow s;
	s.age = 7;
	s.Bre();
	s.Fly();
	cout << s.age << endl;
}