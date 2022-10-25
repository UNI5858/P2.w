#include <stdio.h>

//재귀함수: 자기 자신을 호출 하는 함수(반복문과 비슷해 보인다.)
int i=1;
void rec() {
	printf("rec() 호출됨!\n");
	if (i == 10) {
		printf("끝");
	}
	else {
		i++;
		rec();
	}
}

int main() {
	rec();
}