#include <stdlib.h>
#include <time.h>

int createRand(int max)         // 練習13-3(1)
{
  srand((unsigned)time(nullptr));
  return (rand() % max) + 1;
}

char* selectMsg(int num)       // 練習13-3(2)
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
