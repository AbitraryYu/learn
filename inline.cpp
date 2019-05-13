//Inline functions
//When inline keyword is specified on a function, it will generate a copy at compile time once the function is called.
#include <iostream>

using namespace std;

inline int Max(int x, int y)
{
    return (x>y)? x:y; //Check if (condition)? IsTrue:IsFalse;
}

int main()
{
    cout << Max(20,10) << endl;
    cout << Max(1,4) << endl;
}

