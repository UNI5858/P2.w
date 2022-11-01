#include <stdio.h>

typedef struct ProductInfo {
	int num;
	char name[100];
	int cost;
}ProductInfo;

int main(){
	ProductInfo myProduct = { 4797283,"제주 한라봉",19900 };

	printf("%d\n", sizeof(myProduct));
	printf("%d\n", &myProduct);
	printf("%d\n", &myProduct.num);
	printf("%d\n", myProduct.name);
	printf("%d\n", &myProduct.cost);
}