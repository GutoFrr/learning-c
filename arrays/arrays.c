#include <stdio.h>
#include <stdlib.h>

int main()
{
  int luckyNumbers[] = {1, 2, 3, 69, 420};
  luckyNumbers[2] = 17;
  printf("%d", luckyNumbers[2]);
  return 0;
}