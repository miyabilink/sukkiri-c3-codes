#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE* fp;
  int wbuf = 100;  // 書き込みデータ
  int rbuf;        // 読み取り用領域

  // 書き込み専用バイナリモードで開く
  if ((fp = fopen("try.dat", "wb")) == nullptr) {
    exit(1);
  }

  fwrite(&wbuf, sizeof(int), 1, fp);  /* int型(4バイト)を1個書き込む */
  fclose(fp);

  // 読み取り専用バイナリモードで開く
  if ((fp = fopen("try.dat", "rb")) == nullptr) {
    exit(1);
  }

  int cn = fread(&rbuf, sizeof(int), 1, fp);  /* int型(4バイト)を1個読み取る */
  fclose(fp);

  printf("%d個のデータを読み取りました：%d\n", cn, rbuf);

  return 0;
}
