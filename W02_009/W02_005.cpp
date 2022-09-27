#include <stdio.h>

int main()
{
	float work = 60.0;
	float no = 2.0;
	float flo = (work - no) / work*100 ;
	float score = 15.0 / 100.0* flo;
	printf("\"고대윤\"의 출석점수 계산\n");
	printf("------------------------\n");
	printf("수업시간\t%.0f 시간\n", work);
	printf("결석시간\t%.0f 시간\n", no);
	printf("출석률\t\t%.1f%%\n", flo);
	printf("출석점수\t%.1f점\n",score);

}