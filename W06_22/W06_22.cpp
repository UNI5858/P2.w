#include <stdio.h>
#include <string.h>

int main() {
	char s1[100];
	char s2[100];
	printf("입력:");
	scanf_s("%s", s1,sizeof(s1));
	strcpy_s(s2, s1);
	printf("%s", s2);
}