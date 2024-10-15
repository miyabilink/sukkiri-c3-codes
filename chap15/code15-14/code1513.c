#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
  return a - b;   /* (A)足し算のはずなのに引き算をしている */
}

int main(void)
{
  char* str = (char *)malloc(3);  /* (B-1)対応するfreeがない */
  str[3] = -1;  /* (B-2)アクセスしてはならないメモリ領域に触れている */

  int x = 0;
  if (x != 0) { printf("something wrong?\n"); }
     /* (C)ムダな比較を行っている */
  return 0;
}
