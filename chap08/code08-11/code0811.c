#include <stdio.h>

void add(void)
{
  int ans = x + y;      /* main関数で作った変数xとyを利用？ */
  printf("%d + %d = %d\n", x, y, ans);
}

int main(void)
{
  int x = 100;
  int y = 50;
  add();

  return 0;
}
