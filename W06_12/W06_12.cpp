#include <stdio.h>

int main() {
	int a[100];
	int n;
	printf("몇개:");
	scanf_s("%d", &n);
	printf("숫자입력:");

	int max = 0;
	int sec = 0;
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
		if (max < a[i]) {
			max = sec;
			max = a[i];
		}
		//else if 아니고 만약 이거라면 사용
		else if (sec < a[i]) {
			sec = a[i];
		}
	}
	printf("가장 큰 값은 %d이고 두 번째 큰 값은 %d이다.", max, sec);

	//10개의 숫자를 배열에 저장
	/*int b[10];

	printf("숫자 10개 입력:");
	
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &b[i]);
	}*/

}