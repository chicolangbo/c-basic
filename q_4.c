//함수 프로토타입 선언, 2중 함수 테스트

#include <stdio.h>
void jolly(void);
void deny(void);

int main(void)
  {
  jolly();
  jolly();
  jolly();
  deny();

  return 0;
  }

void jolly(void)
{
  printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
  printf("which nobody can deny!\n");
}