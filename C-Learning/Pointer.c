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

	////*p = 3; 올바르지 않은 문장
	//p = &b; // 올바른 문장

	// 포인터의 덧셈

	/*int a;
	int* pa;
	pa = &a;

	printf("pa의 값 : %p\n", pa);
	printf("(pa + 1)의 값 : %p\n", pa + 1);*/

	/*int a;
	char b;
	double c;

	int* pa = &a;
	char* pb = &b;
	double* pc = &c;

	printf("pa의 값 : %p\n", pa);
	printf("(pa + 1)의 값 : %p\n", pa + 1);

	printf("pb의 값 : %p\n", pb);
	printf("(pb + 1)의 값 : %p\n", pb + 1);

	printf("pc의 값 : %p\n", pc);
	printf("(pc + 1)의 값 : %p\n", pc + 1);*/

	// 포인터 뺄셈

	/*int a;
	int* pa = &a;

	printf("pa의 값 : %p\n", pa);
	printf("(pa - 1) 의 값 : %p\n", pa - 1);*/

	// 포인터 끼리의 덧셈
	/*int a;
	int* pa = &a;
	int b;
	int* pb = &b;
	int* pc = pa + pb;*/

	// => error C2110: '+' : 두 포인터를 더할 수 없습니다.
	// 포인터 끼리 덧셈이 안되는 이유
	// 의미도 없고 필요하지도 않다
	// 두 변수의 메모리 주소를 더해서 나오는 값은 이전에 포인터
	// 포인터들이 가리키던 두 개의 변수와 아무런 관련이 없는 메모리 속의 임의의 지점이다
	// 하지만 포인터 끼리의 뺄셈은 가능하다


	// 포인터의 대입
	/*int a;
	int* pa = &a;
	int* pb;

	*pa = 3;
	pb = pa;

	printf("pa가 가리키고 있는 것 : %d\n", *pa);
	printf("pb기 가리키고 있는 것 : %d\n", *pb);*/


	/* 배열의 존재 상태 */
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("arr[%d]의 주소값 : %p\n", i, &arr[i]);
	}*/



	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int* parr;
	//int i;
	//parr = &arr[0];

	//for (i = 0; i < 10; i++)
	//{
	//	printf("arr[%d]의 주소값 : %p ", i, &arr[i]);
	//	printf("(parr + %d) 의 값 : %p ", i, (parr + i));

	//	if (&arr[i] == (parr + i))
	//	{
	//		/* 만일 (parr + i) 가 성공적으로 arr[i] 를 가리킨다면*/
	//		printf(" --> 일치\n");
	//	}
	//	else
	//	{
	//		printf(" --> 불일치\n");
	//	}
	//}



	//int arr[3] = { 1,2,3 };
	//int* parr;

	//parr = arr;
	///* parr = &arr[0]; 도 동일하다 */

	//printf("arr[1] : %d\n", arr[1]);
	//printf("parr[1] : %d\n", parr[1]);


 /*포인터 이용하기*/
	int arr[10] = { 100, 98,95,89,76,92,96,100,99 };

	int* parr = arr;
	int sum = 0;

	while (parr - arr <= 9)
	{
		sum += (*parr);
		parr++;
	}
	printf("내 시험 점수 평균 : %d\n", sum / 10);


	return 0;
}