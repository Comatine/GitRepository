#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ary = (int*)malloc(sizeof(int)*10);
  for (int i = 0; i < 10; i++)
  {
    ary[i] = 0;
  }
}
