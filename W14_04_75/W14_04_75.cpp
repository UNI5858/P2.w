#include <iostream>
using namespace std;
class Point {
public:
	Point():x(0),y(0){}
	Point(int x, int y) : x(x), y(y) {}
	void print() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
private:
	int x;
	int y;
};

int main()
{
	Point a(10, 20);
	Point b;

	b.set(30, 30);
	a.print();
	b.print();
}
