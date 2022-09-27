#include <stdio.h>

int main() {
	int a;
	int b;
	int c;
	scanf_s("%d%d%d", &a,&b,&c);
	int i = a;
	while (i <= b) {
		if (i%c == 0)
			printf("%d ", i);
		i++;
	}

}