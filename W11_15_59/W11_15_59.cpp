#include <iostream>
using namespace std;
#define SQUARE(x) ((x) * (x))

int main() {
	int a = 5;
	cout << SQUARE(a) << endl;
	cout << SQUARE(a+1) << endl;
	cout << 100 / SQUARE(a) << endl;
}