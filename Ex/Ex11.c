#include <stdio.h>

/* 다음 조건에 맞도록 if문의 빈칸 채우기
   가슴 둘레가 90보다 작거나 같으면 S
   가슴 둘레가 90보다 크고 100보다 작거나 같으면 M
   가슴 둘레가 100보다 크면 L*/

int main() {

	int chest = 95; // 가슴둘레의 크기를 저장할 변수
	char size; // 옷의 사이즈를 결정해서 저장할 변수

	if (chest <= 90)
	{
		size = 'S';
	}
	else if (chest >= 90 && chest <= 100)
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}
}