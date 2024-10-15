#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE* fp;
  char wbuf[] = "0123456789";  // 書き込みデータ
  char rbuf[16];               // 読み取り用領域

  // 書き込み専用バイナリモードで開く
  if ((fp = fopen("try.dat", "wb")) == nullptr) {
    exit(1);
  }

  fwrite(wbuf, 10, 1, fp);  /* char配列(10バイト)1個を書き込む */
  fclose(fp);

  // 読み取り専用バイナリモードで開く
  if ((fp = fopen("try.dat", "rb")) == nullptr) {
    exit(1);
  }

  int cn = fread(rbuf, 1, 10, fp);  /* char型1文字(1バイト)を10個読み取る */
  rbuf[10] = '\0';  // 文字列の終端を付加
  fclose(fp);

  printf("%d個のデータを読み取りました：%s\n", cn, rbuf);

  return 0;
}
