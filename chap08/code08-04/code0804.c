#include <stdio.h>

void funcA(void);     /* funcAの存在を表明 */
void funcB(void);     /* funcBの存在を表明 */

int main(void)
{
  funcA();
  return 0;
}

void funcA(void)
{
  printf("関数Aです\n");
  funcB();
}

void funcB(void)
{
  printf("関数Bです\n");
}
