//반지름을 멤버 변수로 하는 Circle 클래스 만드시오. 생성자와 getArea()메소드 가짐
//Circle 객체 donut, pie, pizza를 생성하고 각각의 면적 출력.
//반지름 도넛:5, 파이:10, 피자:15
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
	double Pi = 3.14;
public:
	Circle(int a) {
		radius = a;
	}
	double getArea() {
		double area = radius * radius * Pi;
		return area;
	}
};

int main() {
	Circle donut(5);
	Circle pie(10);
	Circle pizza(15);
	cout << "도넛의 면적은 " << donut.getArea() << "이고 "
		<< "파이의 면적은 " << pie.getArea() << "이며 "
		<< "피자의 면적은 " << pizza.getArea() << "이다." << endl;
}
