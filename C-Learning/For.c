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
	int i, j;

	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}

	return 0;
}