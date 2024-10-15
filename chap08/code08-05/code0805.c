#include <stdio.h>

void hello(int no)
{
  if (no == 1) {
    printf("岬さん、こんにちは\n");
  } else if (no ==2) {
    printf("赤城さん、こんにちは\n");
  } else {
    printf("海藤さん、こんにちは\n");
  }
}

int main(void)
{
  printf("関数を呼び出します\n");
  hello(1);     /* 引数1を渡しながら関数を呼び出す */
  hello(2);     /* 引数2を渡しながら関数を呼び出す */
  hello(3);     /* 引数3を渡しながら関数を呼び出す */
  printf("関数の呼び出しが終わりました\n");

  return 0;
}
