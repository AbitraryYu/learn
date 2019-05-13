/*Friendship*/
//Friends can gain access to all the variables/functions declared in the class. However, the friends are NOT inside the declared class, they could be a seperate function or a seperate class (i.e. another class) 


#include <iostream>

using namespace std;

class Box{
    double width;
    public:
    double length;
    friend void printWidth(Box box); //This is a friend function.
    friend class LinkedClass; //This is a friend class.
    void setWidth (double wid);
};

//Linked class is a friend
class LinkedClass
{
    public:
    void showwidth(Box box) //to access that aforementioned class, parse in the parameter class Box to it.
    {
        cout << "LinkedClass displays " << box.width << endl;
    }
};

void Box::setWidth(double wid){
    width = wid;
}

void printWidth (Box box){
    cout << "Width of box: "  << box.width << endl;
}

int main(){
    Box box;

    LinkedClass Link; // A friend class of box

    box.setWidth(10.0);

    printWidth(box);

    Link.showwidth(box);

    return 0;
}

/*Difference between inherited class and friend class*/

/*Access Right: Inheritence only gain access (at most) to protected*/
/*		Friends gain access to private variables.	   */
