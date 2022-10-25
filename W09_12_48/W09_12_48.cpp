#include <stdio.h>
void printArr(int *arr,int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", *(arr+i));
	}
}
int size(int a, int b) {
	return a / b;
}

int main() {
	int a[5] = { 1,2,3,4,5 };
	int sizea = size(sizeof(a), sizeof(a[0]));

	printArr(a,sizea);

}