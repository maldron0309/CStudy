#include <stdio.h>

/* if ~ else if ~ else�� ��� */

int main() {

	int a = 0, b = 0;

	if (a > 0) // ���ǽ�1 : a�� 0���� ũ�� b�� 1 ����
	{
		b = 1;
	}
	else if (a == 0) // ���ǽ�2 : a�� 0���� ũ�� �ʰ� a�� 0�̸� b�� 2 ����
	{
		b = 2;
	}
	else // a�� 0���� ũ�� �ʰ� 0���� ũ�� b�� 3 ����
	{
		b = 3;
	}

	printf("b : %d\n", b); // if������ ������ b �� ���

	return 0;
}