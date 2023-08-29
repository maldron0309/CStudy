#include <stdio.h>

/* 매개변수가 없는 함수 */

int get_num(void); // 함수 선언

int main() {

	int res;

	res = get_num(); // 함수 호출, 반환값은 res에 저장
	printf("반환값 : %d\n", res); // 반환값 출력

	return 0;

}

int get_num(void) { // 매개변수가 없고 반환형만 있다

	int n; // 키보드 입력값을 저장할 변수

	printf("양수 입력 : "); // 입력 안내 메세지
	scanf_s("%d",&n); // 키보드 입력

	return n; // 입력한 값 반환

}