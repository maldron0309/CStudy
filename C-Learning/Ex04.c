#include <stdio.h>

int main() {

	char ch; // ���ڸ� ������ ����

	printf("���� �Է� : "); // �Է� �ȳ� �޼���
	scanf_s("%c", &ch); // ���� ch�� ���� �Է�

	printf("%c������ �ƽ�Ű �ڵ� ���� %d�Դϴ�.\n", ch,ch); // ��ȯ�ؼ� ���

	return 0;
}