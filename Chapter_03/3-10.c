#include <stdio.h>

/* scanf �Լ��� ����� ���� �Է� */

int main() {

	int age; // ���̴� ������
	double height; // Ű�� �Ǽ���

	printf("���̿� Ű�� �Է��ϼ��� : "); // �Է� �ȳ� �޼��� ���
	scanf_s("%d%lf", &age, &height); // ���̿� Ű�� �Բ� �Է�

	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�", age, height); // �Է°� ���

	return 0;
}