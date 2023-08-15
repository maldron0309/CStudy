#include <stdio.h>

int main() {

	char ch; // 문자를 저장할 변수

	printf("문자 입력 : "); // 입력 안내 메세지
	scanf_s("%c", &ch); // 변수 ch에 문자 입력

	printf("%c문자의 아스키 코드 값은 %d입니다.\n", ch,ch); // 변환해서 출력

	return 0;
}