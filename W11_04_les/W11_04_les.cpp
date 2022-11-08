#include <stdio.h>

int main() {
	char str[20];
	int n;

	fgets(str, 20, stdin);
	puts(str);

	sscanf_s(str, "%d", &n);
	printf("%d\n", n);
	char a[20];
	sprintf_s(a, "%d", n);
	printf("a=%s\n", a);
}