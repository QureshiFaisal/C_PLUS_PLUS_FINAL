// #include <iostream>
// #include <string>

// class Player {
//   private: // private member attributes
//   std::string name;
//   int health;
//   int xp;

//   public: //public inline memeber method
//   void set_name(std::string name_val){
//     name = name_val;
//   }
//   //Overloaded constructor
//   Player(){
//     std::cout <<"No args constructor called" << std::endl;
//   }
//   Player(std::string name){
//       std::cout<< "String args constructor called"<<   std::endl;
//   }
//   Player(std::string name, int health, int xp){
//       std::cout <<"Three args constructor called"<<   std::endl;
//   }
//   ~Player(){
//       std::cout <<"Destructor called for " << name <<   std::endl;
//   }
// };
// int main (){

//   {
//  Player slayer;//no args constructor called
//  slayer.set_name("Slayer");// destructor for slayer called as it is not accessible out the block scope
//   }
//   {
//     Player frank;// no args constructor called
//     frank.set_name("frank");
//     Player hero("Hero");// string arg constructor called
//     hero.set_name("Hero");
//     Player villain("Villain",100,12);// three args constructor called
//     villain.set_name("Villain");
//   }
//   the constructors are created top to bottom destructors are invoked bottom to top.
//   Player *enemy = new Player;// no args constructor called
//   enemy->set_name("Enemey");

//   Player *level_boss = new Player("Level Boss", 1000, 300);// three args constructor called
//   level_boss.set_name("Level Boss");

//   delete enemy;
//   delete level_boss;

//   return 0;
// }

// Section 13
// Constructors and Destructors

#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   std::string name;
   int health;
   int xp;
public:
    void set_name(std::string name_val) { 
        name = name_val; 
    }
    // Overloaded Constructors
    Player() { 
        cout << "No args constructor called"<< endl;
    }
    Player(std::string name) { 
        cout << "String arg constructor called"<< endl;
    }
    Player(std::string name, int health, int xp) {
        cout << "Three args constructor called"<< endl; 
    }
    ~Player() { 
        cout << "Destructor called for " << name << endl; 
    }
};

int main() {

    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }
    
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    
    return 0;
}

