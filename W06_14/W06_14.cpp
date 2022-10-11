#include <stdio.h>

int main() {
	char s[100];
	printf("입력:");
	scanf_s("%s", s,sizeof(s));

	for (int i = 0; i < sizeof(s); i++) {
		if (s[i] == '\0') {
			break;
		}
		printf("%c\n", s[i]);
	}
}