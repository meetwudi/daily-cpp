#include "BubbleSorter.h"

void BubbleSorter::sort(int* data, int len, bool (*cmp)(int, int))
{
  for (int i = len - 1; i >= 0; i --)
  {
    for (int j = 0; j < i; j ++)
    {
      if (!cmp(data[j], data[j + 1]))
      {
        BubbleSorter::swap(&data[j], &data[j + 1]);
      }
    }
  }
}

void BubbleSorter::swap(int* x, int* y)
{
  int tmp = *x;
  *x = *y;
  *y = tmp;
}