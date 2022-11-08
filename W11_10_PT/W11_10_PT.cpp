#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define FOR(A,S,E) for(int A = S; A<E; A++)

typedef struct point {
	int x;
	int y;
}Point;

double distance(Point p1, Point p2) {
	int x = p1.x - p2.x;
	int y = p1.y - p2.y;
	double a = x * x + y * y;
	return sqrt(a);
}

int main() {
	Point P[100];
	srand(time(0));
	FOR(i, 0, 100) {
		P[i].x = rand() % 1000;
		P[i].y = rand() % 1000;
	}
	int min_i;
	int min_j;
	double min = 1000;
	FOR(i, 0, 100) {
		FOR(j, i+1, 100) {
			if (min > distance(P[i], P[j])) {
				min = distance(P[i], P[j]);
				min_i = i;
				min_j = j;
			}
		}
	}
	printf("P[%d]와 P[%d]의 거리 %f가 최소값이다.\n"
		,min_i, min_j, min);
	printf("%f", distance(P[1], P[2]));
}


