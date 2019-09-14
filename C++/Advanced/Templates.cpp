#include <iostream>

using namespace std;

template <typename T>
T GetMax(T a, T b)
{
  T result;
  result = (a>b)? a:b;
  return (result);
}
/*
You can even pass more than one generic types, typically they are:
template <T, U, V>
 */

int main()
{
  int i =5, j=8, k;
  double a = 5.3, b= 4.2, c;
  k = GetMax<int>(i,j);
  c = GetMax<double>(a,b);
  cout << k << endl;
  cout << c << endl;
  return 0;
}
