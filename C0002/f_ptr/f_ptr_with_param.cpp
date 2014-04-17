#include <iostream>

using namespace std;

void inc(int* i, int increasement)
{
  *i += increasement;
}

int main()
{
  int val = 9;
  void (*f_ptr)(int*, int);
  cout << "value of val before calling f_ptr: " << val << endl;
  f_ptr = inc;
  f_ptr(&val, 9);
  cout << "value of val after calling f_ptr: " << val << endl;
  return 0;
}