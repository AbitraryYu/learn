//Operator overloading
//Add or change the meaning of the operator.

#include <iostream>

using namespace std;

class Box
{
    public:
        double getVolume(void)
        {return length * breadth * height;}
        void setLength (double len)
        {length = len;}
        void setBreadth(double bre)
        {breadth = bre;}
        void setHeight(double hei)
        {height = hei;}
    //Overload + operator to add two Box objects
    Box operator + (const Box& b)
    {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this ->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
    private:
    double length;
    double breadth;
    double height;
};

int main()
{
    Box b1;
    Box b2;
    Box b3;
    double volume = 0;

    b1.setLength(4);
    b1.setBreadth(4);
    b1.setHeight(3);

    b2.setLength(1);
    b2.setBreadth(1);
    b2.setHeight(2);
    
    b1 = b1+b2; //This is NOT a arithmatic operation, this + sign is overloaded.    

    volume = b1.getVolume();
    cout << "Volume of Box1: " << volume << endl;

    return 0;
}
