#include <stdio.h>

/* ���� ǥ��� ���� ǥ�⸦ ����� ���� ���� */

int main() {

	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3; // ������ ���� ������
	post = (b++) * 3; // ������ ���� ������

	printf("�ʱ갪 a = %d, b = %d\n", a, b);
	printf("������ : (++a) x 3 = %d, ������ : (b++) x 3 = %d\n", pre, post);

	return 0;
}