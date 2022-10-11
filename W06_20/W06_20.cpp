#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	char p[100];
	printf("학년:");
	scanf_s("%s", s, sizeof(p));
	strcat_s(s, "학년");

	printf("학번:");
	scanf_s("%s", p, sizeof(p));
	strcat_s(s, p);

	printf("이름:");
	scanf_s("%s", p, sizeof(p));
	strcat_s(s, p);
	printf("%s", s);
}