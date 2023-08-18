#include <stdio.h>

/* 조건 연산자 */

int main() {

	int a = 10, b = 20, res;

	res = (a > b) ? a : b;
	printf("큰 값 : %d\n", res);

	return 0;
}