#include <stdio.h>

/* Ű�� 187.5cm �̻��̰� �����԰� 80.0kg �̸��̸� ok�� ����ϰ� �� �̿��� ��쿡�� cancel�� ����ϴ� ���α׷� */

int main() {

	double height = 179.5; // Ű�� ������ ���� ����� �ʱ�ȭ
	double weight = 75.0; // �����Ը� ������ ���� ����� �ʱ�ȭ

	if (height >= 187.5 && weight <= 80.0) // Ű�� 187.5 �̻��̰�, �����԰� 80 �̸��̸� 
	{
		printf("ok"); // ok ���
	}
	else // �� �̿��� ���
	{
		printf("cancel\n"); // cancel ���
	}

	return 0;
}