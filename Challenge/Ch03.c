#include <stdio.h>

/* �Ҽ� ��� ���α׷� */

int main() {

	int n;
	int i, j;
	int pn;
	int cnt = 0;

	printf("2�̻��� ������ �Է��ϼ���");
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