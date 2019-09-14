#include <iostream>

using namespace std;

//This is the ceiling function in math, will fail if n = 3e38
int ceil(double n)
{
  //inum stores casted integer n
  int inum = (int)n;
  //If n is positive and has significant figures, inum+1
  if (n > 0)
    n = (n > inum) ? (inum+1): inum;
  //If n is negative
  else
    n = (n < inum) ? inum: n;
  return n; 
}

int main()
{
  cout << ceil(3.2) << endl;
  cout << ceil(-3.2) << endl;
}
