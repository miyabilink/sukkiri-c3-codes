#include <stdio.h>

typedef char String[1024];

int main(void)
{
  char ages[1024] = {19, 21, 29, 29};  /* 仮に4000〜5023番地 */
  String str = "hello";                /* 仮に8000〜9023番地 */
  printf("%s\n", str);

  for (int i = 0; i < 10; i++) {
    printf("%d, ", str[i]);
  }
  printf("\n");
  return 0;
}
