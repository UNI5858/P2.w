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
	point(int a, int b) {
		x = a;
		y = b;
	}
	void SetX(int a) {
		x = a;
	}
	void SetY(int b) {
		y = b;
	}
	int GetX() {
		return x;
	}
	int GetY() {
		return y;
	}
};
class Rec {
private:
	point p1;
	point p2;
public:
	Rec(point a, point b) {
		p1 = a;
		p2 = b;
	}
	int getArea() {
		int Xs = p1.GetX() - p2.GetX();
		int Ys = p1.GetY() - p2.GetY();
		int result = Xs * Ys;
		if (result < 0) result *= (-1);
		return result;
	}
};
int main() {
	int a, b, c, d;
	cout << "첫번째 점을 입력하세요: ";
	cin >> a >> b;
	cout << "두번째 점을 입력하세요: ";
	cin >> c >> d;
	Rec Sqa(point(a, b), point(c, d));
	cout << "사각형의 면적은: " << Sqa.getArea() << endl;

}