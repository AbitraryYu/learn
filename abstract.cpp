//Abstract class -- a class with PURE VIRTUAL FUNCTION.
// Pure virtual function -- a virtual function with a pure specifier (=0)


// Pure virtual function has NO IMPLEMENTATION

#include <iostream>

using namespace std;
//Abstract Class
class Abstract{
public:
	virtual void foo() = 0;
};

//Abstract class:
//1. Cannot create instances (i.e. Abstract a;)
//2. Can declare pointers
//3. Pure virtual function can be called.

class Math: public Abstract
{
    public:
        virtual void foo() {cout << "gd" << endl;}; //This foo() MUST be defined, otherwise error occurs.
};

int main()
{
    Abstract* abstract = new Math();
    abstract->foo(); //Function overriden by Math;
    //OR eqvilvalent to 
    Math math;
    math.foo(); //Function overriden by Math;
}
