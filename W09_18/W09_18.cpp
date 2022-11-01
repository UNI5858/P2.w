#include <stdio.h>

typedef struct ProductInfo {
	int num;
	char name[100];
	int cost;
}Product;

void P_swap(Product *a, Product *b) {
	Product tmp = *a;
	*a = *b;
	*b = tmp;
}

void printProduct(Product a) {
	printf("상품 번호: %d\n", a.num);
	printf("상품 이름: %s\n", a.name);
	printf("상품 가격: %d\n", a.cost);
	printf("\n");

}

void printPProduct(Product *a) {
	printf("상품 번호: %d\n", a -> num);
	printf("상품 이름: %s\n", a -> name);
	printf("상품 가격: %d\n", a -> cost);
	printf("\n");

}


int main() {
	Product my = { 1001,"한라봉",20000 };
	Product your = { 1002,"참외",10000 };
	P_swap(&my, &your);
	printProduct(my);
	printProduct(your);
	printPProduct(&my);
	printPProduct(&your);
//	printf("상품 번호: %d\n", my.num);
//	printf("상품 이름: %s\n", my.name);
//	printf("상품 가격: %d\n", my.cost);
//	printf("\n");
//	printf("상품 번호: %d\n", your.num);
//	printf("상품 이름: %s\n", your.name);
//	printf("상품 가격: %d\n", your.cost);
//	printf("\n");
}
