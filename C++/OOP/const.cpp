/*Constants*/

//Study the behaviour of const placing IN FRONT and AFTER declaration of variables or functions.

#include <iostream>

using namespace std;

class A
{
   int a;

   public:
        int getA(int a) const; //Method does not change data members
        const int getA(); //The method is a constant...
};

A::getA(int a)

int main()
