//Multiple inheritance C++
//For multiple inheritance, simply add a comma after the class you want to derive.
//Problem 1: ambiguity
//Problem 2: Diamond of death

#include <iostream>

using namespace std;

class Human
{
public:

void H(){cout << "hiu" << endl;}
};

class Warrior:public virtual Human
{
public:
void H(){cout << "dhq" << endl;}
};

class Hero: public virtual Warrior, public virtual Human //Add the keyword virtual in Dervied class to prevent Diamond of death
{
public:
void H(){cout << "alkdf" << endl;}
};

int main()
{
Hero h;
h.Human::H();
h.Warrior::H(); //Need to specify which H() you are calling
h.Hero::H();
return 0;
}
