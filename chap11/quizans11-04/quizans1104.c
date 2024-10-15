#include <stdio.h>

int main(void)
{
  char memarea[] = "misaki\0akagi";             /* akagiの後ろの¥0はリテラルのルール(p397)により自動的につけられる */
  char* names[2] = {&memarea[0], &memarea[7]};  /* memareaの0バイト目と7バイト目のアドレスを要素数2のchar*型配列に格納 */
  for (int i = 0; i < 2; i++) {
    printf("%s\n", names[i]);
  }

  return 0;
}
