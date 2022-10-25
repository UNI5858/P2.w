#include <stdio.h>

void printArr(int parr[4]) { // 배열을 매개변수로 넘기기
	for (int i = 0; i < 4; i++) {
		printf("%d\n", parr[i]);
	}
}

void printp(int *p) { //포인터 이용(주소 이용)
	for (int i = 0; i < 4; i++) {
		printf("%d\n", *(p+i));
	}
}

void printArr2(int parr[4]) { //배열의 값 바꾸기
	for (int i = 0; i < 4; i++) {
		parr[i]++;
	}
}


int main() {
	int arr[4] = { 1, 2, 3, 4 };

	printArr(arr);
	printp(arr);
	printArr2(arr);
	for (int i = 0; i < 4; i++) {
		printf("%d\n", arr[i]);
	}
}