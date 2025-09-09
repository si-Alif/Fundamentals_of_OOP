#include <bits/stdc++.h>
using namespace std;

class Bank_Account_Management_System{
  private :
    int id ;
    double balance ;
    string name ;
  public :
    Bank_Account_Management_System(int id , double balance , string name ){
      if(balance < 0) throw invalid_argument("Invalid Initial Balance . Balance must be greater than 0") ;
      this->id = id ;
      this->balance = balance ;
      this->name = name ;
    }

    void displayAccountBalance(){
      cout << "Account Holder Name : " << name << endl ;
      cout << "Account Balance : " << balance << endl ;
    }
    void deposit(double amount){
      if (amount <= 0) throw invalid_argument("Invalid deposit Amount . Amount must be greater than 0") ;
      this->balance += amount;
      cout << "Amount Deposited Successfully" << endl;
    }
    void withdraw(double amount){
      if(amount > this->balance) throw runtime_error("Insufficient Balance") ;
      if (amount <= 0) throw invalid_argument("Invalid withdraw Amount . Amount must be greater than 0") ;
      this->balance -= amount;
      cout << "Amount Withdrawn Successfully" << endl;
    }
};

int main(void){

  try{

    Bank_Account_Management_System b1(1 , 100 , "Aman");
    b1.displayAccountBalance();
    b1.deposit(1000);
    b1.displayAccountBalance();
    b1.withdraw(2000);
    b1.displayAccountBalance();

  }
  catch (invalid_argument& e){
    cerr << e.what() << endl;
  }
  catch (runtime_error& e){
    cerr << e.what() << endl;
  }

return 0;
}