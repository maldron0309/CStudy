#include <stdio.h>

/* Ű����� ������ �Է��ϸ� ��� ����� ����ϴ� ���α׷� (���� ��Ģ���길 �Է�) */

int main() {

	int n, n1, res;
	char op;

	printf("��Ģ ���� �Է� : ");
	scanf_s("%d%c%d", &n, &op, &n1);

	switch (op)
	{
	case '+':
		res = n + n1;
		break;
	case '-':
		res = n - n1;
		break;
	case '*':
		res = n * n1;
		break;
	case '/':
		res = n / n1;
		break;
	}

	printf("%d %c %d = %d\n", n, op, n1, res);

	return 0;
}
