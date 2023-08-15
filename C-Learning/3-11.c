#include <stdio.h>

/* 문자와 문자열 입력 */

int main() {

	char grade; // 학점을 입력할 변수
	char name[20]; // 이름을 입력할 배열

	printf("학점 입력 : "); 
	scanf_s("%c", &grade); // grade 변수에 학점 문자 입력

	printf("이름 입력 : ");
	scanf_s("%s", name); // name 배열에 이름 문자열 입력, &를 사용하지 않는다.

	printf("%s의 학점 %c입니다.\n", name, grade);

	return 0;
}