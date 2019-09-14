//This covers exception handling i.e. try catch throw

#include <iostream>

using namespace std;

template <typename T>
T Division(T a, T b)
{
  T result;
  result = a/b;
  return result;
}

int main()
{
  float a, b, c;
  cout << "Insert the values a and b respectively" << endl;
  cin >> a >> b;
  if (b == 0)
    {
      throw "Division by zero!";
    }
  c = Division<float>(a,b);
    cout << c << endl;


}
