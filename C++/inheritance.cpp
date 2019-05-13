// Inheritance
/* There are two classes where one class is the parent of another class (i.e. the another class is the child class)*/
//Inherited class inherit everything expect:
//1. Consturctor, desturctor, copy consturctor
//2. Overloaded operators
//3. Friend functions
//4. Parent private variables (here, I mean is derived class , the child class)

#include <iostream>

using namespace std;

class Player{
    protected: //Note: protected are accessible in derived classes only.
        int strength, intellect;
    public:
        int level;
        void setAttributes(const int, const int);
};

void Player::setAttributes(const int newStrength, const int newIntellect){
    strength = newStrength;
    intellect = newIntellect;
};

class Wizard: public Player{
    public:
        int castSpell() const;
        int meleeAttack() const;
};

int Wizard::castSpell() const{
    return (intellect * level);
};

int Wizard::meleeAttack() const{
    if (level >= 10) return (strength*level);
    else return 1;
};

class Paladins: public Player{
    public:
        int castSpell() const;
        int meleeAttack() const;
};

int Paladins::castSpell() const{
    if (level > 10) return (strength*level);
    else return 1;
};

int Paladins::meleeAttack() const{
    return (strength * level);
};


int main() {
    Paladins player1;
    Wizard player2;

    player1.level = 3;
    player2.level = 10;

    player1.setAttributes(20,2);
    player2.setAttributes(5, 23);

    cout << player1.castSpell() << " " << player1.meleeAttack() << endl;
    cout << player2.castSpell() << " " << player2.meleeAttack() << endl;

    return 0;
};
