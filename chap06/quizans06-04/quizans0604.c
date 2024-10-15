#include <stdio.h>

typedef char String[1024];

int main(void)
{
  /* 練習6-4解答ここから */
  typedef struct {
    String name;       // 氏名
    String phone;      // 電話番号
    String company;    // 会社名
    String address;    // 住所
  } BizCard;
  /* 練習6-4解答ここまで */

  return 0;
}
