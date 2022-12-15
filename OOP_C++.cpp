#include <iostream>
#include <vector>
#include <string>
using namespace std;




class Player {
//attributes
string name;
int health;
int xp;

//methods
void talk(string);
bool is_dead();

};

int main (){
Player frank;// this is how you create instances of class Player
Player hero;

Player players[] = {frank, hero};
vector<Player> player_vec ;
player_vec.push_back(hero);
player_vec.push_back(frank);

cout << players << endl;

Player *enemy = nullptr;// this is how you create reference on heap
enemy = new Player();
delete enemy;

  return 0;
}