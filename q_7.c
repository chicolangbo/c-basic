//Smile! 출력하는 함수 정의 및 호출

#include <stdio.h>

void smile(void);
int main(void)
{
  smile();
  smile();
  smile();
  printf("\n");
  smile();
  smile();
  printf("\n");
  smile();
  return 0;
}

void smile(void)
{
  printf("Smile!");
}