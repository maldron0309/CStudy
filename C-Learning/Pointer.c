#include <stdio.h>

int main()
{
	// 포인터
	// 메모리 상에 위치한 특정한 데이터의 주소값을 보관하는 변수

	// & 연산자

	/*int a;
	a = 2;

	printf("%p\n", &a);*/


	// 포인터의 시작

	/*int* p;
	int a;

	p = &a;

	printf("포인터 p에 들어 있는 값 : %p\n", p);
	printf("int 변수 a가 저장된 주소 : %p\n", &a);*/

	// 포인터는 특정한 데이터의 주소값을 보관한다
	// 이 때 포인터는 주소값을 보관하는 데이터의 타입에
	// * 를 붙임으로써 정의되고,
	// & 연사자로 특정한 데이터의 메모리 상의 주소값을 알 수 있다.

	// * 연산자의 이용

	/*int* p;
	int a;

	p = &a;
	a = 2;

	printf("a의 값 : %d\n", a);
	printf("*p의 값 : %d\n", *p);*/


	// 포인터도 변수

	int a;
	int b;
	int* p;

	p = &a;
	*p = 2;
	p = &b;
	*p = 4;

	printf("a : %d\n", a);
	printf("b : %d\n", b);

	return 0;
}