#include "Account.h"
#include <string>

void Account::set_name(std::string n){
name = n;
}
std::string Account::get_name(){
  return name;
}
