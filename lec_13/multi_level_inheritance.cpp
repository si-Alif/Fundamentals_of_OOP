#include <bits/stdc++.h>
using namespace std;

class Animal{
  public:
    string name;
    void setName(string name){
      this->name = name;
    }
    void sound(){
      cout<< this->name<< " is making Sound"<<endl;
    }
};

class Dog: public Animal{
  public:
    void bark(){
      cout<<"Bark"<<endl;
    }
};

class Pug: public Dog{
  public:

    void wag(){
      cout<<"Wagging tail"<<endl;
    }

    Pug thisObj(){
      return *this; // just to clarify that it's parent classes objects are created while Pug's object is created
    }

};


int main(void){

  Pug p1 ;
  p1.bark();
  p1.sound();
  p1.wag();

  p1.setName("Bojo...");
  p1.sound();


return 0;
}