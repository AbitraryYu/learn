#include <iostream>

using namespace std;

template <class T>
void multiples (T &sum , T x, int n)
{
  sum = (T)1;
  for (int i =1; i<=n ;i++)
    sum += i*x;
}

int main()
{
  int sum;
  multiples(sum, 4,4);
  cout << "The sum is: " << sum << endl;
  return 0;
}
