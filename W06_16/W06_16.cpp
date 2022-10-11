#include <stdio.h>
#include <string.h>

int main() {
	char s1[] = "hello";
	char s2[100];

	strcpy_s(s2, s1);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);

	strcpy_s(s2, "고대윤");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);

}