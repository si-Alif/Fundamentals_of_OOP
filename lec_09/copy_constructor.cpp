#include <bits/stdc++.h>
using namespace std;

class Example{
  int serial;
  public :
    Example(int _serial){
      serial = _serial;
    }
    Example(Example *ex) { serial = ex->serial * 2; } // Copy constructor is just a special overloaded constructor with a parameter which is the type of the class itself and just like typical early binding / compiletime polymorphism , this is done at compile time
};

int main(void){

  Example e1(911);
  Example e2(&e1);

return 0;
}