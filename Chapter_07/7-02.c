#include <stdio.h>

/* �Ű������� ���� �Լ� */

int get_num(void); // �Լ� ����

int main() {

	int res;

	res = get_num(); // �Լ� ȣ��, ��ȯ���� res�� ����
	printf("��ȯ�� : %d\n", res); // ��ȯ�� ���

	return 0;

}

int get_num(void) { // �Ű������� ���� ��ȯ���� �ִ�

	int n; // Ű���� �Է°��� ������ ����

	printf("��� �Է� : "); // �Է� �ȳ� �޼���
	scanf_s("%d",&n); // Ű���� �Է�

	return n; // �Է��� �� ��ȯ

}