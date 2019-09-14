//To compile with gdb display, g++ -g abs.cpp
//In gdb, type layout next then type run, you can see the whole script.
#include <iostream>

using namespace std;

//A template that finds the absolute value.
template <class T>
T abs (T n)
{
  //if n>=0 then return n, otherwise return -n
  n = (n >= 0) ? n: -n;
  return n;
}
  int main()
{
  cout << abs<float>(5.3) << endl;
  cout << abs<float>(-5.3) << endl;
  cout << abs<int>(5) << endl;
  cout << abs<int>(-5.3) << endl;
  return 0;
}
