#include <stdio.h>

/* unsigned�� �߸� ����� ��� */

int main() {

	unsigned int a;

	a = 4294967295; // ū ��� ����
	printf("%d\n", a); // %d�� ���
	a = -1; // ���� ����
	printf("%d\n", a); // %u�� ���

	return 0;
}