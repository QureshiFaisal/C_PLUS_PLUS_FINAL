#include <iostream>
#include <string>
using namespace std;

class Account {
  // private member attributes, cannot be accessed outside the class by instance directly
  //they have to be accessed through public members of the class
  //faisal.name is to update the name is WRONG. faisal.set_name(argument) is right, the argument will update the name.
private:
string name;
double balance;

// public inline member method
public:
void set_balance(double bal){ balance = bal;};
double get_balance() { return balance;};

//public methods that will be declared outside the class
void set_name(string n);
string get_name();
};

//this is how you implement the methods that are declared outside the class
//you mention the return type, then the class name, then the scope resolution operator followed by the function
void Account::set_name(string n){
name = n;
}
string Account::get_name(){
  return name;
}

int main(){

  Account faisal;

  faisal.set_name("faisal");
  cout << faisal.get_name() << endl;

  faisal.set_balance(5000.00);
  cout << faisal.get_balance() << endl;
}