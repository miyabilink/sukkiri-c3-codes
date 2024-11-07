#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int r = rand() % 100;  /* 0〜99のいずれかの整数がrに代入される */
  printf("あなたはたぶん、%d歳ですね？\n", r);
  return 0;
}
