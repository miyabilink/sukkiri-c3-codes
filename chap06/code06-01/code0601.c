#include <stdio.h>

typedef char String[1024];

int main(void)
{
  String seiryuName = "青龍";
  int seiryuHp = 100;
  int seiryuAttack = 20;
  String suzakuName = "朱雀";
  int suzakuHp = 100;
  int suzakuAttack = 30;
  String byakkoName = "白虎";
  int byakkoHp = 100;
  int byakkoAttack = 10;
  String genbuName = "玄武";
  int seiryuHp = 100;        /* コンパイルエラー（コピー＆ペ−ストのせいで変数名が重複） */
  /* ここに攻撃力の変数を用意し忘れている */
  /* : */
}
