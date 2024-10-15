#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE* fp;
  char header[54] = {};        // 管理情報を格納する
  char image[192] = {};        // 画像データを格納する(3×W8×H8)

  // 管理情報を作成
  header[0] = 66;
  header[1] = 77;

  int* di;
  di = (int*)(header + 2);     // ファイルサイズ
  *di = 246;
  di = (int*)(header + 10);
  *di = 54;
  di = (int*)(header + 14);
  *di = 40;
  di = (int*)(header + 18);    // 横幅ピクセル数W
  *di = 8;
  di = (int*)(header + 22);    // 縦幅ピクセル数H
  *di = 8;

  short* ds;
  ds = (short*)(header + 26);
  *ds = 1;
  ds = (short*)(header + 28);
  *ds = 24;

  // 画像データを作成
  for (int i = 0; i < 192; i += 3){
    image[i] = -1;             // 青
    image[i+1] = 0;            // 緑
    image[i+2] = 0;            // 赤
  }

  if ((fp = fopen("bluebox.bmp", "wb")) == nullptr) {
    exit(1);
  }

  // データ書き込み
  fwrite(header, 54, 1, fp);   // 管理情報
  fwrite(image, 192, 1, fp);   // 画像データ

  fclose(fp);

  return 0;
}
