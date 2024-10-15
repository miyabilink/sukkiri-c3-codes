#include <stdio.h>
#include <assert.h>

int main(void)
{
  printf("START\n");
  int a = 9 / 4;
  assert(a == 4.5);  /* 実行時エラーが発生する可能性のある処理（計算の結果が4.5であると推測）*/
  printf("FINISH\n");

  return 0;
}