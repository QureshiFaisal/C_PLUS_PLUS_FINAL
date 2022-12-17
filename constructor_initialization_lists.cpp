// #include <iostream>
// #include <string>
// //METHOD 1 INITIALIZES THE ATTRIBUTES AND THEN RE ASSIGNS THEM A VALUE WHEN THE CONSTRUCTOR IS CALLED
// // class Player{
// //   private:
// //   std::string name;
// //   int health;
// //   int xp;

// //   public:
// //   Player();
// //   Player(std::string name_val)
// //   Player(std::string name_val, int health_val, int xp_val )
// // };

// // Player::Player(){
// //   name = "None";
// //   health = 0;
// //   xp = 0;
// // }

// // Player::Player(std::string name_val){
// //   name = name_val;
// //   health = 0;
// //   xp = 0;
// // }

// // Player::Player(std::string name_val, int health_val, int xp_val){
// // name = name_val;
// // health = health_val;
// // xp = xp_val;
// // }

// // int main(){
// // Player empty;
// // Player frank("Frank");
// // Player villain("Villain", 100, 55);

// // }

// //----------------------METHOD---------------------------------------------

// //This method lets the constructor directly initialize the members

// class Player{
//   private:
//   std::string name;
//   int health;
//   int xp;

//   public:
//   Player();
//   Player(std::string name_val);
//   Player(std::string name_val, int health_val, int xp_val );
// };

// Player::Player()
//   : name{"None"}, health{0}, xp{0}{
 
// }

// Player::Player(std::string name_val)
//   : name{std::string name_val}, health{int health_val}, xp{int xp_value}{
  
// }

// Player::Player(std::string name_val, int health_val, int xp_val )
//   : name{std::string name_val}, health{int health_val}, xp{int xp_val}{

// }

// int main(){
// Player empty;
// Player frank("Frank");
// Player villain("Villain", 100, 55);

// }

// Section 13
// Copy Constructor



// Section 13
// Constructor Initialization Lists
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
   std::string name {"XXXXXXX"};
   int health;
   int xp;
public:
// Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player() 
    : name{"None"}, health{0}, xp{0} {
}

Player::Player(std::string name_val) 
   : name{name_val}, health{0}, xp{0} {
}
  
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
    
}

int main() {
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
}

