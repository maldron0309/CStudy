#include <stdio.h>

/* 5명의 나이를 저장할 배열을 선언하고 사용하는 방법 */

int main() {

	int array[5]; // int형 요소 5개의 배열 선언

	array[0] = 10; // 첫 번째 배열 요소에 10 대입
	array[1] = 20; // 두 번째 배열 요소에 20 대입
	array[2] = array[0] + array[1]; // 첫 번째와 두 번째 요소를 더해 세 번째 요소에 저장
	scanf_s("%d", &array[3]); // 키보드로 입력받아  네 번째 요소에 저장

	printf("%d\n", array[2]); // 세 번째 배열 요소 출력
	printf("%d\n", array[3]);
	printf("%d\n", array[4]); // 마지막 배열 요소는 쓰레기 값

	return 0;
}