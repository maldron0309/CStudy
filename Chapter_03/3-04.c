#include <stdio.h>

/* unsigned를 잘못 사용한 경우 */

int main() {

	unsigned int a;

	a = 4294967295; // 큰 양수 저장
	printf("%d\n", a); // %d로 출력
	a = -1; // 음수 저장
	printf("%d\n", a); // %u로 출력

	return 0;
}