#include <stdio.h>

int main(void)
{
  double d = 8.5 / 2;   /* 2（int型）を2.0（double型）に変換してから計算 */
  long l = 5 + 2L;      /* 5（int型）を5L（long型）に変換してから計算 */
  printf("%f\n", d);
  printf("%ld\n", l);   /* long型の場合は%ldを使う */
  return 0;
}
