#include <stdio.h>

/* 키보드로 수식을 입력하면 계산 결과를 출력하는 프로그램 (정수 사칙연산만 입력) */

int main() {

	int n, n1, res;
	char op;

	printf("사칙 연산 입력 : ");
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
