#include <iostream>
#include "Account.h"
#include <string>
using namespace std;

int main(){

  Account faisal;

  faisal.set_name("faisal");
  cout << faisal.get_name() << endl;

  faisal.set_balance(5000.00);
  cout << faisal.get_balance() << endl;
}