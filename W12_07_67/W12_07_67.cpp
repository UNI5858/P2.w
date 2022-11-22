#include <iostream>
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
};

int main() {
	point p1, p2;
	p1.Set_X(10);
	p1.Set_Y(10);
	p2.Set_X(20);
	p2.Set_Y(20);
	cout << "(" << p1.Get_X() << ", " << p1.Get_Y() << ")" << endl;
	cout << "(" << p2.Get_X() << ", " << p2.Get_Y() << ")" << endl;
}