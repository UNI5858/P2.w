#include <stdio.h>

enum fruit {
	Apple,
	Banana,
	Orange,
};

void printfruit(fruit x) {
	switch (x) {
	case Apple:
		printf("Apple\n");
		break;
	case Banana:
		printf("Banana\n");
		break;
	case Orange:
		printf("Orange\n");
		break;
	}
}

int main() {

	fruit x, y, z;
	x = Apple;
	y = Banana;
	z = Orange;

	printfruit(x);
	printfruit(y);
	printfruit(z);
	//printf("Apple = %d\n", Apple);
	//printf("Banana = %d\n", Banana);
	//printf("Orange = %d\n", Orange);
}