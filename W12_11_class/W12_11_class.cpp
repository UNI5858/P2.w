#include <iostream>
using namespace std;

class Point {
public:
	Point(int a = 0, int b = 0) {
		x = a;
		y = b;
	}
	int GetX() {
		return x;
	}
	int GetY() {
		return y;
	}
private:
	int x;
	int y;
};

int main() {
	int a, b;
	cout << "x, y를 입력하시오:";
	cin >> a >> b;
	Point p1(a, b);
	cout << "x: " << p1.GetX() << " y: " << p1.GetY() << endl;
}