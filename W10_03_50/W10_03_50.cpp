#include <stdio.h>

struct point {
	int x;
	int y;
};

struct rec {
	int x;
	int y;
};

int main() {
	int x, y;
	printf("x와 y 입력:");
	scanf_s("%d %d", &x, &y);

	point Apoint = { x, y };
	rec Arec = { Apoint.x, Apoint.y };
	printf("가로가 %d이고 세로가 %d인 사각형", Arec.x, Arec.y);
}