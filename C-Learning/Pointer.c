#include <stdio.h>

int main()
{
	// ������
	// �޸� �� ��ġ�� Ư���� �������� �ּҰ��� �����ϴ� ����

	// & ������

	/*int a;
	a = 2;

	printf("%p\n", &a);*/


	// �������� ����

	/*int* p;
	int a;

	p = &a;

	printf("������ p�� ��� �ִ� �� : %p\n", p);
	printf("int ���� a�� ����� �ּ� : %p\n", &a);*/

	// �����ʹ� Ư���� �������� �ּҰ��� �����Ѵ�
	// �� �� �����ʹ� �ּҰ��� �����ϴ� �������� Ÿ�Կ�
	// * �� �������ν� ���ǵǰ�,
	// & �����ڷ� Ư���� �������� �޸� ���� �ּҰ��� �� �� �ִ�.

	// * �������� �̿�

	/*int* p;
	int a;

	p = &a;
	a = 2;

	printf("a�� �� : %d\n", a);
	printf("*p�� �� : %d\n", *p);*/


	// �����͵� ����

	/*int a;
	int b;
	int* p;

	p = &a;
	*p = 2;
	p = &b;
	*p = 4;

	printf("a : %d\n", a);
	printf("b : %d\n", b);*/

	//int a, b;

	//const int* p = &a;

	////*p = 3; �ùٸ��� ���� ����
	//p = &b; // �ùٸ� ����

	// �������� ����

	/*int a;
	int* pa;
	pa = &a;

	printf("pa�� �� : %p\n", pa);
	printf("(pa + 1)�� �� : %p\n", pa + 1);*/

	int a;
	char b;
	double c;

	int* pa = &a;
	char* pb = &b;
	double* pc = &c;

	printf("pa�� �� : %p\n", pa);
	printf("(pa + 1)�� �� : %p\n", pa + 1);

	printf("pb�� �� : %p\n", pb);
	printf("(pb + 1)�� �� : %p\n", pb + 1);

	printf("pc�� �� : %p\n", pc);
	printf("(pc + 1)�� �� : %p\n", pc + 1);


	return 0;
}