#include <stdio.h>

int main() {

	// if문 이란?
	/*int i;
	printf("입력하고 싶은 숫자 입력 : ");
	scanf_s("%d", &i);

	if (i == 7)
		// == 는 어떠한 두 값 사이의 관계를 나타내주는 관계 연산자이다
	{
		printf("행운의 숫자 7 입력!");
		// 만약 i의 값이 아니라면 if문이 실행되지 않는다
	}*/

	// 나눗셈

	/*double a, b;
	printf("나누고 싶은 정수 입력 : ");
	scanf_s("%lf %lf", &a, &b);

	printf("%f 를 %f 로 나눈 값은 : %f\n", a, b, a / b);*/

	// 1 과 0을 입력하면 inf 라는 값이 나온다
	// 이유는 수학에서는 어떠한 수를 0 으로 나누는 것이 금지되어있기 때문

	// 나눗셈 보완버전
	/*double a, b;
	printf("나누고 싶은 정수 입력 : ");
	scanf_s("%lf %lf", &a, &b);

	if (b == 0)
		// 만약 b의 값이 0이라면 아래 내용이 출력되고 프로그램이 종료된다.
	{
		printf("0으로 나눌 수 없다.");
		return 0;
	}

	// b의 값이 0이 아니라면 아래 내용을 출력하게 된다.
	printf("%f 를 %f 로 나눈 값은 : %f\n", a, b, a / b);*/

	// 합격, 불합격 판단

	/*int score;

	printf("수학 점수 입력 : ");
	scanf_s("%d", &score);

	if (score >= 90)
		// >= 은 ~보다 크거나 같다를 의미한다
	{
		printf("합격!");
	}
	else {
		printf("불합격ㅠ");
	}*/

	// 크기 비교

	/*int a, b;

	printf("크기 비교할 두 수 입력 : ");
	scanf_s("%d %d", &a, &b);

	if (a > b) // a 가 b 보다 크면
	{
		printf("%d 는 %d 보다 큽니다.\n",a,b);
	}
	if (a < b) // a 가 b 보다 작으면
	{
		printf("%d 는 %d 보다 작습니다.\n", a, b);
	}
	if (a >= b) // a 가 b 보다 크거나 같으면
	{
		printf("%d 는 %d 보다 크거나 같습니다.\n", a, b);
	}
	if (a <= b) // a 가 b 보다 작거나 같으면
	{
		printf("%d 는 %d 보다 작거나 같습니다.\n", a, b);
	}
	if (a == b) // a 와 b 가 같으면
	{
		printf("%d 는 %d 와(과) 같습니다.\n", a, b);
	}
	if (a != b) // a 와 b 가 다르면
	{
		printf("%d 는 %d 와(과) 다릅니다.\n", a, b);
	}*/

	// else

	/*int n;

	printf("아무 숫자 입력 : ");
	scanf_s("%d", &n);

	if (n == 7)
	{
		printf("행운의 숫자 7!!\n");
	}
	else {
		printf("그냥 보통 숫자 %d 이네용\n", n);
	}*/

	// if-else 

	int n;

	printf("아무 숫자 입력 : ");
	scanf_s("%d", n);

	if (n == 7)
	{
		printf("행운의 숫자 7!!");
	}
	else if (n == 4)
	{
		printf("죽음의 숫자 4;;");
	}
	else {
		printf("그냥 평범한 숫자 %d", n);
	}

	return 0;
}