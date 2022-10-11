#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	printf("입력:");
	scanf_s("%[^\n]", s,sizeof(s));
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		printf("%c\n", s[i]);
	}
}