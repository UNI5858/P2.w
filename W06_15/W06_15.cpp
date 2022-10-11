#include <stdio.h>
#include <string.h>

int main() {
	char s[100] = "hello";
	int len = strlen(s);

	printf("입력된 문자열: %s\n", s);
	printf("배열의 칸수: %d\n", sizeof(s) / sizeof(char));
	printf("문자열의 길이: %d\n", len);
	
}