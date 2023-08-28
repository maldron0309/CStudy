#include <stdio.h>

/* 키가 187.5cm 이상이고 몸무게가 80.0kg 미만이면 ok를 출력하고 그 이외의 경우에는 cancel을 출력하는 프로그램 */

int main() {

	double height = 179.5; // 키를 저장할 변수 선언과 초기화
	double weight = 75.0; // 몸무게를 저장할 변수 선언과 초기화

	if (height >= 187.5 && weight <= 80.0) // 키가 187.5 이상이고, 몸무게가 80 미만이면 
	{
		printf("ok"); // ok 출력
	}
	else // 그 이외의 경우
	{
		printf("cancel\n"); // cancel 출력
	}

	return 0;
}