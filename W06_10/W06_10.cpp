#include <stdio.h>

int main() {
	char s[] = "Hello";
	char t[] = { 'h','e','l','l','o','\0' };
	printf("%s %d\n", s, sizeof(s));
	printf("%s %d\n", t, sizeof(t));

	char u[1000];

	printf("문자열 입력:");
	scanf_s("%s", u, sizeof(u));
	// vs에서는 맨 뒤에 숫자를 쓴다. 크기 제한
	// 문자열 입력은 빈칸 앞에꺼 까지만 받는다 ex) asdasd qweqwe -> asdasd
	printf("%s\n",u);
	getchar(); // \n을 읽어낸다.

	fgets(u, 1000, stdin);
	printf("%s\n", u);

	//scanf_s("%s",...); 빈칸으로 구분되는 단어
	//scanf_s는 '\n'을 읽지 않는다.
	//'\n'을 읽어 내려면 getchar( )를 사용한다.
	//fgets()는 한 줄을 '\n'까지 읽는다.
}