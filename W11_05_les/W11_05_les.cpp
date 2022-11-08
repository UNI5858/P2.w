#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		printf("%d\n", rand() % 10);
	}
	printf("\n\n");
	int dice[10];
	int rec = 0;
	//주사위 열번 던짐
	for (int i = 0; ; i++) {
		dice[i] = rand() % 6 + 1;
		if (dice[i] == 4) {
			printf("%d번 반복\n",i+1);
			exit(0);
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", dice[i]);
	}
	printf("%d반복", rec);
}