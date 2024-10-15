#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE* fp;
  char wbuf[64];

  // 書き込み専用でオープン
  if ((fp = fopen("memo.txt", "w")) == nullptr) {
    exit(1);
  }
                                                      /* 文字列を一度に書き込む */
  fputs("government of the people, \nby the people, \nfor the people", fp);

  fclose(fp);

  // 読み取り専用でオープン
  if ((fp = fopen("memo.txt", "r")) == nullptr) {
    exit(1);
  }
         /* 改行文字までを配列に読み取る */
  while (fgets(wbuf, 64, fp) != nullptr) {   /* ファイルを最後まで読んだらループ終了 */
    printf("%s", wbuf);    // 標準出力（画面）に表示
  }
  printf("\n");

  fclose(fp);

  return 0;
}
