#include <stdio.h>

int main()
{
  int a = 1;
  int int_arr[10] = {0,1,2,3,4,5,6,7,8,9};

  printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);
  
  printf("%i\n", int_arr[10000]);



  return 0;
}