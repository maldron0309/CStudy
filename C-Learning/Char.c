/* scanf 총 정리  */
#include <stdio.h>
int main() {
  char ch;  // 문자
  // 한글은 2 바이트 이상 차지하기 때문에
  // 최대 1 바이트를 차지하는 char에 한글을 치면 오류가 난다
  // 버퍼 오버플로우
  // 허용된 메모리 이상에 데이터를 집어넣어 발생하는 오류
  // 보안상 매우 취약하다	

  short sh;  // 정수
  int i;
  long lo;

  float fl;  // 실수
  double du;

  printf("char 형 변수 입력 : ");
  scanf("%c", &ch);

  printf("short 형 변수 입력 : ");
  scanf("%hd", &sh);
  printf("int 형 변수 입력 : ");
  scanf("%d", &i);
  printf("long 형 변수 입력 : ");
  scanf("%ld", &lo);

  printf("float 형 변수 입력 : ");
  scanf("%f", &fl);
  printf("double 형 변수 입력 : ");
  scanf("%lf", &du);

  printf("char : %c , short : %d , int : %d ", ch, sh, i);
  printf("long : %ld , float : %f, double : %f \n", lo, fl, du);
  return 0;
}