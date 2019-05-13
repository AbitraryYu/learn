/*Static*/

//Static can be initialized and assigned with values
//The variable is shared inside the class Team.
//That means, whenever you create a new class name under the class Team,
//the variable nbTeams is pointed at the same memory location.
class Team {
public:
static int nbTeams;
int Teams;
//static int nbTeams; incorrect, define in function implementation
//int nbTeams = 0; incorrect
Team() {nbTeams++;};
~Team() {nbTeams--;};
};

//Only static members can do this, ordinary declaration of variables in class is prohibited.
int Team::nbTeams = 0;
//int Team::Teams = 0; //incorrect!

#include <iostream>
using namespace std;

int main(){
Team redTeam; //nbTeams = 1
Team blueTeam; //nbTeams = 2
Team yellowTeam;  //nb Teams = 3
cout << redTeam.nbTeams << endl;
return 0;
}


