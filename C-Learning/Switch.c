#include <stdio.h>

int main() {
	
	int input;

	printf("������\n");
	printf("������ �Ͻ� ������ �Է� : \n");
	printf("1. ���ֱ�\n");
	printf("2. �ı��\n");
	printf("3. ����\n");

	scanf_s("%d", &input);

	if (input == 1)
	{
		printf("���ִ�\n");
	}
	else if (input == 2) {
		printf("�ÿ��ϴ�\n");
	}
	else if (input == 3) {
		printf("zzz...\n");
	}
	else {
		printf("�۸� �� �Ҹ���");
	}
}