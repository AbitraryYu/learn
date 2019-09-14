#include <iostream>

using namespace std;

template <class T, class U>
T init (T num1, T num2, U &start)
{
  start =(U)1;
  return (num1+num2);
}

int main()
{
  float start = 3;
  int i = 3, j= 4;
  cout <<"The result of init gives: " << init<int,float>(i,j,start) << endl;
  cout << "The start value is: " << start << endl;
  return 0;
}
