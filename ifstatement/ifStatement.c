#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3)
{
  int result;
  if (num1 >= num2 && num1 >= num3)
  {
    return num1;
  }
  else if (num2 >= num1 && num2 >= num3)
  {
    return num2;
  }
  else
  {
    return num3;
  }

  return result;
}

int main()
{
  /*
    OR (||) operator
    if (3 < 2 || 2 > 5)
    {
      printf("True");
    }
    else
    {
      printf("False");
    }
  */

  /*
    negation operator
    if(!(3 < 2)) {
      printf("True");
    }
  */

  printf("%d", max(40, 10, 312));

  return 0;
}