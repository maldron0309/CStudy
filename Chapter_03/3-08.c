#include <stdio.h>

/* const를 사용한 변수 */

int main() {

	int income = 0; // 소득액 초기화
	double tax; // 세금
	const double tax_rate = 0.12; // 세율 초기화

	income = 456; // 소득액 저장
	tax = income * tax_rate; // 세금
	printf("세금 : %.1lf입니다.\n", tax);
}