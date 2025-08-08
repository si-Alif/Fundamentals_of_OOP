#include <bits/stdc++.h>
using namespace std;

class Account{
  public :
    double salary = 100000;

};

class Programmer : public Account{
  public :
    double bonus = 10000;
};

int main(void){

  Programmer homeless;

  cout<< "Salary : " << homeless.salary<<endl;
  cout<<"Bonus : " << homeless.bonus<<endl;
  cout<<"Total income : " << homeless.bonus + homeless.salary<<endl;

return 0;
}