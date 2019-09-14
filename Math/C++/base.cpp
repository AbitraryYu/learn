// This is a base conversion of decimal, hexadecimal and binary.
//Must compile with C++11: g++ -std=c++0x  -o test example.cpp 
#include <iostream>
#include <string.h>

using namespace std;



char* numberToBaseString(int[] Number,int Base)
{
  //if Number is less than Base the set Output to String(Number)
  char Output[32] = {};
  if (Number < Base)
    for (i =0; i < 32; i++)
      Output[i] = Number[i];
  else
    {
      //Find the remainder Rem when you divide Number by Base
      int[] Rem = Number % Base;
      //set Output to Rem
      for (i=0; i<32;i++)
        Output[i] = Rem[i];
      //set ReducedNumber to (Number-Rem)/Base
      int ReducedNumber = (Number - Rem)/ Base;
      //set RestOfString to numberToBase String(ReducdedNumber, Base)
      char* RestOfString = numberToBaseString(ReducedNumber, Base);
      //Append RestOfString to the front of Output
      strcat(Output,RestOfString);
    }
  return Output;
  }

int main()
{
  cout << numberToBaseString(245, 10);
}
