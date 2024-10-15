#include <stdlib.h>
#include <time.h>

/**
  @brief createRand
  @param max 生成する最大値
  @return int 生成したランダムな数
  @details ランダムな数を生成する。
*/
int createRand(int max)
{
  srand((unsigned)time(NULL));
  return (rand() % max) + 1;
}

char* selectMsg(int num)
{
  char* rem;

  switch (num) {
    case 1:
      rem = "When you give up, that’s when the game is over.";
      break;
    case 2:
      rem = "He stole something quite precious...your heart.";
      break;
    case 3:
      rem = "There’s only one truth!";
      break;
  }
  return rem;
}
