#include <stdio.h>

int main() {
	
	// 섭씨온도를 화씨로 바꾸기
	double celsius; // 섭씨 온도

	printf("섭씨 온도를 화씨 온도로 바꾸는 프로그램\n");
	printf("섭씨 온도를 입력 : ");
	scanf_s("%lf", &celsius); // 섭씨 온도를 입력 받기
	// scanf_s 사용하는 이유는 입력받는 데이터의 크기를
	// 확인하지 않기 때문에 버퍼 오버플로우
	// (입력받는 데이터의 크기가 준비된 공간보다 큰 문제)가 발생 할 수 있기 때문

	printf("섭씨 %.1f 도는 화씨로 %.1f 도 입니다\n", celsius, 9 * celsius / 5 + 32);


	return 0;
}