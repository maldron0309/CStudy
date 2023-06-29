#include <stdio.h>

int main() {

	// 산술 연산자
    /*int a, b;

	a = 10;
	b = 3;

	printf("a + b 는 : %d\n", a + b);
	printf("a - b 는 : %d\n", a - b);
	printf("a * b 는 : %d\n", a * b);
	printf("a / b 는 : %d\n", a / b);
	printf("a %% b 는 : %d\n", a % b);*/

	// 산술 변환
	/*int a;
	double b;

	a = 10;
	b = 3;

	printf("a / b 는 : %f\n", a / b);
	
	// 실수형 변수의 수 범위가 int 보다
	// 훨씬 넓기 때문에 정수형 변수와 실수형 변수가 만나면
	// 무조건 실수형 변수쪽으로 상승한다.
	printf("b / a 는 : %f\n", b / a); */

	// 대입 연산자
	/*int a = 3;
	a = a + 3;
	printf("a 의 값은 : %d\n", a);*/

	// 더하기 1 을 하는 방법

	/*int a = 1, b = 1, c = 1, d = 1;

	a = a + 1;
	// a 에 a 에 1을 더한 값을 대입한다
	printf("a : %d\n", a);

	b += 1;
	// 복합 대입연산
	// b = b + 1를 간략하게 적은 것
	// 물론 b = b + 1 와 b += 1은 엄밀히 말하면 같지 않다.
	// b += x; b = b + x;
	// b -= x; b = b - x;
	// b *= x; b = b * x;
	// b /= x; b = b / x;
	printf("b : %d\n", b);

	++c;
	// 증감연산자
	// 둘다 c,d를 1씩 증가시켜준다.
	// ++이 앞에 있는 것을 전위형
	// ++이 뒤에 있는 것을 후위형이라고 한다
	// 전위형은 먼저 1을 더하고 결과를 돌려주지만
	// 후위형은 결과를 돌려준 이후 1을 더해준다.
	printf("c : %d\n", c);

	d++;
	printf("d : %d\n", d);*/


	/*int a = 1;

	printf("++a : %d\n", ++a);
	// a 에 먼저 1을 더한 값인 2를 pritnf 함수에 반환형
	// %d 에 2가 들어가게 된다.

	a = 1;
	printf("a++ : %d\n", a++);
	// a의 값을 printf에 반환하며 %d 에 1이란 값이 "먼저"
	// 들어간 뒤, 1이 출력된 이후에 a 에 1이 더해진다
	// 다시 printf 문으로 a의 값을 출력하였을 때 에는 2가 나온다
	// 4개의 연산중에서 가장 빨리 연산되는 것은 a++과 같은 증감 연산이다.

	// a = a + 1은 ADD a 1로 하지만, a++은 INC a로 좀 더 빨리 계산됨
	printf("a : %d\n", a);*/

	// 비트 연산
	int a = 0xAF; // 10101111
	int b = 0xB5; // 1010101

	printf("%x\n", a & b); // a & b = 10100101
	printf("%x\n", a | b); // a | b = 10111111
	printf("%x\n", a ^ b); // a ^ b = 00011010
	printf("%x\n", ~a); // ~a = 1....1 01010000
	printf("%x\n", a << 2); // a << 2 = 1010111100
	printf("%x\n", a >> 3); // b >> 3 = 00010110

	return 0;
}