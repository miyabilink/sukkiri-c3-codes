#include <stdio.h>

int main(void)
{
  bool tenki = true;
  if (tenki == true) {
    printf("洗濯をします\n");
    printf("散歩に行きます\n");
  } else
    printf("映画を観ます\n");
    printf("映画の感想をブログに書きます\n");    /* この行を追加 */
  return 0;
}
