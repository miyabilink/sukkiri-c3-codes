#include <stdio.h>

int main(void)
{
  typedef int GemList[10]; /* int[10]型にGemListという別名を与える */
  GemList gems;            /* int gems[10];と同じ */
  gems[1] = 3;
  printf("%d\n", gems[1]);
  return 0;
}
