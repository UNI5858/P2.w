#include <stdio.h>
#include <string.h>

typedef struct ProductionInfo {
	int num;
	char name[100];
	int cost;
}ProductInfo;

int main() {

	ProductInfo myproduct = { 4797283,"제주 한라봉",19900 };

	printf("상품 번호: %d\n", myproduct.num);
	printf("상품 이름: %s\n", myproduct.name);
	printf("상품 가격: %d\n", myproduct.cost);
	printf("\n");

	ProductInfo a;
	a.num = 1235;
	strcpy_s(a.name, "컴퓨터");//name은 배열이기 때문에 strcpy_s를 사용한다.
	a.cost = 1000000;
	printf("상품 번호: %d\n", a.num);
	printf("상품 이름: %s\n", a.name);
	printf("상품 가격: %d\n", a.cost);
	printf("\n");
	ProductInfo b = a;
	printf("상품 번호: %d\n", b.num);
	printf("상품 이름: %s\n", b.name);
	printf("상품 가격: %d\n", b.cost);
	printf("\n");

}