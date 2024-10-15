#include <stdio.h>

int main(void)
{
  bool lowCharging = true;
  while (lowCharging == true) {   /* バッテリーが少ない間は… */
    printf("30分充電する\n");
  }                               /* 5行目でfalseを代入した場合、 */
  return 0;                       /* 無限に繰り返されますので     */
}                                 /* Ctrl+Cで強制終了してください */
