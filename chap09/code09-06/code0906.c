#include <stdio.h>

typedef char String[1024];

typedef struct {
  String name;
  int hp;
  int attack;
  /* :  実際には100近いメンバを持つはず */
} Monster;

void printMonsterSummary(Monster* m)
{
  printf("モンスター %s (HP=%d)\n", (*m).name, (*m).hp);
}                                /* 指定アドレスにある情報にアクセス */

int main(void)
{
  Monster suzaku = {"朱雀", 100, 80, /* … ここに約100項目並ぶ */ };
  printMonsterSummary(&suzaku);  /* suzakuのアドレスを渡す */
  return 0;
}
