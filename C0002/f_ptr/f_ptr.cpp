#include <iostream>

using namespace std;

const char* foo()
{
  return "This is returned by --foo--";
}

const char* bar()
{
  return "This is returned by --bar--";
}

int main()
{
  const char* (*f_ptr)();
  f_ptr = foo;
  cout << f_ptr() << endl;
  f_ptr = bar;
  cout << f_ptr() << endl;
  return 0;
}