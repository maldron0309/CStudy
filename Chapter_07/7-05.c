#include <stdio.h>

/* ���ȣ�� �Լ� */

void fruit(void); // �Լ� ����

int main() {

	fruit(); // �Լ� ȣ��

	return 0;
}

void fruit() { // ���ȣ�� �Լ� ����

	printf("apple\n");
	fruit(); // �ڽ��� �ٽ� ȣ��
}