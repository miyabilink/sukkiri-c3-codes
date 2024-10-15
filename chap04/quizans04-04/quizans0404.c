#include <stdio.h>

typedef char String[1024];

int main(void)
{
  printf("いただきます\n");
  printf("バナナを食べます\n");

  bool more = true;
  if (more) {
    printf("おかわりをください\n");
  } else {
    printf("お腹がいっぱいです\n");
  }
  printf("ごちそうさまでした\n");
  return 0;
}
