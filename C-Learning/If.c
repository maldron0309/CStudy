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

	/*int n;

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
	}*/

	/*float avg;
	float math, eng, sci, pro;

	printf("수학,영어,과학,코딩 점수 각각 입력 : ");
	scanf_s("%f %f %f %f", &math, &eng, &sci, &pro);

	avg = math + eng + sci + pro / 4;
	printf("당신의 평균 점수 : %f\n", avg);

	if (avg >= 90)
	{
		printf("당신은 우등생!");
	}
	else if (avg >= 50)
	{
		printf("조금만 노력좀...");
	}
	else {
		printf("공부 안하셨나요..?");
	}*/

	// 논리 연산자
	/*int a;
	printf("아무 숫자나 입력 : ");
	scanf_s("%d", &a);

	if (a >= 10 && a < 20)
		// && 는 논리곱(AND)
		// & 는 비트 사이의 AND 연산을 할 때 사용하는 것이고,
		// && 는 조건식 사이의 관계를 표현 할때 쓰인다
		// & 는 정확한 비트 AND 연산 결과를 제공하고
		// && 는 그냥 참 혹은 거짓만을 알려준다
	{
		printf("%d는 10 이상, 20미만인 수 입니다\n", a);
	}*/

	// & && 비교

	/*int a = 31, b = 15;
	printf("a & b = %d\n", a & b);
	printf("a && b = %d\n", a && b);*/

	// 논리 합 연산자
	/*int height, weight;
	printf("키 와 몸무게를 각각 입력 : ");
	scanf_s("%d %d", &height, &weight);

	if (height >= 190 || weight >= 100)
		// AND 와 OR의 차이 AND가 두 조건이 모두 참 일 때 참을 반환한다면
		// OR 은 두 조건이 모두 거짓 일 때 만 거짓을 반환한다
		// 참 || 거짓 == 참
	{
		printf("당신은 거구 입니다\n", height, weight);
	}*/
	// 논리 부정
	int height, weight;
	printf("키 와 몸무게를 각각 입력 : ");
	scanf_s("%d %d", &height, &weight);

	if (height >= 190 || weight >= 100)
	{
		printf("당신은 거구 입니다\n", height, weight);
	}
	if (!(height >= 190 || weight >= 100))
		// ! 는 NOT 연산자
		// 참을 거짓으로, 거짓을 참으로 반전 시켜주는 연산자
		// 0은 1로, 0이 아닌 값은 0으로 변환해준다

		// ! 연산자가 0 이 아닌 값은 0으로 변환 해준다는 특성을 이용해
		// 어떠한 변수의 값이 0이 아닌지를 판별하기도 한다
		
		// if(!p){ // p == 0 과 같은 의미지만 더 짧다
		// p가 0 일때만 실행된다.
		// }
	{
		printf("당신 거구가 아닙니다\n");
	}



	return 0;
}