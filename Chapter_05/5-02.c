#include <stdio.h>

/* if ~ else문의 사용 */

int main() {

	int a = 10;

	if (a >= 0)
	{
		a = 1; // a가 0보다 크거나 같으면 a에 1 대입
	}
	else {

		a = -1; // a가 0보다 작으면 a에 -1 대입
	}

	printf("a : %d\n", a);

	return 0;
}