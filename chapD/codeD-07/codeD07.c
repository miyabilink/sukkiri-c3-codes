#include <stdio.h>

/* コードD-7ここから */
static int add(int a, int b)    /* staticで利用を制限 */
{
  return a + b;
}
/* コードD-7ここまで */

int main(void) {
  int a = 100;
  int b = 200;
  int c = add(a, b);
  
  printf("%d + %d = %d\n", a, b, c);

  return 0;
}