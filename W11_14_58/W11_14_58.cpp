#include <iostream>
using namespace std;

enum Size {Short, Tall, Grande, Venti };
char sizeName[][7] = { "Short","Tall","Grande","Venti" };
int priceAmericano[] = { 3800, 4100, 4600, 5100 };
int priceCapucciono[] = { 4600, 5900, 6400, 6900 };

int main() {
	cout << "커피 가격표(아메리카노)" << endl;
	for (int i = Short; i <= Venti; i++) {
		cout << sizeName[i] << " : " << priceAmericano[i] << endl;
	}
	cout << "커피 가격표(카푸치노)" << endl;
	for (int i = Short; i <= Venti; i++) {
		cout << sizeName[i] << " : " << priceCapucciono[i] << endl;
	}
}