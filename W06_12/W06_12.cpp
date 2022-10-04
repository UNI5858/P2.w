#include <stdio.h>

int main() {
	int a[100];
	int n;
	printf("몇개:");
	scanf_s("%d", &n);
	printf("숫자입력:");

	int max = 0;
	int sec;
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
		if (max < a[i]) {
			sec = max;
			max = a[i];
		}
	}
	printf("가장 큰 값은 %d이고 두 번째 큰 값은 %d이다.", max, sec);



}