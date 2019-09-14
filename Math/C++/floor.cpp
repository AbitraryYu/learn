#include <iostream>

using namespace std;

//This is the floor function, will fail if n = 3e38 double precision.
int floor (double n)
{
  int inum = (int)n;
  //If n is positive and has floating point, return inum.
  if (n > 0)
    n = (n > inum)? inum: n;
  //If n is negative, return inum-1; if and only if n = 0, return 0.
  else
    n = (n < inum)? inum-1:n;
  return n;
}

int main()
{
  cout << floor(-2.5) << endl;
  cout << floor(2.3) << endl;
  cout << floor(0) << endl;
  return 0;
}
