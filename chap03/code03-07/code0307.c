#include <stdio.h>

int main(void)
{
  int i = 3.2;      /* ムリな代入で小数以下が失われて3になる */
  printf("%d\n", i);
  return 0;
}
