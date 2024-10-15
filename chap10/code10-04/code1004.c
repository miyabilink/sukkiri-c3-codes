#include <stdio.h>

int* readyAges(void)
{
  int ages[4];            // 要素数4のint配列を作成（仮に1000-1015番地）
  return ages;            // 先頭アドレス（1000）を返す
}                         /* 関数終了に伴い1000-1015番地の確保が解除される */

int main(void)
{
  int* a = readyAges();   // 配列作成を依頼
  a[0] = 19;              /* 1000-1003番地に19を格納してしまう！ */
  return 0;
}
