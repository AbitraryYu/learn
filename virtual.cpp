//What you need to know FIRST: INHERITANCE, KEYWORD PROTECTED
//For better understanding, read: FUNCTION OVERRIDING.
//This technique is also called: POLYMORPISM
//https://beginnersbook.com/2017/09/cpp-function-overriding/

//Virtual keyword.
//This is useful when we have a base class with the same function name as the dervied class.
//Adding virtual keyword overrides the function to the function you are calling to.

//https://stackoverflow.com/questions/2391679/why-do-we-need-virtual-functions-in-c

//Example
#include <iostream>

using namespace std;

class Animal
{
    public:
        void sleep()
        {
            cout << "Sleepin'" << endl;
        }
        virtual void wake()
        {
            cout << "Woken up" << endl;
        }
};

class Primate: public Animal //This inherits all functions (i.e. sleep())
{
    public:
        void sleep()
        {
            cout << "zzz..." << endl;
        }
        void wake()
        {
            cout << "Morning" << endl;
        }
};
//Notice this sleep() in the Primate class is DIFFERENT in the sleep() in the Animal class. Their memory locations are different. This sleep() is a reference to the parent sleep(). The function is overriden when it is called.

void func(Animal *abc)
{
    abc->sleep();
}

void func2(Animal *abc)
{
    abc->wake();
}

int main()
{
    Primate* human = new Primate; //human stores the ADDRESS of the Primate
    Animal* animal = new Animal;
    
    //Demonstrates function overriding
    animal->sleep(); //Output: Sleepin'
    human->sleep(); //Output: zzz...
    
    //Cannot override function
    func(animal); //Output: Sleepin'
    func(human); //Output: Sleepin'
    
    func2(animal); //Output: Woken up
    func2(human); //Output: Morning
    
    return 0;
}

