#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
#define CNT 100

typedef struct point {
	int x;
	int y;
}Point;

double distance(point p1, point p2) {
	// 다른 두점 사이의 길이는 피타고라스 사용 x^2 + y^2 = a^2
	int x, y;
	x = p1.x - p2.x;
	y = p1.y - p2.y;
	double a;
	a = x * x + y * y;



	return 	sqrt(a);
}

int main() {
	point p[CNT];
	//랜덤함수 사용하기
	//1.랜덤 시드(seed)설정
	//2.rand( )함수 호출하여 정수의 랜덤값을 가져온다.
	srand(time(0)); //현재시간으로 시드 설정
	for (int i = 0; i < CNT; i++)
	{
		p[i].x = rand()%1000; //좌표는 0~999의 값을 갖는다.
		p[i].y = rand()%1000; //좌표는 0~999의 값을 갖는다.
	}
	double min = 1000;
	int min_i;
	int min_j;
	for (int i = 0; i < CNT; i++)
	{
		for(int j = i+1;  j< CNT; j++)
		{
			if (min > distance(p[i], p[j])) {
				min = distance(p[i], p[j]);
				min_i = i;
				min_j = j;
			}
		}
	}
	printf("점p[%d]와 점p[%d] 사이의 거리 %lf가 가장 가까운 점의 쌍입니다.",min_i,min_j,min);
}