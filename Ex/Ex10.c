#include <stdio.h>

/* 3.76시간은 몇 시간, 몇 분, 몇 초인지 출력하시오 */

int main() {

	int hour, min, sec; // 시, 분, 초를 저장할 변수
	double time = 3.76; // 시간 초기화

	hour = (int)time; // 형 변환으로 졍수 부분만을 골라낸다
	time -= hour; // 한 시간이 안되는 부분만을 다시 저장한다
	time *= 60.0; // 분 단위로 환산
	min -= (int)time; // 정수 부분만을 골라내어 분으로 저장한다
	time *= 60.0; // 초 단위로 환산
	sec = (int)time; // 정수 부분만을 골래어 초로 저장한다

	printf("3.76시간은 %d시간 %d분 %d초입니다.\n", hour, min, sec);

	return 0;
}