#include <stdio.h>

typedef char String[1024];

int main(void)
{
  /* 練習6-2解答ここから */
  struct BOOK {
    String title;        // 書名
    String author;       // 著者名
    String publisher;    // 出版社
    int price;           // 価格
    int page;            // ページ数
  };
  /* 練習6-2解答ここまで */

  return 0;
}
