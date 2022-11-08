#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct point {
	int x;
	int y;
}Point;

double len(point p1, point p2) {
	int x, y;
	x= p1.x - p2.x;
	y = p1.y - p2.y;
	double a;
	a = x * x + y * y;
	return sqrt(a);
}

int main() {
	Point p[2];
	srand(time(0));
	for (int i = 0; i < 2; i++) {
		int x = rand() % 100;
		int y = rand() % 100;
		p[i].x = x;
		p[i].y = y;
		printf("%d\n", x);
		printf("%d\n", y);
	}
	printf("p[1] p[2] 사이의 거리 %lf\n", len(p[0],p[1]));
}
