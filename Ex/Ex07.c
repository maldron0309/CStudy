#include <stdio.h>

/* ��ü ������ ������ ����Ͽ� ��û ������ 10���� �̻��̰� ���� ����� 4.0�� �Ѵ� ��� 1�� ����ϰ�,
   �׷��� ������ 0�� ����ϴ� ���α׷� �ۼ� */

int main() {

	int kor = 3, eng = 5, mat = 4; // ����, ����, ������ ���� �ʱ�ȭ
	int credits; // ��ü ������ ������ ����
	int res; // ���� ����� ������ ����

	double kscore = 3.8, escore = 4.4, mscore = 3.9; // �� ������ ���� �ʱ�ȭ
	double grade; // ������ ����� ������ ����

	credits = kor + eng + mat; // ��ü ���� ���
	grade = (kor * kscore + eng * escore + mat * mscore) / credits; // ������ ��� ���
	res = (credits >= 10) && (grade > 4.0); // ��ü ������ 10 �̻��̰�
	// ���� ����� 4.0���� ũ�� ���̹Ƿ� ����� 1, �׷��� ������ �������� ����� 0

	printf("%d\n", res);

	return 0;
}