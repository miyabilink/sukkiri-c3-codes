#include <stdio.h>
#include <stdlib.h>  // exitを呼び出すために必要

int main(void)
{
  FILE* fp;          /* (1)FILE構造体へのポインタを宣言 */

  fp = fopen("memo.txt", "r");   /* (2)ファイルを開く */
  if (fp == nullptr) {
    printf("ファイルを開けませんでした\n");
    exit(1);         // エラーなら異常終了
  } else {
    printf("ファイルを開きました\n");
  }

  fclose(fp);       /* (4)ファイルを閉じる */

  return 0;
}
