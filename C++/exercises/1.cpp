#include <iostream>

using namespace std;

template <class T>
T numswap (T &num1, T &num2)
{
  T temp;
  temp = num1;
  num1 = num2;
  num2 = temp;
}

int main()
{
  int x=3, y=4;
  numswap<int>(x,y);
  cout << "The value of x is :" << x << endl;
  cout << "The value of y is :" << y << endl;
  return 0;
}
