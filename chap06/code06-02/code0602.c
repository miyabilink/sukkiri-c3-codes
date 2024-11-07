#include <stdio.h>

typedef char String[1024];

int main(void)
{
  struct MONSTER {        /* 構造を定めて、MONSTERというタグ名を付ける */
    String name;
    int hp;
    int attack;
  };

  struct MONSTER seiryu;  /* 「struct MONSTER型」を使って4つの変数を生成する */
  struct MONSTER suzaku;
  struct MONSTER byakko;
  struct MONSTER genbu;

  return 0;
}
