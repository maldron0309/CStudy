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

	/*int a;
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
	printf("(pc + 1)�� �� : %p\n", pc + 1);*/

	// ������ ����

	/*int a;
	int* pa = &a;

	printf("pa�� �� : %p\n", pa);
	printf("(pa - 1) �� �� : %p\n", pa - 1);*/

	// ������ ������ ����
	/*int a;
	int* pa = &a;
	int b;
	int* pb = &b;
	int* pc = pa + pb;*/

	// => error C2110: '+' : �� �����͸� ���� �� �����ϴ�.
	// ������ ���� ������ �ȵǴ� ����
	// �ǹ̵� ���� �ʿ������� �ʴ�
	// �� ������ �޸� �ּҸ� ���ؼ� ������ ���� ������ ������
	// �����͵��� ����Ű�� �� ���� ������ �ƹ��� ������ ���� �޸� ���� ������ �����̴�
	// ������ ������ ������ ������ �����ϴ�


	// �������� ����
	/*int a;
	int* pa = &a;
	int* pb;

	*pa = 3;
	pb = pa;

	printf("pa�� ����Ű�� �ִ� �� : %d\n", *pa);
	printf("pb�� ����Ű�� �ִ� �� : %d\n", *pb);*/


	/* �迭�� ���� ���� */
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("arr[%d]�� �ּҰ� : %p\n", i, &arr[i]);
	}*/



	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int* parr;
	//int i;
	//parr = &arr[0];

	//for (i = 0; i < 10; i++)
	//{
	//	printf("arr[%d]�� �ּҰ� : %p ", i, &arr[i]);
	//	printf("(parr + %d) �� �� : %p ", i, (parr + i));

	//	if (&arr[i] == (parr + i))
	//	{
	//		/* ���� (parr + i) �� ���������� arr[i] �� ����Ų�ٸ�*/
	//		printf(" --> ��ġ\n");
	//	}
	//	else
	//	{
	//		printf(" --> ����ġ\n");
	//	}
	//}



	//int arr[3] = { 1,2,3 };
	//int* parr;

	//parr = arr;
	///* parr = &arr[0]; �� �����ϴ� */

	//printf("arr[1] : %d\n", arr[1]);
	//printf("parr[1] : %d\n", parr[1]);


 /*������ �̿��ϱ�*/
	int arr[10] = { 100, 98,95,89,76,92,96,100,99 };

	int* parr = arr;
	int sum = 0;

	while (parr - arr <= 9)
	{
		sum += (*parr);
		parr++;
	}
	printf("�� ���� ���� ��� : %d\n", sum / 10);


	return 0;
}