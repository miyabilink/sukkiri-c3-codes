#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand((unsigned)time(nullptr));
  int r = rand() % 100;
  printf("あなたはたぶん、%d歳ですね？\n", r);
  return 0;
}
