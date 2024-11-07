#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  const int DAIKICHI = 1;    /* 定数を使って数字の意味を定義する */
  const int CHUKICHI = 2;
  const int KICHI    = 3;
  const int KYO      = 4;

  printf("あなたの運勢を占います\n");
  srand((unsigned)time(nullptr));
  int fortune = rand() % 4 + 1;

  switch (fortune) {
    case DAIKICHI:          /* 定数を使って処理内容をわかりやすくする */
      printf("大吉\n");      /* (一部コンパイラではエラーや警告が発生) */
      break;s
    case CHUKICHI:
      printf("中吉\n");
      break;
    case KICHI:
      printf("吉\n");
      break;
    default:
      printf("凶\n");
  }
  return 0;
}
