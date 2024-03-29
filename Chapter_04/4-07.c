#include <stdio.h>

/* 연산의 결괏값을 사용하는 방법 */

int main() {

	int a = 10, b = 20;
	int res;

	a + b; // 연산 결과는 버려짐
	printf("%d + %d = %d\n", a, b, a + b); // 연산 결과를 바로 출력에 사용

	res = a + b; // 연산 결과를 변수에 저장
	printf("%d + %d = %d\n", a, b, res); // 저장된 값을 계속 사용

	return 0;
}