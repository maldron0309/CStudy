#include <stdio.h>

/* ���� ����� ������ ��, ���̰� 25�̰� ���� �ѷ��� 95�� ����� ����� ����ϴ� ���α׷� */

int main() {

	int age = 25, chest = 95;
	char size;

	if (age < 20) // ���̰� 20 �̸��̶��
	{ 
		// 20�� �̸� chest ���� ���� ����� ����

		if (chest < 85) size = 'S';
		else if (chest < 95) size = 'M';
		else size = 'L';
	}

	else // ���̰� 20���� ũ�ų� ������
	{ 
		// 20�� �̻� �������� ����� ����

		if (chest < 90) size = 'S';
		else if (chest < 100) size = 'M';
		else size = 'L';
	}

	printf("������� %c�Դϴ�.\n", size); // ������ ������ ���

	return 0;
}