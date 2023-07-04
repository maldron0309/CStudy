#include <stdio.h>

int main() {

	/*초기식    조건식   증감식
	for (int i = 0; i < 20; i++)
	{
		printf("숫자 : %d\n", i);
	}*/

	// 1 부터 19 까지 합

	/*int sum = 0;

	for (int i = 0; i < 20; i++)
	{
		sum = sum + i;
	}
	printf(" 1 부터 19 까지의 합 : %d\n", sum);*/

	/*int sum = 0;

	for (int i = 0; i <= 10000; i++)
	{
		sum = sum + i;
	}
	printf("1 부터 10000 까지의 합 : %d\n", sum);*/

	// for 응용

	//int i, sub, score;
	//double sum_score = 0;	

	//printf("몇 개의 과목 점수를 입력 받을 것인가? : ");
	//scanf_s("%d", &sub);

	//printf("\n 각 과목의 점수 입력 ");
	//for ( i = 1; i <= sub; i++)
	// // i 의 값이 1에서 sub 까지 1 씩 증가
	// // for 문 안의 내용이 sub 번 실행된다는 뜻
	//{
	//	printf("과목 %d : ", i);
	//	scanf_s("%d", &score); // 각 점수 입력받기
	//	sum_score = sum_score + score; // 과목들의 점수의 합
	//}

	//printf("전체 과목의 평균은 : %.2f\n", sum_score / sub);

	// break

	//int a;

	//printf("컴퓨터가 생각한 숫자 맞추기");

	//for (;;) // for문의 조건식이 명시되지 않는다면 항상 참 이라고 인식하게됨
	//	// 다시 말해 무한반복
	//{
	//	scanf_s("%d", &a);
	//	if (a == 3)
	//	{
	//		printf("정답!");
	//		break;
	//	}
	//	else
	//	{
	//		printf("오답");
	//	}
	//}

	//for (;;)
	//{
	//	break; // break문을 만나자 마자 for문 밖으로 탈출 시키므로
	//	// a 는 출력 되지 않고 종료됨
	//	prirnf("a");
	//}

	//for (;;)
	//{
	//	prirnf("a");
	//	break; // a가 출력되고 for 문을 빠져나가 종료됨
	//}

	// 무한 for문은 많은 곳에서 쓰이고 있다.

	//for (;;)
	//{
	//	// 게임
	//	if (/*유저 사망*/)
	//	{
	//		if (/*게임 다시 시작*/)
	//			break;
	//	}
	//}
	// 다시 시작

	// continue 문
	// continue 문은 break문과 비슷하지만 다르다
	// continue 문은 break와 달리 for문을 빠져 나가지 않고
	// 그냥 패스한다

	// 5 의 배수를 제외한 숫자 출력

	//int i;

	//for ( i = 0; i < 100; i++)
	//{
	//	if (i % 5 == 0)
	//	// i 를 5로 나눈 나머지 
	//	// i % 5 가 0일 때 == 0, continue를 실행함
	//	{
	//		continue;
	//	}
	//	printf("%d ", i);
		// 5의 배수를 제외한 0 이상 100미만의 모든 수가 출력됨
		// continue는 break 문 처럼 아래 모든 내용을 무시한다는 점에서
		// 동일 하지만, break문은 루프를 빠져나가는데 반면
		// continue 는 다시 조건 점검부로 점프하게 된다.

	// 구구단
	//int i, j;

	//for (i = 1; i < 10; i++)
	//{
	//	for (j = 0; j < 10; j++)
	//	{
	//		printf("%d x %d = %d\n", i, j, i * j);
	//	}
	//}

	/*int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf("%d ", j);
		}
	}*/
	// i가 1이면, j가 출력되지 않고, i가 2가 되면 j가 1부터 8까지 출력된다.

	// while 문

	//int i = 1, sum = 0;

	//// 조건식
	//while (i <= 100)
	//{
	//	sum += i;
	//	i++;
	//}
	//// i 의 값이 100 이하 인 지 검사한 다음에 (i <= 100), sum 에 i를 더하고
	//// (sum += i), i 의 값을 증가한 뒤(i++), 다시 처음으로 돌아가게 됨
	//// while 문의 특징은 시작 부터 조건식을 검사한다는 것
	//// 만약 i < 1 이 조건식이라면 while 문 내부의 내용은 실행되지 않고 종료

	//// 조건식에 i <= 100이 들어간다면 i가 100 이하 일 때 만 조건식이 성립하므로
	//// i가 100 이하 일 때 까지 while 문이 돌아가게 된다.

	//printf("1 부터 100 까지의 합 : %d\n", sum);


	// do-while 문

	/*int i = 1, sum = 0;

	do {
		sum += i;
		i++;
	} while (i < 1);
	{
		printf("sum : %d\n", sum);
	}*/

    // do-while문은 먼저 명령을 실행 한 뒤에 조건식을 검사한다
    // 처음 부터 조건식이 참이 아니더라도 명령 먼저 실행한 다음 조건식을
    // 검사하기 때문에 최소한 한 번은 실행된다.

   
    // N 줄인 삼각형 출력
	/*int N, i, j, k;

	printf("임의의 N을 입력하세요: ");
	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N - i; j++) {
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}*/


	return 0;
}