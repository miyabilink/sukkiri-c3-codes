#include <stdio.h>

int main(void)
{
  int i;                            /* 変数の初期値は不定 */
  printf("変数iの内容：%d\n", i);
  int a[5];                         /* 配列の要素も初期値は不定 */
  printf("配列aの要素[0]の内容：%d\n", a[0]);
  return 0;
}
