#include <stdio.h>

/* 4.0�� 1.2�� ����, ����, ����, �������� �� ���� �Ҽ��� ���� ù° �ڸ����� ��� */

int main() {

	double a = 4.0, b = 1.2;

	printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
	printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
	printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
	printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);

	// double���̹Ƿ� �Ҽ������� ����Ѵ�.
	// �Ҽ��� ���� ù° �ڸ����� ����ؾ� �ϹǷ� % ������ .1�� ����Ѵ�.

	return 0;
}