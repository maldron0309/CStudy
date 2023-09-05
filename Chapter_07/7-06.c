#include <stdio.h>

/* 3번 실행되는 재귀호출 함수 */

void fruit(int count);

int main() {

	fruit(1); // 처음 호출하므로 1을 인수로 준다

	return 0;
}

void fruit(int count) { // 호출 횟수를 매개변수에 저장

	printf("apple\n");
	if (count == 3) return; // 호출 횟수를 매개변수에 저장
	fruit(count + 1); // 재호출할 때 호출 횟수를 1 증가

}