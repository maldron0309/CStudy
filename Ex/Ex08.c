#include <stdio.h>

/* short���� long���� �ڷ����� ũ�⸦ ���Ͽ� ũ�Ⱑ ū �ڷ����� �������� ����Ͻÿ� */

int main() {

	int res; // ��� ����

	res = sizeof(short) > sizeof(long);
	// sizeof�� �ǿ����ڷ� �ڷ��� �̸��� ����Ͽ� ũ�⸦ ����Ʈ ������ ����Ѵ�
	// short���� ũ�Ⱑ long���� ũ�� ���̹Ƿ� 1, �׷��� ������ res�� �����Ѵ�

	printf("%s\n", (res == 1) ? "short" : "long");
	// res�� 1�� ������ short���� ũ�Ⱑ ũ�Ƿ� ��µǰ�
	// �׷��� ������ long���� ����Ѵ�

	return 0;
}