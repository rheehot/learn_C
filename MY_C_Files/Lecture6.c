#include <stdio.h>
#include <stdlib.h>

struct MyStruct
{
  int i;
  float f;
};

int main()
{
  printf("%zu\n", sizeof(struct MyStruct));
  return 0;
}