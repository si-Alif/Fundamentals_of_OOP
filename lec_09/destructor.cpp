#include <bits/stdc++.h>
using namespace std;

class Destructor{
  double* price_of_potato_in_last_10_days;
  public:
    Destructor(){price_of_potato_in_last_10_days = new double[10];}
    ~Destructor() { delete[] price_of_potato_in_last_10_days; } //Instead of manually writing delete in the main() or wherever the object is used, we define a destructor at the class level that automatically gets called when the object dies.
};

// stack allocated destructors get it's heap allocated data members deleted once it goes out of scope
// heap allocated destructors get it's heap allocated data members deleted once it is deleted using the `delete` keyword


void out_of_scope_stack_destructor(){
  Destructor d1;



  //d1 was working fine🤗

}// until it met the end of scope😓

int main(void){

  Destructor* d1  = new Destructor();
  Destructor d2;

  //d1 was living happily🤗

  delete d1 ; //until delete came and called it's destructors and deleted itself too😓

return 0;
}