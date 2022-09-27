#include <stdio.h>

int main() {
	int n=1;

	//do {
	//	printf("제발 0을 입력해 주세요\n");
	//	scanf_s("%d",&n);
	//} while (n!=0);
	//printf("드디어 0을 입력하셨군요!\n");
	while (n != 0) {
		printf("숫자입력(0은 종료):");
		scanf_s("%d", &n);
	}
	printf("드디어 0을 입력하셨군요!");

}
