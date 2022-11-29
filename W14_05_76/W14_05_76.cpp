#include <iostream>
#include <string>

using namespace std;
class Point {
public:
	Point() :x(0), y(0) {}
	Point(int x, int y) : x(x), y(y) {}
	void print() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
protected:
	int x;
	int y;
};
class ColorPoint : public Point {
private:
	string color;
public:
	ColorPoint(int x, int y, string color) {
		this->x = x;
		this->y = y;
		this->color = color;
	}
	void setColor(string color) {
		this->color = color;
	}
	void print() {
		cout << "(" << x << ", " << y << ") " << color << endl;
	}
};
int main() {
	Point a(10, 20);
	ColorPoint c(30, 30, "red");

	c.set(40, 40);
	c.setColor("blue");
	a.print();
	c.print();
}