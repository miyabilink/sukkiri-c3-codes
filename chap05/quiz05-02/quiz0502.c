#include <stdio.h>

int main(void)
{
  {
    /* 練習5-2(1)ここから */
    int count = 0;
    while (count < 10) {
      count++;
    }
    /* 練習5-2(1)ここまで */
  }

  {
    /* 練習5-2(2)ここから */
    int count = 10;
    do {
      count++;
    } while (count < 10);
    /* 練習5-2(2)ここまで */
  }

  {
    /* 練習5-2(3)ここから */
    for (int count = 10; count >= 0; count--) {
      if (count != 0) {
        printf("%d, ", count);
      } else {
        printf("booster ignition and liftoff!\n");
      }
    }
    /* 練習5-2(3)ここまで */
  }

  return 0;
}

/* (1)〜(3)をそれぞれブロックで囲んでいます
   C言語ではifやforなどの制御構文以外でもこのように自由にブロックを使うことができます */
