#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

double distance(point p1, point p2) {
	// 다른 두점 사이의 길이는 피타고라스 사용 x^2 + y^2 = a^2
	int x, y;
	x = p1.x - p2.x;
	y = p1.y - p2.y;
	double a;
	a = x*x + y * y;
	


	return 	sqrt(a);
}

int main() {
	int x, y;
	point p1, p2;
	printf("x와 y를 입력:");
	scanf_s("%d %d", &p1.x, &p1.y);

	printf("x와 y를 입력:");
	scanf_s("%d %d", &p2.x, &p2.y);


	printf("p1과 p2의 사이의 거리는 %lf이다.", distance(p1, p2));

}