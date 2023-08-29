#include <stdio.h>

/* 소수 출력 프로그램 */

int main() {

	int n;
	int i, j;
	int pn;
	int cnt = 0;

	printf("2이상의 정수를 입력하세요");
	scanf_s("%d", &n);

	for ( i = 2; i <= n; i++)
	{
		pn = 1;

		for ( j = 2; j < 1; j++)
		{
			if ((i % j) == 0)
			{
				pn = 0;
				break;
			}
		}

		if (pn == 1)
		{
			printf("%5d", i);
			cnt++;

			if ((cnt % 5) == 0)
			{
				printf("\n");
			}
		}
	}

	return 0;

}