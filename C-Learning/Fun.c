#include <stdio.h>


//int printf_hello()
//{
//	printf("Hello World!\n");
//	return 0;
//}
//int main()
//{
//	printf("�Լ��� �ҷ����� : ");
//	printf_hello();
//
//	printf("�� �θ���? ");
//	printf_hello();
//
//	return 0;
//}

/*�Լ��� ����*/

//int return_func()
//{
//	printf("�� ����ȴ�\n");
//	return 0;
//	printf("�� ����ȵǹ¤�\n");
//
//}
//
//int main()
//{
//	return_func();
//	return 0;
//}

/*��ȯ��*/

//int ret()
//{
//	return 1000;
//}
//
//int main()
//{
//	int a = ret();
//	printf("ret() �Լ��� ��ȯ�� : %d\n", a);
//
//	return 0;
//}                  

/*���� ����*/

//int magicbox() {
//	i += 4;
//	return 0;
//}
//
//int main() {
//	int i;
//	printf("���� ���ڿ� ������� �� : ");
//	scanf_s("%d", &i);
//
//	magicbox();
//	printf("���� ���ڸ� ������ : %d\n", i);
//
//	return 0;
//}

//int change_val(int i)
//{
//	i = 3;
//	return 0;
//}
//
//int main() {
//	int i = 0;
//
//	printf("ȣ�� ���� i�� �� : %d\n", i);
//	change_val(i);
//	printf("ȣ�� ���� i�� �� : %d\n", i);
//
//	return 0;
//
//}

/*������ Ȱ��*/

//int change_val(int* p) {
//	printf("---- change_val �Լ� �ȿ��� ----\n");
//	printf("p�� �� : %p\n", p);
//	printf("p�� ����Ű�� ���� �� : %d\n", *p);
//
//	*p = 3;
//
//	printf("---- change_val �Լ� �� ----\n");
//	return 0;
//}
//
//int main() {
//	int i = 0;
//
//	printf("i ������ �ּҰ� : %p\n", &i);
//	pritnf("ȣ�� ���� i�� �� : %d\n", i);
//	change_val(&i);
//	printf("ȣ�� ���� i�� �� : %d\n", i);
//
//	return 0;
//}

/*�� ������ ���� ��ȯ�ϴ� �Լ�*/
//��ȯ �ȵ�

/*int swap(int a, int b) {

int temp = a;

a = b;
b = temp;

return 0;
}

int main() {
	int i, j;

	i = 3;
	j = 5;

	printf("SWAP ���� : i : %d, j : %d\n", i, j);

	swap(i, j);

	printf("SWAP ���� : i : %d, j : %d\n", i, j);

	return 0;
}*/

/*�ùٸ� swap �Լ�*/

int swap(int* a, int* b) {
	int temp = *a;

	*a = *b;
	*b = temp;

	return 0;
}

int main() {
	int i, j;

	i = 3;
	j = 5;

	printf("SWAP ���� : i : %d, j : %d\n", i, j);

	swap(&i, &j);
	printf("SWAP ���� : i : %d, j : %d\n", i, j);

	return 0;
}
