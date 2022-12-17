#include <iostream>
#include <iostream>

//eg With the default constructor/
// class Player{
//   private:
//   std::string name;
//   int health;
//   int xp;
// public:

// void set_name(std::string name_val){
//   name = name_val;
// }
// std::string get_name(){
//   return name;
// }
// };
// int main(){
// Player faisal;// Since we have not provided a constructor, C++ will use a default no args constructor while creating this instrance.
// faisal.set_name("Faisal");
// faisal.get_name();



//   return 0;
// }
//----------------------------------------------------------------//

//eg With user defined no args constructor

// class Player{
//   private:
//   std::string name;
//   int health;
//   int xp;
// public:

// void set_name(std::string name_val){
//   name = name_val;
// }
// std::string get_name(){
//   return name;
// }
// Player(){// USER DEFINED CONSTRUCTOR
//   name = "None";
//   health = 100;
//   xp = 3;
// }
// };
// int main(){
// Player faisal;// Since we have  provided a constructor, C++ will not use a default no args constructor while creating this instrance.
// faisal.set_name("Faisal");
// faisal.get_name();



//   return 0;
// }

//----------------------------------------------------------------//

//eg With three args defined no args constructor

class Player{
  private:
  std::string name;
  int health;
  int xp;
public:

void set_name(std::string name_val){
  name = name_val;
}
std::string get_name(){
  return name;
}
Player(){// no args constructor
 name = "None";
  health = 100;
  xp = 3;
}
Player(std::string name_val, int health_val, int xp_val){// USER DEFINED CONSTRUCTOR THREE ARGS CONSTRUCTOR
  name = name_val;
  health = health_val;
  xp = xp_val;
}
};
int main(){
Player hero; //Here the no args constructor will be called   
Player faisal("Faisal", 100, 13);// Since we have  provided a three args constructor, C++ will use the three args constructor while creating this instrance.
faisal.set_name("Faisal");
faisal.get_name();



  return 0;
}