// Online C++ compiler to run C++ program online

//How to access instance members from outside the class
#include <iostream>
#include <string>

class Player{
    private:
    std::string name;
    int health;
    int xp;
    
    public:
   void set_name(std::string name_val);
   std::string get_name();
    
};

void Player::set_name(std::string name_val){
    name = name_val;
}
std::string Player::get_name(){
    return name;
}

int main() {
   Player faisal;
   faisal.set_name("Faisal");
  std::cout<< faisal.get_name() << std::endl;

    return 0;
}