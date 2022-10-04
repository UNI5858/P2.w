#include <stdio.h>

int main() {
	int a[100];
	int n;

	printf("몇개의 숫자를 받는가?:");
	scanf_s("%d", &n);
	printf("숫자를 입력하시오:");
	
	int max = 0;
	int min = 0;
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
		if (max < a[i]) {
			max = a[i];
		}
		if (min > a[i]) {
			min = a[i];
		}
	}
	printf("가장 큰 값은 %d이고 가장 작은 값은 %d이다.", max, min);

}