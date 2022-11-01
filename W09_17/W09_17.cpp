#include <stdio.h>

typedef struct ProductInfo {
	int num;
	char name[100];
	int cost;
}ProductInfo;

int main() {
	ProductInfo my = { 4797283, "제주 한라봉", 19900 };
	ProductInfo *ptr_my = &my;

	printf("상품 번호: %d\n", (*ptr_my).num);
	printf("상품 이름: %s\n", (*ptr_my).name);
	printf("상품 가격: %d\n", (*ptr_my).cost);
	printf("\n");

	printf("상품 번호: %d\n", ptr_my -> num);
	printf("상품 이름: %s\n", ptr_my -> name);
	printf("상품 가격: %d\n", ptr_my -> cost);
	printf("\n");
	//포인터의 멤버에 값을 가져올땐 화살표( -> ) 이용
}