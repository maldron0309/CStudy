#include <stdio.h>

/* switch ~ case문의 사용 */

int main() {

	int rank = 2, m = 0;

	switch (rank) // rank의 값이 얼마인지 확인
	{
	case 1: // rank가 1이면 
		m = 300; // m = 300 수행
		break;
	case 2: // rank가 2이면
		m = 200; // m = 200 수행
		break;
	case 3: // rank가 3이면 
		m = 100; // m = 100 수행
		break;
	default: // rank와 일치하는 case의 값이 없으면
		m = 10; // m = 10 수행
		break;
	}

	printf("m : %d\n", m);

	return 0;
}