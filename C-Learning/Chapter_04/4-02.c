#include <stdio.h>

/* ��� �������� ���ϴ� ���� */

int main() {

	double apple; // �Ǽ�
	int banana, orange; // ����

	apple = 5.0 / 2.0; // �Ǽ��� �Ǽ��� ������ ����
	banana = 5 / 2; // ������ ������ ������ ����
	orange = 5 % 2; // ������ ������ ������ ����

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	return 0;
}