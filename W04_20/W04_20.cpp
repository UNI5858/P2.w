#include <stdio.h>

int main() {
	int n;

	printf("자연수 입력:");
	scanf_s("%d", &n);

	//int sum=0;
	//for (int i; i<=n;i++){
	//	sum += i;
	//int i를 안에 쓰면 지역변수가 된다.
	int sum = 0;
	int i = 1;
	while(i<=n){
		sum += i;
		i++;
	}
	printf("1부터 %d까지의 합:%d\n", n, sum);
}