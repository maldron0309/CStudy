#include <stdio.h>

/* ��ø if������ �߰�ȣ�� �ݵ�� �ʿ��� ��� */

int main() {

	int a = 10, b = 20;

	if (a < 0) // a�� 0���� ������
	{
		if (b > 0) // b�� 0���� ũ�� ok ���
		{
			printf("ok");
		}
	}
	else
	{
		printf("ok");
	}

	return 0;
}