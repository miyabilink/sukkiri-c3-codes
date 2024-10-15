#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  FILE* fp;
  char text[] = "sukkriC!";     // 書き込む文字
  int len = strlen(text);       // 文字列の長さを取得
  int ch;

  // 書き込み専用でオープン
  if ((fp = fopen("memo.txt", "w")) == nullptr) {  /* コード14-1の8〜9行目を1行で書くイディオム */
    exit(1);
  }

  for (int i = 0; i < len; i++) {
    fputc(text[i], fp);         /* 配列の要素を1文字ずつ書き込む */
  }

  fclose(fp);

  // 読み取り専用でオープン
  if ((fp = fopen("memo.txt", "r")) == nullptr) {
    exit(1);
  }
                               /* ファイルを最後まで読んだらループ終了 */
  while ((ch = fgetc(fp)) != EOF) {
    printf("%c", ch);         // 標準出力（画面）に表示
  }
  printf("\n");

  fclose(fp);
  return 0;
}
