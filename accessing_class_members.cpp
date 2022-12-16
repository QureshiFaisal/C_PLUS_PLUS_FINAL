#include <iostream>
#include <string>

using namespace std;

class Account {
  //attributes 
  public:
  string name;
  double balance;

  void deposit (double bal){
    bal = balance + bal;
    cout << "Money deposited, new balance is :" <<  bal << endl;
  }
  void withdraw (double bal){
    bal = balance + bal;
    cout << "Money withdrawn, new balance is " <<bal << endl;
  }
};
int main (){
Account faisals_account;
faisals_account.name = "faisal";
faisals_account.balance = 5000.0;
faisals_account.deposit(2000.00);
faisals_account.withdraw(1000.00);

// can access pointers by de-referencing them

// Account *qureshis_account = new Account ();
// *(qureshis_account).balance = 6000.0;
// //OR
// qureshis_account->balance = 6000.0;

  return 0;
}