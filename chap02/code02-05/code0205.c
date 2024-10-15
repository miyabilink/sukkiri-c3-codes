#include <stdio.h>

int main(void)
{
  double pi = 3.14;  // 円周率を入れた変数
  int pie = 5;
  printf("半径%dcmのパイの面積は%f\n", pie, pie * pie * pi);
  printf("パイの半径を倍にします\n");
  pi = 10;           /* NG！ 代入すべき変数はpie */
  printf("半径%dcmのパイの面積は%f\n", pie, pie * pie * pi);
  return 0;
}
