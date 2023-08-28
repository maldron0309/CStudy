#include <stdio.h>

/* 중첩 if문에서 중괄호가 반드시 필요한 경우 */

int main() {

	int a = 10, b = 20;

	if (a < 0) // a가 0보다 작지만
	{
		if (b > 0) // b가 0보다 크면 ok 출력
		{
			printf("ok");
		}
	}
	else
	{
		printf("ok");
	}

	return 0;
}