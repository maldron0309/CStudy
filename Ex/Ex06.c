#include <stdio.h>

/* 두 과목의 점수를 입력하여 평군을 출력하는 프로그램 작성, 평균은 소수점 이하 첫째 자리까지 출력 */

int main() {

	int a, b, tot;
	double avg;

	printf("두 과목의 점수 : ");
	scanf_s("%d %d", &a, &b); // 점수 입력

	tot = a + b; // 두 점수를 더해 총점을 구한다
	avg = tot / 2.0; // 평균 계산, tot가 정수형이므로 나누는 값을 2.0과 같이 실수값으로 사용해야 한다
	// 그렇지 않으면 피연산자가 모두 정수 값이므로 정수인 몫을 계산한다

	printf("평균 %.1lf\n", avg);

	return 0;

}