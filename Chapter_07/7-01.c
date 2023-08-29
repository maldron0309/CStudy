#include <stdio.h>

/* 2개의 함수로 만든 프로그램 */


	int sum(int x, int y); // sum 함수 선언

	int main() {

		int a = 10, b = 20;
		int res; // 두 정수를 더한 결과를 저장할 변수

		res = sum(a, b); // sum 함수 호출
		printf("res : %d\n", res);

		return 0;
	}

	int sum(int x, int y) { // sum 함수 정의 시작

		int tmp; // 두 정수의 합을 잠시 저장할 변수

		tmp = x + y; // x와 y의 합을 tmp에 보관

		return tmp;
	}

