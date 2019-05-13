//This pointer
//It means that the this pointer is pointing to itself

/*Why use this if we know the variables declared are inside the scope of the this pointer (i.e. variables declared in class and use this->variable = variable to represent assignation.)*/

//Answer: This is to call the ADDRESS of the instance, use the this keyword. (That means you are changing the variable at a global scope)
//Answer2: Use to differentiate the variables you are calling under the same class catorgory.

//The following is an example adopted and worked according to the Tutorialspoint this example

#include <iostream>

using namespace std;

class Grade {
    public:
        Grade(double Score = 50)
        {
            cout << "Constructor called." << endl;
            score = Score;
        }
        double Regression()
        {
            return score * 1.05;
        }
        int compare(Grade grade)
        {
            return this->Regression() > grade.Regression(); //Boolean statment. Return either 0,1.
        }

   private:
        double score; //Score
        
};

int main()
{
    Grade grade1(80);
    Grade grade2;

    if (grade1.compare(grade2))
    {
        //Return condition value = 1
        cout << "Grade 1 >= grade2" << endl;
    }
    else
    {
        //Return condition value = 0
        cout << "Grade 1 < Grade 2" << endl;
    }
    return 0;
}


