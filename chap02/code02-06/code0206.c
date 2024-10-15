#include <stdio.h>

int main(void)
{
  const double PI = 3.14;  /* 定数として円周率を設定 */
  int pie = 5;
  printf("パイの半径を倍にします\n");
  PI = 10;                 /* コンパイルエラーが発生、間違いに気づく */
  printf("半径%dcmのパイの面積は%f\n", pie, pie * pie * PI);
  return 0;
}
