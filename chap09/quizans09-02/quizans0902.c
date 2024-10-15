#include <stdio.h>

typedef char String[1024];

int main(void)
{
  /* 練習9-2解答ここから */
  printf("(1)char型：%dバイト\n", (int)sizeof(char));    // (1)
  printf("(2)int型：%dバイト\n", (int)sizeof(int));      // (2)
  printf("(3)char*型：%dバイト\n", (int)sizeof(char*));  // (3)
  printf("(4)int*型：%dバイト\n", (int)sizeof(int*));    // (4)
  /* 練習9-2解答ここまで */

  return 0;
}
