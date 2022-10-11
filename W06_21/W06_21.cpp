#include <stdio.h>
#include <string.h>

int main() {
	char s[100];

	printf("입력:");
	scanf_s("%s", s, sizeof(s));
	printf("글자수는 %d이다.\n", strlen(s));
	printf("입력:");
	scanf_s("%[^\n]", s, sizeof(s));//외워라! [ ^ \ n ]빈칸을 포함해서 \n앞까지
	printf("글자수는 %d이다.", strlen(s));
}