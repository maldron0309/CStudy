#include <stdio.h>

/* ���� ������ �ᱣ�� Ȯ�� */

int main() {

	int a = 10, b = 20, c = 10;
	int res; // �ᱣ���� ������ ����

	res = (a > b); // 10 > 20�� �����̹Ƿ� �ᱣ���� 0
	printf("a > b : %d\n", res);

	res = (a >= b); // 10 >= 20�� �����̹Ƿ� �ᱣ���� 0
	printf("a >= b : %d\n ", res);

	res = (a < b); // 10 < 20�� ���̹Ƿ� �ᱣ���� 1
	printf("a < b : %d\n", res);

	res = (a <= b); // 10 <= 20�� ���̹Ƿ� �ᱣ���� 1
	printf("a <= b : %d\n", res);

	res = (a <= c); // 10 <= 10�� ���̹Ƿ� �ᱣ���� 1
	printf("a <= c : %d\n", res); 

	res = (a == b); // 10 == 20�� �����̹Ƿ� �ᱣ���� 0
	printf("a == b : %d\n", res);

	res = (a != c); // 10 != 10�� �����̹Ƿ� �ᱣ���� 0
	printf("a != c : %d\n", res);

	return 0;
}