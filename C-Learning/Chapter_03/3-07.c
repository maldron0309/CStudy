#include <stdio.h>
#include <string.h> // ���ڿ��� �ٷ� �� �ִ� string.h ��� ���� ����

/* char�迭�� ���ڿ� ���� */

int main() {
	
	char fruit[20] = "strawberry"; // strawberry�� �ʱ�ȭ
	
	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

	return 0;
}
