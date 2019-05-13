//Struct
// It combines different kinds of data type.
// Struct is VERY SIMILAR TO Classes

//Struct:
//1.Default declaration is public
//2.Default inheritance of a struct is public

#include <iostream>

using namespace std;
struct X
{
	char Xr[4];
	int y;
	X(); //constructor of a struct
	~X(); // destructor of a struct
};

X::X()
{
	cout << "RRRY" <<endl;
}

X::~X()
{
	cout << "WWRRYYRYRY" << endl;
}

int main()
{
	X x;
	return 0;
}
//VERY SIMILAR TO CLASS
