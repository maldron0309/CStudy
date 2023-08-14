#include <stdio.h>
#include <string.h> // 문자열을 다룰 수 있는 string.h 헤더 파일 포함

/* char배열에 문자열 복사 */

int main() {
	
	char fruit[20] = "strawberry"; // strawberry로 초기화
	
	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

	return 0;
}
