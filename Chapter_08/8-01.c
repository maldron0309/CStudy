#include <stdio.h>

/* 5���� ���̸� ������ �迭�� �����ϰ� ����ϴ� ��� */

int main() {

	int array[5]; // int�� ��� 5���� �迭 ����

	array[0] = 10; // ù ��° �迭 ��ҿ� 10 ����
	array[1] = 20; // �� ��° �迭 ��ҿ� 20 ����
	array[2] = array[0] + array[1]; // ù ��°�� �� ��° ��Ҹ� ���� �� ��° ��ҿ� ����
	scanf_s("%d", &array[3]); // Ű����� �Է¹޾�  �� ��° ��ҿ� ����

	printf("%d\n", array[2]); // �� ��° �迭 ��� ���
	printf("%d\n", array[3]);
	printf("%d\n", array[4]); // ������ �迭 ��Ҵ� ������ ��

	return 0;
}