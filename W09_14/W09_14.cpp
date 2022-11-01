#include <stdio.h>

//형정의
//typedef(형정의)
//typedef unsigned short int age_t
//dge_t userAge
//typedef (형) (멤버) 변수명
//구조체(struct) - 여러 변수를 묶어서 만든 새로운 자료형
//struct 구조체이름 { 멤버선언 };

int main() {
	struct { float x, y; }pos;
	struct point { float x, y; };
	struct point pos2;
	struct point p;
	pos2.x = 2.5;
	pos2.y = 3.3;
	pos.x = 1.5;
	pos.y = 2.2;
	p = pos2;
	printf("좌표 : (%f, %f)\n", pos2.x, pos2.y);
	printf("좌표 : (%f, %f)\n", pos.x, pos.y);
	printf("좌표 : (%f, %f)\n", p.x, p.y);

}