#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account {
  // private member attributes, cannot be accessed outside the class by instance directly
  //they have to be accessed through public members of the class
  //faisal.name is to update the name is WRONG. faisal.set_name(argument) is right, the argument will update the name.
private:
std::string name;
double balance;

// public inline member method
public:
void set_balance(double bal){ balance = bal;};
double get_balance() { return balance;};

//public methods that will be declared outside the class
void set_name(std::string n);
std::string get_name();
};

#endif // _ACCOUNT_H