#include <iostream>
#include "BubbleSorter.h"

using namespace std;

int data[9] = { 5, 7, 2, 9, 10, 11, -1, 12, 15 };

void print_data()
{
  for (int i = 0; i < 9; i ++)
  {
    cout << data[i] << " ";
  }
  cout << endl;
}

bool cmp(int x, int y)
{
  return x < y;
}

bool cmp2(int x, int y)
{
  return x > y;
}

int main()
{
  cout << "before sorting: ";
  print_data();
  BubbleSorter::sort(data, 9, cmp);
  cout << "after sorting with cmp: ";
  print_data();
  BubbleSorter::sort(data, 9, cmp2);
  cout << "after sorting with cmp2: ";
  print_data();
  return 0;
}

