#include <stdio.h>

/* short형과 long형의 자료형의 크기를 비교하여 크기가 큰 자료형이 무엇인지 출력하시오 */

int main() {

	int res; // 결과 변수

	res = sizeof(short) > sizeof(long);
	// sizeof의 피연산자로 자료형 이름을 사용하여 크기를 바이트 단위로 계산한다
	// short형의 크기가 long보다 크면 참이므로 1, 그렇지 않으면 res에 저장한다

	printf("%s\n", (res == 1) ? "short" : "long");
	// res가 1과 같으면 short형의 크기가 크므로 출력되고
	// 그렇지 않으면 long형을 출력한다

	return 0;
}