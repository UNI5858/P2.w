﻿#include <stdio.h>

int main() {
	int n;
	int a[1000];
	printf("입력할 값의 갯수: ");
	scanf_s("%d", &n);
	printf("숫자 %d개를 입력하세요 :", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	int even = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			even++;
		}
	}
	printf("짝수의 개수=%d",even);
}