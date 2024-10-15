#include <stdio.h>

int add(int x, int y)
{
  int ans = x + y;
  return ans;

  printf("addを終了します\n");    /* この文は実行されない */
}

int main(void)
{
  int year = 2025;
  add(year, 4);
  add(year, 50);

  return 0;
}
