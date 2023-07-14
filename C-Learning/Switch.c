#include <stdio.h>

int main() {
	
	// if문으로 구현
	/*int input;

	printf("마이펫\n");
	printf("무엇을 하실 것인지 입력 : \n");
	printf("1. 밥주기\n");
	printf("2. 씻기기\n");
	printf("3. 재우기\n");

	scanf_s("%d", &input);

	if (input == 1)
	{
		printf("맛있다\n");
	}
	else if (input == 2) {
		printf("시원하다\n");
	}
	else if (input == 3) {
		printf("zzz...\n");
	}
	else {
		printf("멍멍 뭔 소리임");
	}*/
	// if문으로 구현한다면 상당히 불편하다
	// 동일한 변수에 대해 비교문이 반복되는경우에
	// switch문을 적용하면 편하다.

	// switch문으로 구현

	/*int input;

	printf("마이펫\n");
	printf("무엇을 하실 것인지 입력 : \n");
	printf("1. 밥주기\n");
	printf("2. 씻기기\n");
	printf("3. 재우기\n");

	scanf_s("%d", &input);

	switch (input)
	{
	case 1:
		printf("맛있다\n");
		break;
	case 2:
		printf("시원하다\n");
		break;
	case 3:
		printf("zzz\n");
		break;
	default:
		printf("멍멍 뭔 소리임\n");
		break;
	}*/

	//switch (/*변수*/)
	//{
	//case /*값1*/:
	//	// 명령;
	//	break;
	//}

	// switch문에 사용될 변수로는 반드시 정수여야 한다
	// 변수 부분에 들어가는 변수들의 타입은
	// char, short, int, long 중의 하나여야 한다
	// float이나 double이라면 오류가 발생된다
	// default는 if문의 else와 같은 역활을 한다

	// 영어 말하기
	char i;

	printf("알파벳 읽기");
	printf("알파벳 : ");

	scanf_s("%c", &i);

		switch (i)
		{
		case 'a':
			printf("에이\n");
			break;
		case 'b':
			printf("비\n");
			break;
		case 'c':
			printf("씨\n");
			break;

		default:
			printf("머리가 나빠서...ㅎ");
			break;
		}

	return 0;
}