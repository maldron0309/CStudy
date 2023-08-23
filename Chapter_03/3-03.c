#include <stdio.h>

/* 여러 가지 정수형 변수 */

int main() {

	short sh = 32767; // short형의 최댓값 초기화
	int in = 2147483647; // int형의 최댓값 초기화
	long ln = 2147483647; // long형 최댓값 초기화
	long long lln = 123451234512345; // 아주 큰 값 초기화

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln); // long long형은 lld로 출력

	printf("long long형의 크기 : %d바이트\n", sizeof(long long));

	return 0;

}