#include <stdio.h>

typedef char String[1024];

int main(void)
{
  /* 練習6-5ここから */
  typedef struct {
    String title;       // 件名
    String from;        // 送信元メールアドレス
    String datetime;    // 受信日時
    int size;           // サイズ(KB)
    bool attached;      // 添付ファイルの有無
    String body;        // 本文
  } Mail;

  Mail m = {"あけましておめでとう", "sugawara@miyabilink.jp",
      "2025/01/01 10:10:58", 302, false};
  /* 練習6-5ここまで */

  return 0;
}
