#include <stdio.h>


//int printf_hello()
//{
//	printf("Hello World!\n");
//	return 0;
//}
//int main()
//{
//	printf("함수를 불러보자 : ");
//	printf_hello();
//
//	printf("또 부를까? ");
//	printf_hello();
//
//	return 0;
//}

/*함수의 리턴*/

//int return_func()
//{
//	printf("난 실행된다\n");
//	return 0;
//	printf("난 실행안되뮤ㅠ\n");
//
//}
//
//int main()
//{
//	return_func();
//	return 0;
//}

/*반환값*/

//int ret()
//{
//	return 1000;
//}
//
//int main()
//{
//	int a = ret();
//	printf("ret() 함수의 반환값 : %d\n", a);
//
//	return 0;
//}                  

/*마술 상자*/

//int magicbox() {
//	i += 4;
//	return 0;
//}
//
//int main() {
//	int i;
//	printf("마술 상자에 집어넣을 값 : ");
//	scanf_s("%d", &i);
//
//	magicbox();
//	printf("마술 상자를 지나면 : %d\n", i);
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
//	printf("호출 이전 i의 값 : %d\n", i);
//	change_val(i);
//	printf("호출 이후 i의 값 : %d\n", i);
//
//	return 0;
//
//}

/*포인터 활용*/

//int change_val(int* p) {
//	printf("---- change_val 함수 안에서 ----\n");
//	printf("p의 값 : %p\n", p);
//	printf("p가 가리키는 것의 값 : %d\n", *p);
//
//	*p = 3;
//
//	printf("---- change_val 함수 끝 ----\n");
//	return 0;
//}
//
//int main() {
//	int i = 0;
//
//	printf("i 변수의 주소값 : %p\n", &i);
//	pritnf("호출 이전 i의 값 : %d\n", i);
//	change_val(&i);
//	printf("호출 이후 i의 값 : %d\n", i);
//
//	return 0;
//}

/*두 변수의 값을 교환하는 함수*/
//교환 안됨

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

	printf("SWAP 이전 : i : %d, j : %d\n", i, j);

	swap(i, j);

	printf("SWAP 이후 : i : %d, j : %d\n", i, j);

	return 0;
}*/

/*올바른 swap 함수*/

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

	printf("SWAP 이전 : i : %d, j : %d\n", i, j);

	swap(&i, &j);
	printf("SWAP 이후 : i : %d, j : %d\n", i, j);

	return 0;
}
