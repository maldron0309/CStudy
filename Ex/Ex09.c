#include <stdio.h>

/* 야구경기장의 좌석 수가 70개고 입장객 수가 65명일 떄 입장률을 출력하시오 */

int main() {

	int seats = 70; // 경기장의 좌석수 초기화
	int audience = 65; // 관중수 초기화
	double rate; // 입장률을 저장할 변수

	rate = (double)audience / (double)seats * 100.0;
	// 'audienece / seats'를 바로 연산하면 둘 다 int형이무로 정수인 몫을 계산한다
	// 이 경우 관중수가 좌석 수보다 크지 않으므로 항상 0이 출력된다
	// 따라서 소수점까지 계산할 수 있도록 double형으로 형 변환한다
	// 나누기(/)와 곱하기(*)는 우선순위가 같으므로 연산 방향에 따라 왼쪽부터
	// 나누기 연산이 먼저 수행된다

	printf("입장률 : %.1lf%%\n", rate); // 입장률 출력

	return 0;
}