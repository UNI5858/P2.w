#include <iostream>
#include <math.h>
using namespace std;

class point {
private:
	int x;
	int y;
public:
	point() {
		x = 0;
		y = 0;
	}
	point(int a, int b) {
		x = a;
		y = b;
	}
	void Set_X(int a) {
		x = a;
	}
	void Set_Y(int b) {
		y = b;
	}
	int Get_X() {
		return x;
	}
	int Get_Y() {
		return y;
	}
	double distance(point a) {
		double xs = x - a.x;
		double ys = y - a.y;
		return sqrt(xs*xs + ys * ys);
	}
};

int main() {
	point p3;
	point p4(10, 20);
	cout << "(" << p3.Get_X() << ", " << p3.Get_Y() << ")" << endl;
	cout << "(" << p4.Get_X() << ", " << p4.Get_Y() << ")" << endl;
	cout << "거리 : " << p3.distance(p4) << endl;
}