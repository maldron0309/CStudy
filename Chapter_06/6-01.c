#include <stdio.h>

/* while문을 사용한 반복문 */

int main() {

	int a = 1; // 변수를 선언하고 곱셉을 하기 위해 1로 초기화

	while (a < 10) // a가 10보다 작으므로 조건식은 참
	{
		a = a * 2; // a에 2를 곱해 a에 다시 저장
	}

	printf("a : %d\n", a); // a값 출력

	return 0;
}