#include <stdio.h>
#include <stdlib.h>

int main()
{
  sayHi("Jonas", 30);
  sayHi("Brothers", 42);

  return 0;
}

void sayHi(char name[], int age)
{
  printf("Hello %s, you are %d old!\n", name, age);
}