﻿# include <stdio.h>

int main() {
	int score;

	printf("점수 입력:");
	scanf_s("%d", &score);
	int point = score / 10;

	switch (point) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
		
	}
}