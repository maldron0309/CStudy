#include <stdio.h>

/* 2���� �Լ��� ���� ���α׷� */


	int sum(int x, int y); // sum �Լ� ����

	int main() {

		int a = 10, b = 20;
		int res; // �� ������ ���� ����� ������ ����

		res = sum(a, b); // sum �Լ� ȣ��
		printf("res : %d\n", res);

		return 0;
	}

	int sum(int x, int y) { // sum �Լ� ���� ����

		int tmp; // �� ������ ���� ��� ������ ����

		tmp = x + y; // x�� y�� ���� tmp�� ����

		return tmp;
	}

