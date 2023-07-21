#include <stdio.h>

int main()
{
	//// 배열 기초
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//printf("Array 5번 째 원소 : %d\n");

	/*int arr[10] = { 2,10,30,21,34,23,53,21,9,1 };

	for (int i = 0; i < arr; i++)
	{
		printf("배열의 %d 번째 원소 : %d\n", i + 1, arr[i]);
	}*/


	// 평균 구하기

	//int arr[5]; // 성적을 저장하는 배열
	//int i, avg = 0;

	//for ( i = 0; i < 5; i++) // 학생들의 성적을 입력받기
	//{
	//	printf("%d 번 째 학생의 성적은 ? : ", i + 1);
	//	scanf_s("%d", &arr[i]);
	//}

	//for ( i = 0; i < 5; i++) // 전체 학생 성적의 합 구하기
	//{
	//	avg = avg + arr[i];
	//}
	//// 평균이므로 5 로 나누어 주기

	//printf("전체 학생의 평균은 : %d\n", avg / 5);


	// 성적 합격 불합격

	/*int arr[10];
	int i, avg = 0;

	for ( i = 0; i < 10; i++)
	{
		printf("%d 번째 학생의 성적은? : ",i + 1);
		scanf_s("%d", arr[i]);
	}

	for ( i = 0; i < 10; i++)
	{
		avg = avg + arr[i];
	}
	avg = avg / 10;
	printf("전체 학생의 평균은? : %d\n", avg);
	for ( i = 0; i < 10; i++)
	{
		printf("학생 %d", i + 1);
		if (arr[i] >= avg)
		{
			printf("합격\n");
		}
		else
		{
			printf("불합격\n");
		}
	}*/

	// 소수 프로그램

	/*int guess = 5;
	int prime[1000];

	int index = 1;
	int i;
	int ok;

	prime[0] = 2;
	prime[1] = 3;

	for (;;)
	{
		ok = 0;
		for (i = 0; i <index; i++)
		{
			if (guess % prime[i] != 0)
			{
				ok++;
			}
			else
			{
				break;
			}
		}

		if (ok == (index + 1))
		{
			index++;
			prime[index] == guess;

			printf("소수 : %d\n", prime[index]);

			if (index == 999)
			{
				break;
			}
			guess += 2;
		}
	}*/

	// 상수

    // 상수를 정의시킬 값이 없다면 오류가 발생한다
	/*const int a = 3;

	printf("%d", a);


	const int a = 3; 
	a = a + 3; // 값을 변경하려고 했기 때문에 오류 발생

	printf("%d", a);*/

	return 0;
}