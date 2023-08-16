#include <stdio.h>

/* 전체 학점과 평점을 계산하여 신청 학점이 10학점 이상이고 평점 평균이 4.0을 넘는 경우 1을 출력하고,
   그렇지 않으면 0을 출력하는 프로그램 작성 */

int main() {

	int kor = 3, eng = 5, mat = 4; // 국어, 영어, 수학의 학점 초기화
	int credits; // 전체 학점을 저장할 변수
	int res; // 연산 결과를 저장할 변수

	double kscore = 3.8, escore = 4.4, mscore = 3.9; // 각 과목의 평점 초기화
	double grade; // 평점의 평균을 저장할 변수

	credits = kor + eng + mat; // 전체 학점 계산
	grade = (kor * kscore + eng * escore + mat * mscore) / credits; // 평점의 평균 계산
	res = (credits >= 10) && (grade > 4.0); // 전체 학점이 10 이상이고
	// 평점 평균이 4.0보다 크면 참이므로 결과는 1, 그렇지 않으면 거짓으로 결과는 0

	printf("%d\n", res);

	return 0;
}