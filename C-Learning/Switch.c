#include <stdio.h>

int main() {
	
	// if������ ����
	/*int input;

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
	}*/
	// if������ �����Ѵٸ� ����� �����ϴ�
	// ������ ������ ���� �񱳹��� �ݺ��Ǵ°�쿡
	// switch���� �����ϸ� ���ϴ�.

	// switch������ ����

	/*int input;

	printf("������\n");
	printf("������ �Ͻ� ������ �Է� : \n");
	printf("1. ���ֱ�\n");
	printf("2. �ı��\n");
	printf("3. ����\n");

	scanf_s("%d", &input);

	switch (input)
	{
	case 1:
		printf("���ִ�\n");
		break;
	case 2:
		printf("�ÿ��ϴ�\n");
		break;
	case 3:
		printf("zzz\n");
		break;
	default:
		printf("�۸� �� �Ҹ���\n");
		break;
	}*/

	//switch (/*����*/)
	//{
	//case /*��1*/:
	//	// ���;
	//	break;
	//}

	// switch���� ���� �����δ� �ݵ�� �������� �Ѵ�
	// ���� �κп� ���� �������� Ÿ����
	// char, short, int, long ���� �ϳ����� �Ѵ�
	// float�̳� double�̶�� ������ �߻��ȴ�
	// default�� if���� else�� ���� ��Ȱ�� �Ѵ�

	// ���� ���ϱ�
	char i;

	printf("���ĺ� �б�");
	printf("���ĺ� : ");

	scanf_s("%c", &i);

		switch (i)
		{
		case 'a':
			printf("����\n");
			break;
		case 'b':
			printf("��\n");
			break;
		case 'c':
			printf("��\n");
			break;

		default:
			printf("�Ӹ��� ������...��");
			break;
		}

	return 0;
}