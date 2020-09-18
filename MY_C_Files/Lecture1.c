
#include <stdio.h>
//#include <limits.h>
//#include <stdlib.h>

int main()
{
  unsigned int i = 0;

  printf("%u\n", sizeof(unsigned int));
  printf("%u", sizeof(i));

  //// i to binary representation
  //char buffer[33]
  //+itoa(i, buffer,2);

  //// print decimal and binary
  //printf("decimal: %u\n", i);
  //printf("binary: %s\n", buffer);

  return 0;
}