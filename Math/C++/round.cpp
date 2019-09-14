//Put ceiling and floor altogether.
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

//Rounding function return the nearest whole number.
int round(float n)

{
  int f = floor(n);
  int c = ceil(n);
  if (n-f == c-n)
    return c;
  else
    //If n-f > c-n then return c, as n is nearer c than f.
        //If c-n > n-f then return f, as n is nearer f than c.
    n = (n-f > c-n)? c:f;
  return n;
}

int main()
{

  cout << round(5.5) << endl;
  cout << round(5.2) << endl;
  cout << round(5) << endl;
}
