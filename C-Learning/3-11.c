#include <stdio.h>

/* ���ڿ� ���ڿ� �Է� */

int main() {

	char grade; // ������ �Է��� ����
	char name[20]; // �̸��� �Է��� �迭

	printf("���� �Է� : "); 
	scanf_s("%c", &grade); // grade ������ ���� ���� �Է�

	printf("�̸� �Է� : ");
	scanf_s("%s", name); // name �迭�� �̸� ���ڿ� �Է�, &�� ������� �ʴ´�.

	printf("%s�� ���� %c�Դϴ�.\n", name, grade);

	return 0;
}