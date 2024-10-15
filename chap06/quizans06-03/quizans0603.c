#include <stdio.h>

typedef char String[1024];

int main(void)
{
  struct BOOK {
    String title;        // 書名
    String author;       // 著者名
    String publisher;    // 出版社
    int price;           // 価格
    int page;            // ページ数
  };

  /* 練習6-3解答ここから */
  struct BOOK text = {"スッキリ家計簿", "立花いずみ", "蜜柑書房", 1200, 258};
  struct BOOK dictionary = {"マンモス大全", "湊雄輔", "雅出版", 5500, 208};
  /* 練習6-3解答ここまで */

  return 0;
}
