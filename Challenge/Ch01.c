#include <stdio.h>

/* 체중과 키를 입력하여 BMI를 구한 후에 BMI의 값이 20.0 이상 25.0미만이면 "표준입니다"를 출력하고 그렇지 않으면 "체중관리가 필요합니다"를 출력 */

int main(void)

{
	double weight, height, bmi;

	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf_s("%lf%lf", &weight, &height);

	height = height / 100.0;
	bmi = weight / (height * height);

	((bmi >= 20.0) && (bmi < 25.0))
		? printf("표준입니다\n")
		: printf("체중관리가 필요합니다.\n");

	return 0;
}