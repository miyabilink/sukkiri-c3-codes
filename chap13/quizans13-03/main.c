#include <stdio.h>
#include "sub.h"    /* ヘッダファイルのみインクルード */

int main(void) {
  printf("%s\n", selectMsg(createRand(3)));
  return 0;
}
