#include <stdio.h>

typedef struct student {
	char dept[20];
	int year;
	int id;
	char name[20];
	char phone[20];
}student;


int main() {
	// 한명의 정보를 입력하고 출력 하세요
	student s[3];
	for (int i = 0; i < 3; i++) {
		printf("학과:");
		scanf_s("%s", s[i].dept, sizeof(s[i].dept));
		printf("학년:");
		scanf_s("%d", &s[i].year);
		printf("학번:");
		scanf_s("%d", &s[i].id);
		printf("이름:");
		scanf_s("%s", s[i].name, sizeof(s[i].name));
		printf("전화번호:");
		scanf_s("%s", s[i].phone, sizeof(s[i].phone));
	}
	for (int i = 0; i < 3; i++) {
		printf("학과: %s\n", s[i].dept);
		printf("학년: %d\n", s[i].year);
		printf("학번: %d\n", s[i].id);
		printf("이름: %s\n", s[i].name);
		printf("전화번호: %s\n", s[i].phone);
	}
}